#include <bits/stdc++.h>
using namespace std;
int main()
{
	int A,sq;
	vector <int> ans;
	sq=sqrt(A);
	if(sq*sq==A)
		ans.push_back(sq);
	else
		sq++;
	for(int i=0;i<sq;i++)
	{
		if(A%1==0)
		{
			ans.push_back(i);
			ans.push_back(A/i);
		}
	}
	sort(ans.begin(),ans.end());
	 for(int i=0 i<ans.size();i++)
    {
        ans.push_back(i);
    }
	 return 0;
}

