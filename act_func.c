#include "act_func.h"

float sigmoid(float x)
{
	return 1.0f / (1.0f + expf(-x));
}

float tanh_fast(float x)
{
	return tanhf(x);
}
