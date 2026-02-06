#pragma once
#ifndef SFE_DATA_H
#define SFE_DATA_H

#include "erb_data.h"

#define SFE_INPUT (ERB_SUBBAND_1 + ERB_SUBBAND_2)
#define SFE_INPUT_CHANNEL 9 

void get_sfe_first(float* input, float* output, int LENGTH);
void get_sfe_second(float* input, float* output, int LENGTH);
void get_sfe_third(float* input, float* output, int LENGTH);

#endif
