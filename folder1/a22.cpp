#include <bits/stdc++.h>
using namespace std;

	string ispal(string s){
		int low=0;
		int high=s.length()-1;
		while(low<=high)
			
		{
			if(s.at(low)!=s.at(high))
			return "NO";
		low++;
		high--;
	}
return "YES";
}

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string st;
		cin>>st;
		string palin=ispal(st);
		cout<<"is palindrome";
		if(palin=="YES")
		{
			if(st.length()%2==0)
			{
		
				cout<<"EVEN";
			}

				else
				{
				cout<<"ODD";
				}
		}
		cout<<endl;
	}
}
