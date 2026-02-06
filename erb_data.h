#pragma once
#ifndef ERB_DATA_H
#define ERB_DATA_H

// ERB Configuration
#define ERB_SUBBAND_1 65
#define ERB_SUBBAND_2 64
#define HIGH_FREQ_BINS 192

#define MAX_FORWARD_CONNECTIONS 10

void calc_erb(float* input, float* output);
void calc_ierb(float* input, float* output);

#endif
