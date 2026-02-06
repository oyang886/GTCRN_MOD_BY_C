#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include "denoise16k.h"
#include "erb_data.h"
#include "sfe_data.h"
#include "conv_block1.h"
#include "conv_block2.h"
#include "stream_gtconv1.h"

kiss_fft_state* kfft;
float half_win[FREQ_SIZE] = {0.0f,0.0061358847f,0.012271538f,0.018406730f,0.024541229f,0.030674804f,0.036807224f,0.042938258f,0.049067676f,0.055195246f,0.061320737f,0.067443922f,0.073564567f,0.079682440f,0.085797310f,0.091908954f,0.098017141f,0.10412163f,0.11022221f,0.11631863f,0.12241068f,0.12849811f,0.13458070f,0.14065824f,0.14673047f,0.15279719f,0.15885815f,0.16491312f,0.17096189f,0.17700422f,0.18303989f,0.18906866f,0.19509032f,0.20110464f,0.20711137f,0.21311031f,0.21910124f,0.22508392f,0.23105811f,0.23702361f,0.24298018f,0.24892761f,0.25486565f,0.26079410f,0.26671275f,0.27262136f,0.27851969f,0.28440753f,0.29028466f,0.29615089f,0.30200595f,0.30784965f,0.31368175f,0.31950203f,0.32531029f,0.33110631f,0.33688986f,0.34266073f,0.34841868f,0.35416353f,0.35989505f,0.36561298f,0.37131721f,0.37700742f,0.38268343f,0.38834503f,0.39399204f,0.39962420f,0.40524131f,0.41084316f,0.41642955f,0.42200026f,0.42755508f,0.43309382f,0.43861625f,0.44412214f,0.44961134f,0.45508358f,0.46053872f,0.46597651f,0.47139674f,0.47679922f,0.48218378f,0.48755017f,0.49289820f,0.49822766f,0.50353837f,0.50883013f,0.51410276f,0.51935601f,0.52458966f,0.52980363f,0.53499764f,0.54017144f,0.54532498f,0.55045795f,0.55557024f,0.56066155f,0.56573182f,0.57078075f,0.57580817f,0.58081394f,0.58579785f,0.59075969f,0.59569931f,0.60061646f,0.60551107f,0.61038280f,0.61523157f,0.62005723f,0.62485951f,0.62963825f,0.63439327f,0.63912445f,0.64383155f,0.64851439f,0.65317285f,0.65780669f,0.66241580f,0.66699994f,0.67155898f,0.67609268f,0.68060100f,0.68508369f,0.68954057f,0.69397146f,0.69837624f,0.70275474f,0.70710677f,0.71143222f,0.71573085f,0.72000253f,0.72424710f,0.72846437f,0.73265427f,0.73681659f,0.74095112f,0.74505776f,0.74913639f,0.75318682f,0.75720882f,0.76120239f,0.76516724f,0.76910335f,0.77301043f,0.77688849f,0.78073722f,0.78455657f,0.78834641f,0.79210657f,0.79583693f,0.79953724f,0.80320752f,0.80684757f,0.81045717f,0.81403631f,0.81758481f,0.82110250f,0.82458931f,0.82804507f,0.83146960f,0.83486289f,0.83822471f,0.84155500f,0.84485358f,0.84812033f,0.85135520f,0.85455799f,0.85772860f,0.86086696f,0.86397284f,0.86704624f,0.87008697f,0.87309498f,0.87607008f,0.87901223f,0.88192129f,0.88479710f,0.88763964f,0.89044875f,0.89322430f,0.89596623f,0.89867449f,0.90134883f,0.90398932f,0.90659571f,0.90916800f,0.91170603f,0.91420978f,0.91667908f,0.91911387f,0.92151403f,0.92387950f,0.92621022f,0.92850608f,0.93076694f,0.93299282f,0.93518353f,0.93733901f,0.93945920f,0.94154406f,0.94359344f,0.94560730f,0.94758558f,0.94952816f,0.95143503f,0.95330602f,0.95514119f,0.95694035f,0.95870346f,0.96043050f,0.96212143f,0.96377605f,0.96539444f,0.96697646f,0.96852207f,0.97003126f,0.97150391f,0.97293997f,0.97433937f,0.97570211f,0.97702813f,0.97831738f,0.97956979f,0.98078525f,0.98196387f,0.98310548f,0.98421007f,0.98527765f,0.98630810f,0.98730141f,0.98825759f,0.98917651f,0.99005818f,0.99090266f,0.99170977f,0.99247956f,0.99321193f,0.99390697f,0.99456459f,0.99518472f,0.99576741f,0.99631262f,0.99682027f,0.99729043f,0.99772304f,0.99811810f,0.99847555f,0.99879545f,0.99907774f,0.99932235f,0.99952942f,0.99969882f,0.99983060f,0.99992472f,0.99998116f,1.0f };

// float conv_cache[2][1][16][16][33] = {0};
// float tra_cache[2][3][1][1][16] = {0};
// float inter_cache[2][1][33][16] = {0};

