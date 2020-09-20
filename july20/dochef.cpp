#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,x,i=0,t=0,m=0,temp=0;
		cin>>n>>x;
		long long int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		
		sort(a,a+n);

		i = lower_bound(a,a+n,x)-a;
		m=i;
		// cout<<m<<endl;
		// temp=upper_bound(a,a+n,16)-a;
		// cout<<temp<<endl;
		for(i=m;i<n;i++)
		{
			t++;
			while(x<a[i])
			{
				x=x*2;
				t++;
				// cout<<t<<" "<<x<<" "<<a[i]<<endl;
			}
			if(x>a[i])
			{
				temp=upper_bound(a,a+n,x)-a;
				// cout<<temp<<endl;
				m+=temp-(i+1);
				x=a[temp-1];
				i=temp-1;		
				// cout<<t<<" "<<x<<" "<<a[i]<<endl;
			}
			// cout<<t<<" "<<x<<" "<<a[i]<<endl;
			x=x*2;
		}
		cout<<t+m<<endl;
	}
}