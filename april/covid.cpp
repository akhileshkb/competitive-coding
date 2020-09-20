#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,j=INT_MIN,flag=0;
		cin>>n;
		long long int a[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==1 && (i-j)<6){
				// cout<<i<<"\t";
				flag=1;
			}
			else if(a[i]==1)
				j=i;
		}
		if(!flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}