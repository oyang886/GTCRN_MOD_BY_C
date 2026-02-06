#include "erb_data.h"

#define MAX_NUM_COUNT 10

typedef struct
{
	int start_index;
	float weight[10];
}erb_node;

// total = 64
erb_node erb_data[ERB_SUBBAND_2] =
{
	// 1
	{
		.start_index = 0,
		.weight = {1.0f, 0.0f, 0.0f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 2
	{
		.start_index = 1,
		.weight = {1.0f, 0.5f, 0.0f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 3
	{
		.start_index = 2,
		.weight = {0.5f, 1.0f, 0.5f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 4
	{
		.start_index = 4,
		.weight = {0.5f, 1.0f, 0.0f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 5
	{
		.start_index = 6,
		.weight = {1.0f, 0.5f, 0.0f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 6
	{
		.start_index = 7,
			.weight = { 0.5f, 1.0f, 0.0f, 0.0f, 0.0f,
						0.0f, 0.0f, 0.0f, 0.0f, 0.0f }
	},

	// 7
	{
		.start_index = 9,
		.weight = {1.0f, 0.5f, 0.0f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 8
	{
		.start_index = 10,
		.weight = {0.5f, 1.0f, 0.5f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 9
	{
		.start_index = 12,
		.weight = {0.5f, 1.0f, 0.5f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 10
	{
		.start_index = 14,
		.weight = {0.5f, 1.0f, 0.0f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 11
	{
		.start_index = 16,
		.weight = {1.0f, 0.5f, 0.0f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 12
	{
		.start_index = 17,
		.weight = {0.5f, 1.0f, 0.5f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 13
	{
		.start_index = 19,
		.weight = {0.5f, 1.0f, 0.5f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 14
	{
		.start_index = 21,
		.weight = {0.5f, 1.0f, 0.5f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 15
	{
		.start_index = 23,
		.weight = {0.5f, 1.0f, 0.5f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 16
	{
		.start_index = 25,
		.weight = {0.5f, 1.0f, 0.5f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 17
	{
		.start_index = 27,
		.weight = {0.5f, 1.0f, 0.5f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 18
	{
		.start_index = 29,
		.weight = {0.5f, 1.0f, 0.5f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 19
	{
		.start_index = 31,
		.weight = {0.5f, 1.0f, 0.5f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 20
	{
		.start_index = 33,
		.weight = {0.5f, 1.0f, 0.66666669f, 0.33333334f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 21
	{
		.start_index = 35,
		.weight = {0.33333334f, 0.66666669f, 1.0f, 0.5f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 22
	{
		.start_index = 38,
		.weight = {0.5f, 1.0f, 0.5f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 23
	{
		.start_index = 40,
		.weight = {0.5f, 1.0f, 0.66666669f, 0.33333334f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 24
	{
		.start_index = 42,
		.weight = {0.33333334f, 0.66666669f, 1.0f, 0.5f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 25
	{
		.start_index = 45,
		.weight = {0.5f, 1.0f, 0.5f, 0.0f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 26
	{
		.start_index = 47,
		.weight = {0.5f, 1.0f, 0.66666669f, 0.33333334f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 27
	{
		.start_index = 49,
		.weight = {0.33333334f, 0.66666669f, 1.0f, 0.66666669f, 0.33333334f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 28
	{
		.start_index = 52,
		.weight = {0.33333334f, 0.66666669f, 1.0f, 0.5f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 29
	{
		.start_index = 55,
		.weight = {0.5f, 1.0f, 0.66666669f, 0.33333334f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 30
	{
		.start_index = 57,
		.weight = {0.33333334f, 0.66666669f, 1.0f, 0.5f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 31
	{
		.start_index = 60,
		.weight = {0.5f, 1.0f, 0.66666669f, 0.33333334f, 0.0f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 32
	{
		.start_index = 62,
		.weight = {0.33333334f, 0.66666669f, 1.0f, 0.66666669f, 0.33333334f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 33
	{
		.start_index = 65,
		.weight = {0.33333334f, 0.66666669f, 1.0f, 0.66666669f, 0.33333334f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 34
	{
		.start_index = 68,
		.weight = {0.33333334f, 0.66666669f, 1.0f, 0.66666669f, 0.33333334f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 35
	{
		.start_index = 71,
		.weight = {0.33333334f, 0.66666669f, 1.0f, 0.66666669f, 0.33333334f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 36
	{
		.start_index = 74,
		.weight = {0.33333334f, 0.66666669f, 1.0f, 0.66666669f, 0.33333334f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 37
	{
		.start_index = 77,
		.weight = {0.33333334f, 0.66666669f, 1.0f, 0.66666669f, 0.33333334f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 38
	{
		.start_index = 80,
		.weight = {0.33333334f, 0.66666669f, 1.0f, 0.66666669f, 0.33333334f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 39
	{
		.start_index = 83,
		.weight = {0.33333334f, 0.66666669f, 1.0f, 0.75f, 0.5f,
					0.25f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 40
	{
		.start_index = 86,
		.weight = {0.25f, 0.5f, 0.75f, 1.0f, 0.66666669f,
					0.33333334f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 41
	{
		.start_index = 90,
		.weight = {0.33333334f, 0.66666669f, 1.0f, 0.66666669f, 0.33333334f,
					0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 42
	{
		.start_index = 93,
		.weight = {0.33333334f, 0.66666669f, 1.0f, 0.75f, 0.5f,
					0.25f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 43
	{
		.start_index = 96,
		.weight = {0.25f, 0.5f, 0.75f, 1.0f, 0.66666669f,
					0.33333334f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 44
	{
		.start_index = 100,
		.weight = {0.33333334f, 0.66666669f, 1.0f, 0.75f, 0.5f,
					0.25f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 45
	{
		.start_index = 103,
		.weight = {0.25f, 0.5f, 0.75f, 1.0f, 0.75f,
					0.5f, 0.25f, 0.0f, 0.0f, 0.0f}
	},

	// 46
	{
		.start_index = 107,
		.weight = {0.25f, 0.5f, 0.75f, 1.0f, 0.66666669f,
					0.33333334f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 47
	{
		.start_index = 111,
		.weight = {0.33333334f, 0.66666669f, 1.0f, 0.75f, 0.5f,
					0.25f, 0.0f, 0.0f, 0.0f, 0.0f}
	},

	// 48
	{
		.start_index = 114,
		.weight = {0.25f, 0.5f, 0.75f, 1.0f, 0.75f,
					0.5f, 0.25f, 0.0f, 0.0f, 0.0f}
	},

	// 49
	{
		.start_index = 118,
		.weight = {0.25f, 0.5f, 0.75f, 1.0f, 0.75f,
					0.5f, 0.25f, 0.0f, 0.0f, 0.0f}
	},

	// 50
	{
		.start_index = 122,
		.weight = {0.25f, 0.5f, 0.75f, 1.0f, 0.75f,
					0.5f, 0.25f, 0.0f, 0.0f, 0.0f}
	},

	// 51
	{
		.start_index = 126,
		.weight = {0.25f, 0.5f, 0.75f, 1.0f, 0.8f,
					0.6f, 0.4f, 0.2f, 0.0f, 0.0f}
	},

	// 52
	{
		.start_index = 130,
		.weight = {0.2f, 0.4f, 0.6f, 0.8f, 1.0f,
					0.75f, 0.5f, 0.25f, 0.0f, 0.0f}
	},

	// 53
	{
		.start_index = 135,
		.weight = {0.25f, 0.5f, 0.75f, 1.0f, 0.75f,
					0.5f, 0.25f, 0.0f, 0.0f, 0.0f}
	},

	// 54
	{
		.start_index = 139,
		.weight = {0.25f, 0.5f, 0.75f, 1.0f, 0.8f,
					0.6f, 0.4f, 0.2f, 0.0f, 0.0f}
	},

	// 55
	{
		.start_index = 143,
		.weight = {0.2f, 0.4f, 0.6f, 0.8f, 1.0f,
					0.75f, 0.5f, 0.25f, 0.0f, 0.0f}
	},

	// 56
	{
		.start_index = 148,
		.weight = {0.25f, 0.5f, 0.75f, 1.0f, 0.8f,
					0.6f, 0.4f, 0.2f, 0.0f, 0.0f}
	},

	// 57
	{
		.start_index = 152,
		.weight = {0.2f, 0.4f, 0.6f, 0.8f, 1.0f,
					0.8f, 0.6f, 0.4f, 0.2f, 0.0f}
	},

	// 58
	{
		.start_index = 157,
		.weight = {0.2f, 0.4f, 0.6f, 0.8f, 1.0f,
					0.75f, 0.5f, 0.25f, 0.0f, 0.0f}
	},

	// 59
	{
		.start_index = 162,
		.weight = {0.25f, 0.5f, 0.75f, 1.0f, 0.8f,
					0.6f, 0.4f, 0.2f, 0.0f, 0.0f}
	},

	// 60
	{
		.start_index = 166,
		.weight = {0.2f, 0.4f, 0.6f, 0.8f, 1.0f,
					0.8f, 0.6f, 0.4f, 0.2f, 0.0f}
	},

	// 61
	{
		.start_index = 171,
		.weight = {0.2f, 0.4f, 0.6f, 0.8f, 1.0f,
					0.8f, 0.6f, 0.4f, 0.2f, 0.0f}
	},

	// 62
	{
		.start_index = 176,
		.weight = {0.2f, 0.4f, 0.6f, 0.8f, 1.0f,
					0.8333333f, 0.6666667f, 0.5f, 0.3333333f, 0.1666667f}
	},

	// 63
	{
		.start_index = 181,
		.weight = {0.1666667f, 0.3333333f, 0.5f, 0.6666667f, 0.8333333f,
					1.0f, 0.8f, 0.6f, 0.4f, 0.2f}
	},

	// 64
	{
		.start_index = 182,
		.weight = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
					0.2f, 0.4f, 0.6f, 0.8f, 1.0f}
	},
};

#define MAX_IERB_WEIGHT_LEN 2
typedef struct
{
	int start_index;
	float weight[2];
}ierb_node;

ierb_node ierb_data[HIGH_FREQ_BINS] = 
{
	// 1
	{
		.start_index = 0,
		.weight = {1.0f, 0.0f}
	},

	// 2
	{
		.start_index = 1,
		.weight = {1.0f, 0.0f}
	},

	// 3
	{
		.start_index = 1,
		.weight = {0.5f, 0.5f}
	},

	// 4
	{
		.start_index = 2,
		.weight = {1.0f, 0.0f}
	},

	// 5
	{
		.start_index = 2,
		.weight = {0.5f, 0.5f}
	},

	// 6
	{
		.start_index = 3,
		.weight = {1.0f, 0.0f}
	},

	// 7
	{
		.start_index = 4,
		.weight = {1.0f, 0.0f}
	},

	// 8
	{
		.start_index = 4,
		.weight = {0.5f, 0.5f}
	},

	// 9
	{
		.start_index = 5,
		.weight = {1.0f, 0.0f}
	},

	// 10
	{
		.start_index = 6,
		.weight = {1.0f, 0.0f}
	},

	// 11
	{
		.start_index = 6,
		.weight = {0.5f, 0.5f}
	},

	// 12
	{
		.start_index = 7,
		.weight = {1.0f, 0.0f}
	},

	// 13
	{
		.start_index = 7,
		.weight = {0.5f, 0.5f}
	},

	// 14
	{
		.start_index = 8,
		.weight = {1.0f, 0.0f}
	},

	// 15
	{
		.start_index = 8,
		.weight = {0.5f, 0.5f}
	},

	// 16
	{
		.start_index = 9,
		.weight = {1.0f, 0.0f}
	},

	// 17
	{
		.start_index = 10,
		.weight = {1.0f, 0.0f}
	},

	// 18
	{
		.start_index = 10,
		.weight = {0.5f, 0.5f}
	},

	// 19
	{
		.start_index = 11,
		.weight = {1.0f, 0.0f}
	},

	// 20
	{
		.start_index = 11,
		.weight = {0.5f, 0.5f}
	},

	// 21
	{
		.start_index = 12,
		.weight = {1.0f, 0.0f}
	},

	// 22
	{
		.start_index = 12,
		.weight = {0.5f, 0.5f}
	},

	// 23
	{
		.start_index = 13,
		.weight = {1.0f, 0.0f}
	},

	// 24
	{
		.start_index = 13,
		.weight = {0.5f, 0.5f}
	},

	// 25
	{
		.start_index = 14,
		.weight = {1.0f, 0.0f}
	},

	// 26
	{
		.start_index = 14,
		.weight = {0.5f, 0.5f}
	},

	// 27
	{
		.start_index = 15,
		.weight = {1.0f, 0.0f}
	},

	// 28
	{
		.start_index = 15,
		.weight = {0.5f, 0.5f}
	},

	// 29
	{
		.start_index = 16,
		.weight = {1.0f, 0.0f}
	},

	// 30
	{
		.start_index = 16,
		.weight = {0.5f, 0.5f}
	},

	// 31
	{
		.start_index = 17,
		.weight = {1.0f, 0.0f}
	},

	// 32
	{
		.start_index = 17,
		.weight = {0.5f, 0.5f}
	},

	// 33
	{
		.start_index = 18,
		.weight = {1.0f, 0.0f}
	},

	// 34
	{
		.start_index = 18,
		.weight = {0.5f, 0.5f}
	},

	// 35
	{
		.start_index = 19,
		.weight = {1.0f, 0.0f}
	},

	// 36
	{
		.start_index = 19,
		.weight = {0.6666667f, 0.3333333f}
	},

	// 37
	{
		.start_index = 19,
		.weight = {0.3333333f, 0.6666667f}
	},

	// 38
	{
		.start_index = 20,
		.weight = {1.0f, 0.0f}
	},

	// 39
	{
		.start_index = 20,
		.weight = {0.5f, 0.5f}
	},

	// 40
	{
		.start_index = 21,
		.weight = {1.0f, 0.0f}
	},

	// 41
	{
		.start_index = 21,
		.weight = {0.5f, 0.5f}
	},

	// 42
	{
		.start_index = 22,
		.weight = {1.0f, 0.0f}
	},

	// 43
	{
		.start_index = 22,
		.weight = {0.6666667f, 0.3333333f}
	},

	// 44
	{
		.start_index = 22,
		.weight = {0.3333333f, 0.6666667f}
	},

	// 45
	{
		.start_index = 23,
		.weight = {1.0f, 0.0f}
	},

	// 46
	{
		.start_index = 23,
		.weight = {0.5f, 0.5f}
	},

	// 47
	{
		.start_index = 24,
		.weight = {1.0f, 0.0f}
	},

	// 48
	{
		.start_index = 24,
		.weight = {0.5f, 0.5f}
	},

	// 49
	{
		.start_index = 25,
		.weight = {1.0f, 0.0f}
	},

	// 50
	{
		.start_index = 25,
		.weight = {0.6666667f,0.3333333f}
	},

	// 51
	{
		.start_index = 25,
		.weight = {0.3333333f,0.6666667f}
	},

	// 52
	{
		.start_index = 26,
		.weight = {1.0f,0.0f}
	},

	// 53
	{
		.start_index = 26,
		.weight = {0.6666667f,0.3333333f}
	},

	// 54
	{
		.start_index = 26,
		.weight = {0.3333333f, 0.6666667f}
	},

	// 55
	{
		.start_index = 27,
		.weight = {1.0f,0.0f}
	},

	// 56
	{
		.start_index = 27,
		.weight = {0.5f,0.5f}
	},

	// 57
	{
		.start_index = 28,
		.weight = {1.0f,0.0f}
	},

	// 58
	{
		.start_index = 28,
		.weight = {0.6666667f,0.3333333f}
	},

	// 59
	{
		.start_index = 28,
		.weight = {0.3333333f, 0.6666667f}
	},

	// 60
	{
		.start_index = 29,
		.weight = {1.0f,0.0f}
	},

	// 61
	{
		.start_index = 29,
		.weight = {0.5f, 0.5f}
	},

	// 62
	{
		.start_index = 30,
		.weight = {1.0f, 0.0f}
	},

	// 63
	{
		.start_index = 30,
		.weight = {0.6666667f,0.3333333f}
	},

	// 64
	{
		.start_index = 30,
		.weight = {0.3333333f, 0.6666667f}
	},

	// 65
	{
		.start_index = 31,
		.weight = {1.0f, 0.0f}
	},

	// 66
	{
		.start_index = 31,
		.weight = {0.6666667f,0.3333333f}
	},

	// 67
	{
		.start_index = 31,
		.weight = {0.3333333f, 0.6666667f}
	},

	// 68
	{
		.start_index = 32,
		.weight = {1.0f, 0.0f}
	},

	// 69
	{
		.start_index = 32,
		.weight = {0.6666667f,0.3333333f}
	},

	// 70
	{
		.start_index = 32,
		.weight = {0.3333333f,0.6666667f}
	},

	// 71
	{
		.start_index = 33,
		.weight = {1.0f, 0.0f}
	},

	// 72
	{
		.start_index = 33,
		.weight = {0.6666667f,0.3333333f}
	},

	// 73
	{
		.start_index = 33,
		.weight = {0.3333333f,0.6666667f}
	},

	// 74
	{
		.start_index = 34,
		.weight = {1.0f,0.0f}
	},

	// 75
	{
		.start_index = 34,
		.weight = {0.6666667f, 0.3333333f}
	},

	// 76
	{
		.start_index = 34,
		.weight = {0.3333333f,0.6666667f}
	},

	// 77
	{
		.start_index = 35,
		.weight = {1.0f,0.0f}
	},

	// 78
	{
		.start_index = 35,
		.weight = {0.6666667f,0.3333333f}
	},

	// 79
	{
		.start_index = 35,
		.weight = {0.3333333f,0.6666667f}
	},

	// 80
	{
		.start_index = 36,
		.weight = {1.0f,0.0f}
	},

	// 81
	{
		.start_index = 36,
		.weight = {0.6666667f,0.3333333f}
	},

	// 82
	{
		.start_index = 36,
		.weight = {0.3333333f,0.6666667f}
	},

	// 83
	{
		.start_index = 37,
		.weight = {1.0f,0.0f}
	},

	// 84
	{
		.start_index = 37,
		.weight = {0.6666667f, 0.3333333f}
	},

	// 85
	{
		.start_index = 37,
		.weight = {0.3333333f,0.6666667f}
	},

	// 86
	{
		.start_index = 38,
		.weight = {1.0f,0.0f}
	},

	// 87
	{
		.start_index = 38,
		.weight = {0.75f,0.25f}
	},

	// 88
	{
		.start_index = 38,
		.weight = {0.5f,0.5f}
	},

	// 89
	{
		.start_index = 38,
		.weight = {0.25f,0.75f}
	},

	// 90
	{
		.start_index = 39,
		.weight = {1.0f,0.0f}
	},

	// 91
	{
		.start_index = 39,
		.weight = {0.6666667f,0.3333333f}
	},

	// 92
	{
		.start_index = 39,
		.weight = {0.3333333f,0.6666667f}
	},

	// 93
	{
		.start_index = 40,
		.weight = {1.0f,0.0f}
	},

	// 94
	{
		.start_index = 40,
		.weight = {0.6666667f,0.3333333f}
	},

	// 95
	{
		.start_index = 40,
		.weight = {0.3333333f,0.6666667f}
	},

	// 96
	{
		.start_index = 41,
		.weight = {1.0f,0.0f}
	},

	// 97
	{
		.start_index = 41,
		.weight = {0.75f,0.25f}
	},

	// 98
	{
		.start_index = 41,
		.weight = {0.5f,0.5f}
	},

	// 99
	{
		.start_index = 41,
		.weight = {0.25f,0.75f}
	},

	// 100
	{
		.start_index = 42,
		.weight = {1.0f,0.0f}
	},

	// 101
	{
		.start_index = 42,
		.weight = {0.6666667f,0.3333333f}
	},

	// 102
	{
		.start_index = 42,
		.weight = {0.3333333f,0.6666667f}
	},

	// 103
	{
		.start_index = 43,
		.weight = {1.0f,0.0f}
	},

	// 104
	{
		.start_index = 43,
		.weight = {0.75f,0.25f}
	},

	// 105
	{
		.start_index = 43,
		.weight = {0.5f,0.5f}
	},

	// 106
	{
		.start_index = 43,
		.weight = {0.25f,0.75f}
	},

	// 107
	{
		.start_index = 44,
		.weight = {1.0f,0.0f}
	},

	// 108
	{
		.start_index = 44,
		.weight = {0.75f,0.25f}
	},

	// 109
	{
		.start_index = 44,
		.weight = {0.5f,0.5f}
	},

	// 110
	{
		.start_index = 44,
		.weight = {0.25f,0.75f}
	},

	// 111
	{
		.start_index = 45,
		.weight = {1.0f,0.0f}
	},

	// 112
	{
		.start_index = 45,
		.weight = {0.6666667f,0.3333333f}
	},

	// 113
	{
		.start_index = 45,
		.weight = {0.3333333f,0.6666667f}
	},

	// 114
	{
		.start_index = 46,
		.weight = {1.0f,0.0f}
	},

	// 115
	{
		.start_index = 46,
		.weight = {0.75f,0.25f}
	},

	// 116
	{
		.start_index = 46,
		.weight = {0.5f,0.5f}
	},

	// 117
	{
		.start_index = 46,
		.weight = {0.25f,0.75f}
	},

	// 118
	{
		.start_index = 47,
		.weight = {1.0f,0.0f}
	},

	// 119
	{
		.start_index = 47,
		.weight = {0.75f,0.25f}
	},

	// 120
	{
		.start_index = 47,
		.weight = {0.5f,0.5f}
	},

	// 121
	{
		.start_index = 47,
		.weight = {0.25f,0.75f}
	},

	// 122
	{
		.start_index = 48,
		.weight = {1.0f,0.0f}
	},

	// 123
	{
		.start_index = 48,
		.weight = {0.75f,0.25f}
	},

	// 124
	{
		.start_index = 48,
		.weight = {0.5f,0.5f}
	},

	// 125
	{
		.start_index = 48,
		.weight = {0.25f,0.75f}
	},

	// 126
	{
		.start_index = 49,
		.weight = {1.0f,0.0f}
	},

	// 127
	{
		.start_index = 49,
		.weight = {0.75f,0.25f}
	},

	// 128
	{
		.start_index = 49,
		.weight = {0.5f,0.5f}
	},

	// 129
	{
		.start_index = 49,
		.weight = {0.25f,0.75f}
	},

	// 130
	{
		.start_index = 50,
		.weight = {1.0f,0.0f}
	},

	// 131
	{
		.start_index = 50,
		.weight = {0.8f,0.2f}
	},

	// 132
	{
		.start_index = 50,
		.weight = {0.6f,0.4f}
	},

	// 133
	{
		.start_index = 50,
		.weight = {0.4f,0.6f}
	},

	// 134
	{
		.start_index = 50,
		.weight = {0.2f,0.8f}
	},

	// 135
	{
		.start_index = 51,
		.weight = {1.0f,0.0f}
	},

	// 136
	{
		.start_index = 51,
		.weight = {0.75f,0.25f}
	},

	// 137
	{
		.start_index = 51,
		.weight = {0.5f,0.5f}
	},

	// 138
	{
		.start_index = 51,
		.weight = {0.25f,0.75f}
	},

	// 139
	{
		.start_index = 52,
		.weight = {1.0f,0.0f}
	},

	// 140
	{
		.start_index = 52,
		.weight = {0.75f,0.25f}
	},

	// 141
	{
		.start_index = 52,
		.weight = {0.5f,0.5f}
	},

	// 142
	{
		.start_index = 52,
		.weight = {0.25f,0.75f}
	},

	// 143
	{
		.start_index = 53,
		.weight = {1.0f,0.0f}
	},

	// 144
	{
		.start_index = 53,
		.weight = {0.8f,0.2f}
	},

	// 145
	{
		.start_index = 53,
		.weight = {0.6f,0.4f}
	},

	// 146
	{
		.start_index = 53,
		.weight = {0.4f,0.6f}
	},

	// 147
	{
		.start_index = 53,
		.weight = {0.2f,0.8f}
	},

	// 148
	{
		.start_index = 54,
		.weight = {1.0f,0.0f}
	},

	// 149
	{
		.start_index = 54,
		.weight = {0.75f,0.25f}
	},

	// 150
	{
		.start_index = 54,
		.weight = {0.5f,0.5f}
	},

	// 151
	{
		.start_index = 54,
		.weight = {0.25f,0.75f}
	},

	// 152
	{
		.start_index = 55,
		.weight = {1.0f,0.0f}
	},

	// 153
	{
		.start_index = 55,
		.weight = {0.8f,0.2f}
	},

	// 154
	{
		.start_index = 55,
		.weight = {0.6f,0.4f}
	},

	// 155
	{
		.start_index = 55,
		.weight = {0.4f,0.6f}
	},

	// 156
	{
		.start_index = 55,
		.weight = {0.2f,0.8f}
	},

	// 157
	{
		.start_index = 56,
		.weight = {1.0f,0.0f}
	},

	// 158
	{
		.start_index = 56,
		.weight = {0.8f,0.2f}
	},

	// 159
	{
		.start_index = 56,
		.weight = {0.6f,0.4f}
	},

	// 160
	{
		.start_index = 56,
		.weight = {0.4f,0.6f}
	},

	// 161
	{
		.start_index = 56,
		.weight = {0.2f,0.8f}
	},

	// 162
	{
		.start_index = 57,
		.weight = {1.0f,0.0f}
	},

	// 163
	{
		.start_index = 57,
		.weight = {0.75f,0.25f}
	},
		// 164
	{
		.start_index = 57,
		.weight = {0.5f,0.5f}
	},
	// 165
	{
		.start_index = 57,
		.weight = {0.25f,0.75f}
	},
	// 166
	{
		.start_index = 58,
		.weight = {1.0f,0.0f}
	},
	// 167
	{
		.start_index = 58,
		.weight = {0.8f,0.2f}
	},
		// 168
	{
		.start_index = 58,
		.weight = {0.6f,0.4f}
	},
		// 169
	{
		.start_index = 58,
		.weight = {0.4f,0.6f}
	},
		// 170
	{
		.start_index = 58,
		.weight = {0.2f,0.8f}
	},
	// 171
	{
		.start_index = 59,
		.weight = {1.0f,0.0f}
	},
	// 172
	{
		.start_index = 59,
		.weight = {0.8f,0.2f}
	},
	// 173
	{
		.start_index = 59,
		.weight = {0.6f,0.4f}
	},
		// 174
	{
		.start_index = 59,
		.weight = {0.4f,0.6f}
	},
		// 175
	{
		.start_index = 59,
		.weight = {0.2f,0.8f}
	},
		// 176
	{
		.start_index = 60,
		.weight = {1.0f,0.0f}
	},
	// 177
	{
		.start_index = 60,
		.weight = {0.8f,0.2f}
	},
	// 178
	{
		.start_index = 60,
		.weight = {0.6f,0.4f}
	},
	// 179
	{
		.start_index = 60,
		.weight = {0.4f,0.6f}
	},
		// 180
	{
		.start_index = 60,
		.weight = {0.2f,0.8f}
	},
		// 181
	{
		.start_index = 61,
		.weight = {1.0f,0.0f}
	},
		// 182
	{
		.start_index = 61,
		.weight = {0.8333333f,0.1666667f}
	},
		// 183
	{
		.start_index = 61,
		.weight = {0.6666667f,0.3333333f}
	},
		// 184
	{
		.start_index = 61,
		.weight = {0.5f,0.5f}
	},
		// 185
	{
		.start_index = 61,
		.weight = {0.3333333f,0.6666667f}
	},
		// 186
	{
		.start_index = 61,
		.weight = {0.1666667,0.8333333}
	},
		// 187
	{
		.start_index = 62,
		.weight = {1.0f,0.0f}
	},
		// 188
	{
		.start_index = 62,
		.weight = {0.8f,0.2f}
	},
		// 189
	{
		.start_index = 62,
		.weight = {0.6f,0.4f}
	},
		// 190
	{
		.start_index = 62,
		.weight = {0.4f,0.6f}
	},
		// 191
	{
		.start_index = 62,
		.weight = {0.2f,0.8f}
	},
		// 192
	{
		.start_index = 62,
		.weight = {0.0f,1.0f}
	},

};

// intput is high freq: 65:257 = 192, output is = ERB_SUBBAND_2
void calc_erb(float* input, float* output)
{
	int i, j, index;
	float sum;
	for (i = 0; i < ERB_SUBBAND_2; i++)
	{
		sum = 0.0f;
		index = erb_data[i].start_index;
		// j = erb_data[i].start_index;
		for (j = 0; j < MAX_NUM_COUNT; j++)
		{
			sum += erb_data[i].weight[j] * input[index + j];
		}
		output[i] = sum;
	}
}


// input = ERB_SUBBAND_2 = 64, output = high_freq: 65:257
void calc_ierb(float* input, float* output)
{
	int i, j, index;
	
	for (i = 0; i < HIGH_FREQ_BINS; i++)
	{
		index = ierb_data[i].start_index;
		output[i] = input[index] * ierb_data[i].weight[0] + input[index + 1] * ierb_data[i].weight[1];
	}
}
