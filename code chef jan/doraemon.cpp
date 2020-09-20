#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,m;
		cin>>n>>m;
		long long int k = n*m;
		long long int a[n][m];
		for(long long int j=0;j<n;j++)
		{
			for(long long int i=0;i<m;i++)
			{
				cin>>a[j][i];
			}
			//cout<<"1"<<endl;
		}
		for(long long int i=0;i<n;i++)
		{
			for(long long int j=0;j<m;j++)
			{
				long long int b=1;
				while(b)
				{
					if(i>=b && j>=b && i+b<n && j+b<m)
					{
						if(a[i-b][j]==a[i+b][j] && a[i][j-b]==a[i][j+b]){
							cout<<i<<j<<b<<endl;
							b++;
							k++;
						}
						else
							break;
					}
					else
						break;
				}
			}
		}
		cout<<k<<endl;
	}
}