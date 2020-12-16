#include <stdio.h>
int main()
{
    float pint,cup,ounce,spoon,tea_spoon;
    scanf("%f",&cup);
    pint=cup/2;
    ounce=cup*8;
    spoon=ounce*2;
    tea_spoon=spoon*3;
    printf("%.1f cup equal %.1f pint,%.1f ounce ,%.1f spoon,%.1f tea_spoon.\n",cup,pint,ounce,spoon,tea_spoon);
    return 0;
}