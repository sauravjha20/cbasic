#include <stdio.h>
#define MAX 50
int linearsearch(int arr[],int n,int item);
int main(void)
{
int i,n,arr[MAX],index,item;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
        printf("enter the item to be searched");
        scanf("%d",&item);
    index=linearsearch(arr,n,item);
    if(index==-1)
        printf("the %d element not found",item);
    else
        printf("%d found at %d",item,index+1);
}
int linearsearch(int arr[],int n, int item)
{
   int i=0;
while (i<n && item!=arr[i])
    i++;
if(i<n)
    return i;
else
    return -1;
}
