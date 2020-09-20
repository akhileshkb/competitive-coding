#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a[n],b[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(long long int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		long long int sum = 0;
		for(long long int i=0;i<n;i++)
		{
			if(a[i]<=b[i]){
				sum+=a[i];
				// cout<<a[i];
			}
			else{
				sum+=b[i];
				// cout<<b[i];
			}
		}
		cout<<sum<<"\n";
	}
}