#include "sfe_data.h"

void get_sfe_first(float* input, float* output, int LENGTH)
{
	output[0] = 0.0f;
	memcpy(&output[1], &input[0], (LENGTH - 1) * sizeof(float));
}

void get_sfe_second(float* input, float* output, int LENGTH)
{
	memcpy(output, &input[0], LENGTH * sizeof(float));
}

void get_sfe_third(float* input, float* output, int LENGTH)
{
	memcpy(output, &input[1],  (LENGTH - 1) * sizeof(float));
	output[LENGTH - 1] = 0.0f;
}
