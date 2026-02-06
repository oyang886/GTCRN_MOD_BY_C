#ifndef CONV_BLOCK1_H
#define CONV_BLOCK1_H

/* 网络参数常量 */
#define ORIG_CHANNELS 3
#define SFE_CHANNELS 9
#define OUT_CHANNELS 16
#define KERNEL_HEIGHT 1
#define KERNEL_WIDTH 5
#define INPUT_FREQ 129
#define OUTPUT_FREQ 65
#define STRIDE 2
#define BN_EPS 1e-5f


void calc_conv1(float(*input)[INPUT_FREQ], float(*output)[OUTPUT_FREQ]);

#endif
