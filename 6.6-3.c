#include <stdio.h>
int main()
{
    char let = 'F';
    char start;
    char end;
    for (end = let; end >= 'A'; end--){
        for (start = let; start >= end; start--){
            printf("%c", start);
        }
        printf("\n");
    }
    
    return 0;
}
