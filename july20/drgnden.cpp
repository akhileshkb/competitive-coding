#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,q;
	cin>>n>>q;
	long long int h[n],a[n];
	for(long long int i=0;i<n;i++)
		cin>>h[i];
	for(long long int i=0;i<n;i++)
		cin>>a[i];
	while(q--)
	{
		long long int type,dest,start,sum=0,temp;
		cin>>type>>start>>dest;
		if(type==1)
		{
			a[start-1] = dest;
		}
		if(type==2)
		{
			start--;dest--;
			if(start>dest)
			{
				sum+=a[dest];
				temp=h[dest];
				for(long long int i=dest+1;i<=start;i++)
				{
					if(h[i]>temp){
						sum+=a[i];
						temp=h[i];
						// cout<<sum<<endl;
					}
					if(temp>=h[start] && i!=start){
						sum=-1;
						break;
					}
				}
				if(h[dest]>=h[start])
					cout<<-1<<endl;
				else
					cout<<sum<<endl;
			}
			if(start<dest)
			{
				sum+=a[dest];
				temp=h[dest];
				for(long long int i=dest-1;i>=start;i--)
				{
					if(h[i]>temp){
						sum+=a[i];
						temp=h[i];
						// cout<<sum<<endl;
					}
					if(temp>=h[start] && i!=start){
						sum=-1;
						break;
					}
				}
				if(h[dest]>=h[start])
					cout<<-1<<endl;
				else
					cout<<sum<<endl;
			}
		}
	}
}