#include <stdio.h>
int main()
{
    int w;
    printf("enter the weight of watermelons between 1 and 100\n");
    scanf("%d",&w);
    if (w%2==0)
        printf("yes it can be divided\n");
    else
        printf("not");
    return 0;
}
