#pragma once
#include "kiss_fft.h"

#define BLOCK 512
#define HALF BLOCK/2
#define FREQ_SIZE (HALF + 1)

void init_para();

