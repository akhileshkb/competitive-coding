#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,p,res,count=0,c,x;
		cin>>n>>p;
		long long int a[n][n];
		cout<<1<<" "<<1<<" "<<1<<" "<<n<<" "<<n<<endl;
		cin>>c;
		for(long long int i=0;i<n;i++)
		{
			for(long long int j=0;j<n;j++){
				if(count<c)
				{
					cout<<1<<" "<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<endl;
					cin>>a[i][j];
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