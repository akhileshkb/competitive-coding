#include<bits/stdc++.h>

using namespace std;

int main()
{
	int s,t;
	cin>>t>>s;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for (int i = 0; i < n; i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		int flag=1;
		for(int i=0;i<n;i++)
		{
			
			if(a[i]>=b[i])
			{
				flag=0;
				// cout<<a[i]<<" "<<b[i]<<endl;
				break;
			}
			// if()
		}
		// if(a[i]>b[i])
		// 	cout<<"NO"<<endl;
		// else
		// 	cout<<"YES"<<endl;
		if(flag)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}

	}
}