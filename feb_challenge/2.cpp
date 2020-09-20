#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		long long a[n],sum=0;
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		int r = sum % k;
		cout<<r<<endl;
	}
}