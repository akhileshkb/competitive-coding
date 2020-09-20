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
		long long int a[n],b[n],flag=0,flag2=1;
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i] = a[i];
		}
		sort(b,b+n);

		for(long long int i=0;i<n;i++)
		{
			if(a[i]==b[i])
				continue;
			else
			{
				flag = 0;
				long long int j;
				for(j=i+k;j<n;j = j + k)
				{
					if(a[i] == b[j]){
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					for(j=i-k;j>=0;j = j - k)
					{
						if(a[i] == b[j]){
							flag=1;
							break;
						}
					}
				}
				if(flag==0){
					cout<<"no"<<endl;
					flag2 = 0;
					break;
				}
			}
		}
		if(flag==1)
			cout<<"yes"<<endl;
	}
}