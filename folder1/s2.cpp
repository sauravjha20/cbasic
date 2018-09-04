#include <bits/stdc++.h>
using namespace std;

void show(int a[])
{

	for(int i=0;i<10;i++)
		cout<<a[i]<<endl;
}

int main()
{
  int a[10]={5,2,1,3,9,4,6,7,8,0};
  cout<<"the array before sorting is:";
  show(a);
  sort(a,a+10);
  cout<<"the sorted array is;";
	  show(a);

	return 0;
}

