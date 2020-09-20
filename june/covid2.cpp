#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,p;
		cin>>n>>p;
		long long int a[n][n],b[n][n],c1,c2,c3,c,count=0,x;
		cout<<1<<" "<<1<<" "<<1<<" "<<n<<" "<<n<<endl;
		cin>>c;
		for(long long int i=0;i<n;i++)
		{
			for(long long int j=0;j<n;j++)
			{
				if(count<c)
				{
					cout<<1<<" "<<1<<" "<<1<<" "<<i+1<<" "<<j+1<<endl;
					cin>>b[i][j];
					c1=0;c2=0;c3=0;
					if(i!=0)
					{
						c1 = b[i-1][j];
					}
					if(j!=0)
					{
						c2 = b[i][j-1];
					}
					if(i!=0 && j!=0)
					{
						c3 = b[i-1][j-1];
					}
					a[i][j] = b[i][j] + c3 - (c1 + c2);
					if(a[i][j])
						count++;
				}
				else
					a[i][j]=0;
			}
		}
		cout<<2<<endl;
		for(long long int i=0;i<n;i++)
		{
			for(long long int j=0;j<n;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		cin>>x;
		if(x==-1)
			exit(0);
	}
}