float last_output[HALF];
float last_x1[HALF];
float xx1[BLOCK];

cfloat X1[BLOCK];
void init_para()
{
	// init fft
	kfft = opus_fft_alloc_twiddles(BLOCK, NULL, NULL, NULL, 0);
	// init 0
	memset(xx1, 0, sizeof(xx1));
	memset(last_x1, 0, sizeof(last_x1));

	// memset(conv_cache, 0, sizeof(conv_cache));
	// memset(tra_cache, 0, sizeof(tra_cache));
	// memset(inter_cache, 0, sizeof(inter_cache));
}

// 已debug pass
static void apply_window(float* x)
{
	int i;
	for (i = 0; i < FREQ_SIZE; i++)
	{
		x[i] *= half_win[i];
	}
	for (i = 1; i < HALF; i++)
	{
		x[i + HALF] *= half_win[HALF - i];
	}
}

// 已debug, pass
static void forward_transform(cfloat* out, const float* in)
{
	int i;
	cfloat x[NFFT];
	for (i = 0; i < NFFT; i++) {
		x[i].r = in[i] * NFFT;
		x[i].i = 0.0F;
	}
	opus_fft(kfft, x, out, 0);
}

// 已debug, pass
static void inverse_transform(float* out, const cfloat* in)
{
	int i;
	cfloat x[NFFT];
	cfloat y[NFFT];
	for (i = 0; i < (NFFT >> 1) + 1; i++)
		x[i] = in[i];
	for (i = (NFFT >> 1) + 1; i < NFFT; i++) {
		x[i].r = x[NFFT - i].r;
		x[i].i = -x[NFFT - i].i;
	}
	opus_fft(kfft, x, y, 0);
	/* output in reverse order for IFFT. */
	out[0] = NFFT * y[0].r;
	for (i = 1; i < NFFT; i++)
		out[i] = y[NFFT - i].r;
}

// float real_X1[FREQ_SIZE];
// float imag_X1[FREQ_SIZE];
// float abs_X1[FREQ_SIZE];

// debug用于测试ierb 已通过
// float test_ierb[64] = { 0.20236909f, -0.22583540f, 0.22294457f, 0.033756372f, 0.10000608f, -0.16641645f, -0.059003457f, -0.027806416f, 0.042271569f, -0.16702007f, 0.047163434f, -0.12128472f, 0.0066190050f, 0.065235592f, 0.032705996f, 0.10826335f, 0.10060771f, -0.065090775f, 0.025705615f, -0.094437778f, -0.13217886f, 0.092482597f, 4.9849077e-06f, -0.0054918914f, 0.091112725f, 0.059458371f, 0.035020117f, 0.12502512f, 0.092978947f, 0.023976326f, -0.069036111f, -0.065155365f, 0.11921018f, -0.16118304f, -0.0024461937f, -0.19488472f, 0.10204980f, 0.086171627f, 0.00011620835f, -0.0070837215f, -0.24862839f, 0.058117233f, -0.21924350f, -0.23192804f, 0.0079933712f, -0.094848096f, 0.041149061f, 0.067697778f, 0.085773252f, -0.069115914f, 0.044937763f, 0.010063335f, 0.082607001f, 0.053615708f, 0.089788839f, -0.013193787f, -0.014720146f, 0.10077734f, -0.21236555f, -0.050458640f, -0.12705944f, -0.038258482f, 0.064867929f, 0.082572713f };
// float test_ierb_output[192] = { 0 };

float get_abs_X1(float real, float imag)
{
	return sqrtf(real * real + imag * imag + 1e-12f);
}

