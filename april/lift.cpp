#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,q,prev=0,sum=0,t1,t2;
		cin>>n>>q;
		for(long long int i=0;i<q;i++)
		{
			cin>>t1>>t2;
			sum += abs(t1-prev) + abs(t2-t1);
			prev = t2;
		}
		cout<<sum<<endl;
	}
}