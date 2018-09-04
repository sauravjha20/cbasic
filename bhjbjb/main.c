#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a[10];
    printf("enter no. of elements");
    scanf("%d",&n);
    printf("enter elemnts");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {while(a[i]<42)
    printf("%d",a[i]);
    i++;

     }       return 0;
}