void run_denoise(float* input, float* output)
{
	float* real_X1 = (float*)malloc(sizeof(float) * FREQ_SIZE);
	float* imag_X1 = (float*)malloc(sizeof(float) * FREQ_SIZE);
	float* abs_X1 = (float*)malloc(sizeof(float) * FREQ_SIZE);

	float* erb_real = (float*)malloc(sizeof(float) * ERB_SUBBAND_2);
	float* erb_imag = (float*)malloc(sizeof(float) * ERB_SUBBAND_2);
	float* erb_abs = (float*)malloc(sizeof(float) * ERB_SUBBAND_2);

	int i, j;
	memcpy(xx1, last_x1, HALF * sizeof(float));
	memcpy(&xx1[HALF], input, HALF * sizeof(float));
	memcpy(last_x1, input, HALF * sizeof(float));

	apply_window(&xx1[0]);
	forward_transform(X1, xx1);
	
	/******************************************此处运行神经网络**************************************/
	
	for (i = 0; i < FREQ_SIZE; i++)
	{
		real_X1[i] = X1[i].r;
		imag_X1[i] = X1[i].i;
		abs_X1[i] = get_abs_X1(real_X1[i], imag_X1[i]);
	}

	// 功能1. 计算高频部分压缩ERB
	// 1. Mag, 2, real, 3. imag
	// debug check pass
	calc_erb(&abs_X1[ERB_SUBBAND_1], erb_abs);
	calc_erb(&real_X1[ERB_SUBBAND_1], erb_real);
	calc_erb(&imag_X1[ERB_SUBBAND_1], erb_imag);

	// 功能2. 补全3 x 129
	// 复用real_X1, imag_X1和abs_X1
	// 测试pass
	memcpy(&abs_X1[ERB_SUBBAND_1], erb_abs, ERB_SUBBAND_2 * sizeof(float));
	//for (i = 0; i < ERB_SUBBAND_1 + ERB_SUBBAND_2; i++)
	//{
	//	printf("第%d : %f\n", i + 1, abs_X1[i]);
	//}
	memcpy(&real_X1[ERB_SUBBAND_1], erb_real, ERB_SUBBAND_2 * sizeof(float));
	memcpy(&imag_X1[ERB_SUBBAND_1], erb_imag, ERB_SUBBAND_2 * sizeof(float));

	// 释放内存
	free(erb_real); erb_real = NULL;
	free(erb_imag); erb_imag = NULL;
	free(erb_abs); erb_abs = NULL;

	// 后续函数只拿前129个点进行计算即可
	
	// ierb 测试已通过pass
	// calc_ierb(test_ierb, test_ierb_output);
	/*for (i = 0; i < HIGH_FREQ_BINS; i++)
	{
		printf("%f\n", test_ierb_output[i]);
	}*/

	float(*sfe_input)[SFE_INPUT] = malloc(SFE_INPUT_CHANNEL * SFE_INPUT * sizeof(float));

	// 功能3: SFE扩展成9x129
	// 测试pass已通过
	get_sfe_first(abs_X1, sfe_input[0], SFE_INPUT);
	get_sfe_second(abs_X1, sfe_input[1], SFE_INPUT);
	get_sfe_third(abs_X1, sfe_input[2], SFE_INPUT);

	get_sfe_first(real_X1, sfe_input[3], SFE_INPUT);
	get_sfe_second(real_X1, sfe_input[4], SFE_INPUT);
	get_sfe_third(real_X1, sfe_input[5], SFE_INPUT);

	get_sfe_first(imag_X1, sfe_input[6], SFE_INPUT);
	get_sfe_second(imag_X1, sfe_input[7], SFE_INPUT);
	get_sfe_third(imag_X1, sfe_input[8], SFE_INPUT);
	
	// 测试二维数组, 可以pass
	//for (i = 0; i < 9; i++)
	//{
	//	printf("\n");
	//	for(j = 0; j < SFE_INPUT; j++)
	//	{
	//		printf("%f\n", sfe_input[i][j]);
	//	}
	//}

	float(*conv1_output)[OUTPUT_FREQ] = malloc(OUT_CHANNELS * OUTPUT_FREQ * sizeof(float));

	// 测试功能4: 第一层卷积convBlock
	// 测试后, pass可运行, 对比输出测试一致性pass
	calc_conv1(sfe_input, conv1_output);
	//for (i = 0; i < OUT_CHANNELS; i++)
	//{
	//	printf("\n");
	//	for (j = 0; j < OUTPUT_FREQ; j++)
	//	{
	//		printf("%f\n", conv1_output[i][j]);
	//	}
	//}
	free(sfe_input); sfe_input = NULL;

	float(*conv2_output)[CONV2_OUTPUT_FREQ] = malloc(CONV2_OUT_CHANNELS * CONV2_OUTPUT_FREQ * sizeof(float));
	// 测试功能5: 第二层卷积convBlock
	// 第二层卷积, 测试pass
	calc_conv2(conv1_output, conv2_output);
	free(conv1_output); conv1_output = NULL;
	//for (i = 0; i < CONV2_OUT_CHANNELS; i++)
	//{
	//	printf("第%d: \n", i+1);
	//	for (j = 0; j < CONV2_OUTPUT_FREQ; j++)
	//	{
	//		printf("%f\n", conv2_output[i][j]);
	//	}
	//}

	float(*gtconv1_output)[CONV2_OUTPUT_FREQ] = malloc(CONV2_OUT_CHANNELS * CONV2_OUTPUT_FREQ * sizeof(float));
	// 测试执行效果
	calc_gtconv1(conv2_output, gtconv1_output);
	for (i = 0; i < CONV2_OUT_CHANNELS; i++)
	{
		printf("第%d:\n", i + 1);
		for (j = 0; j < CONV2_OUTPUT_FREQ; j++)
		{
			printf("%f\n", gtconv1_output[i][j]);
		}
	}


	/******************************************此处运行神经网络**************************************/
	
	inverse_transform(xx1, X1);
	apply_window(xx1);
	for (i = 0; i < HALF; i++)
	{
		output[i] = (xx1[i] + last_output[i]);
	}
	memcpy(last_output, &xx1[HALF], HALF * sizeof(float));

	free(real_X1); real_X1 = NULL;
	free(imag_X1); imag_X1 = NULL;
	free(abs_X1); abs_X1 = NULL;

	// free(conv1_output); conv1_output = NULL;
	free(conv2_output);
	free(gtconv1_output);
}
