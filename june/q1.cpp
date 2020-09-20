#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		long long int sum = 0,temp;
		for(long long int i = 0;i<n;i++)
		{
			cin>>temp;
			if(temp>k)
			{
				sum += temp - k;
			}
		}
		cout<<sum<<endl;
	}
}