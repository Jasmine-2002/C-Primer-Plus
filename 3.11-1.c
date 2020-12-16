#include <stdio.h>
//预先定义常见数据类型的限制
#include <float.h>
#include <limits.h>
int main()
{
    int big_int=2147483647;
    float big_float=3.4e38;
    float small_float=10.0/3;
    printf("The big int data is %d\n",big_int+1);
    //越界输出inf，如果只加小数据，精度限制不会造成越界
    printf("The big float data is %f\n",big_float*10);
    //浮点数有效位数为6位，精度损失
    printf("The big float data is %f\n",small_float+1);
    printf("The MAX float data is %f\n",FLT_MAX);
    printf("The MAX int data is %d\n",INT_MAX);
    return 0;
}