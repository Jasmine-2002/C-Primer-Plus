#include <stdio.h>
int main()
{
    float quart,quantity;
    scanf("%f",&quart);
    quantity=quart*950/3.0e-32;
    printf("%e\n",quantity);
    return 0;
}