#include <stdio.h>
int jolly(void);
int deny(void);
int main()
{
    jolly();
    jolly();
    jolly();
    deny();
    return 0;
}
int jolly(void)
{
    printf("For he's a jolly good fellow!\n");
    return 0;
}
int deny(void)
{
    printf("Which nobody can dent!\n");
    return 0;
}