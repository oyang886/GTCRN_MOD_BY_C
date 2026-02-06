#ifndef STREAM_GTCONV1_H
#define STREAM_GTCONV1_H

#define STREAM1_CHANNEL 16
#define STREAM1_OUTPUT 33
#define HALF_CHANNEL 8 

void calc_gtconv1(float(*input)[STREAM1_OUTPUT], float(*output)[STREAM1_OUTPUT]);

#endif
