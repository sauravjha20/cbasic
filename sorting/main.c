#include<stdio.h>
#define MAX 105
int search(int arr[],int n,int item);
int main(void)
{
  int arr[MAX],n,item,i,t,index;
  scanf("%d",&t);
  while(t--)
  {

  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  scanf("%d",&item);
  index=search(arr , n , item);
    printf("%d\n",index);
  }
  return 0;
}
int search(int arr[],int n,int item)
{

int i=0;
while(i<n)
 {
     if(arr[i]==item)
        return i;
        i++;

 }
 return -1;
}


