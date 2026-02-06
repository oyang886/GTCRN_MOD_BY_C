#ifndef CONV_BLOCK2_H
#define CONV_BLOCK2_H

/* 第二层ConvBlock网络参数 */
#define CONV2_IN_CHANNELS 16     /* 输入通道数 */
#define CONV2_OUT_CHANNELS 16    /* 输出通道数 */
#define CONV2_GROUPS 2           /* 分组数 */
#define CONV2_GROUP_SIZE 8       /* 每组通道数 (16/2) */
#define CONV2_KERNEL_HEIGHT 1
#define CONV2_KERNEL_WIDTH 5
#define CONV2_INPUT_FREQ 65      /* 输入频率点数 */
#define CONV2_OUTPUT_FREQ 33     /* 输出频率点数 (65->33) */
#define CONV2_STRIDE 2           /* 步长 */
#define CONV2_PADDING 2          /* 填充 */
#define BN2_EPS 1e-5f            /* BatchNorm epsilon */


#endif
