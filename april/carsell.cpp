#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a[n],sum = 0;
		for(long long int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(long long int i=0;i<n;i++)
		{
			a[i] = (a[i]+i+1-n)<=0 ? 0 : a[i]+i+1-n;
			sum+=a[i];
		}
		sum = sum%(1000000007);
		cout<<sum<<endl;
	}
}