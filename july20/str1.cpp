#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,s1,s2,sum=0;
		cin>>n>>s1;
		for(long long int i=1;i<n;i++)
		{
			cin>>s2;
			sum+=abs(s1-s2)-1;
			s1=s2;
		}
		cout<<sum<<"\n";
	}
	return 0;
}