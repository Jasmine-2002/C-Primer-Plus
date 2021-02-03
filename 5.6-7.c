#include <stdio.h>

double cubic(double n){
    double t=n*n*n;
    printf("The %f's cubic is %f !\n",n,t);
    return t;
}

int main()
{
    double input;
    scanf("%lf",&input);
    cubic(input);
    printf("PROGRAM EXIT!\n");
    return 0; 
}