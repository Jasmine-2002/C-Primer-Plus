#include <stdio.h>
int main()
{
    char name[40];
    char surname[40];
    printf("Please input your first name: ");
    scanf("%s",name);
    printf("Please input your last name: ");
    scanf("%s",surname);
    printf("hello,%s,%s.",name,surname);
    return 0;
}