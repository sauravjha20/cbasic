#include <iostream>
using namespace std;

int main()
{
int t;
long n;
long long ans;
cin>>t;
while(t--)
{
cin>>n;
ans=1;
if(n!=1)
ans=n*(n-1)/2;
if(n%2==0)
    	ans+=(n-1)/2;
    	else
    	ans+=(n-2)/2;
    	cout<<ans<<endl;
}
    return 0;
}

