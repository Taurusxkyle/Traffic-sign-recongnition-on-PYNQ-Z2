/***********************************************
Author: Kyle 
Associated Filename: full_connection.cpp
Purpose:to acceleration of the full_connection_layer
Device: All 
Revision History: July 28,2020
------------------------------------------
Meanings of registers:
input_data       ---->   DDR address that point to input data
output_data      ---->   DDR address that point to result data
weights          ---->   DDR address that point to weights data
***********************************************/

#include "full_connection_layer1.h"

void full_connection_layer1(
    float input_data_buf[INPUT_NUM1],
    float output_data_buf[OUTPUT_NUM1],
    float weights_buf[INPUT_NUM1],
    float bias_buf[OUTPUT_NUM1],
    bool active,
    int i
)
{
        full_C_cal:
        {
            calculate:
                /* code */
                PROCESS:for (int j = 0; j < OUTPUT_NUM1; j++)
                {
    #pragma HLS PIPELINE
                    /* code */
                    output_data_buf[j] += input_data_buf[i] * weights_buf[j];
                }
        }
    
}
