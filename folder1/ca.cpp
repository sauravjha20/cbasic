#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int start, int end)
{
	while(start<end)
	{

	int temp;
	temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	start++;
	end--;
	}
}

void leftRotate(int arr[],int d,int n)
{
	reverseArray(arr,0,d-1);
	reverseArray(arr,d,n-1);
	reverseArray(arr,0,n-1);
}

int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int d=2;
	leftRotate(arr,d,n);
	int i;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
