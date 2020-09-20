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
		if(n%2==1)
		{
			for(long long int i=1;i<=n;i++)
			{
				for(long long int j=1;j<=n;j++)
					cout<<n*(i-1)+j<<" ";
				cout<<"\n";
			}
		}
		if(n%2==0)
		{
			for(long long int i=1;i<=n;i++)
			{
				if(i%2==1)
					for(long long int j=1;j<=n;j++)
						cout<<n*(i-1)+j<<" ";
				else
					for(long long int j=n;j>0;j--)
						cout<<n*(i-1)+j<<" ";
				cout<<"\n";
			}
		}
	}
}