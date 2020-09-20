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
		long long int a[n],b[n],t1=0,t2=0,sum=0,flag=0;
		for(long long int i=0;i<n;i++)
			cin>>a[i];
		for(long long int i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		long long int a1 = min(a[0],b[0]);
		vector<long long int> v1;
		while(t1<n && t2<n)
		{
			if(a[t1]==b[t2]){
				t1++;
				t2++;
			}
			else if(a[t1]>b[t2]){
				v1.push_back(b[t2]);
				t2++;
			}
			else{
				v1.push_back(a[t1]);
				t1++;
			}
		}
		for(long long int i=t1;i<n;i++)
			v1.push_back(a[i]);
		for(long long int i=t2;i<n;i++)
			v1.push_back(b[i]);
		for(long long int i=0;i<v1.size();i+=2)
			if(v1[i]!=v1[i+1])
			{
				flag=1;
				break;
			}
		if(!flag)
		{
			for(long long int i=0;i<v1.size()/2;i+=2)
			{
				if(v1[i]==v1[i+1])
					sum+=min(v1[i],2*a1);
				else{
					flag=1;
					break;
				}
			}
			cout<<sum<<endl;
		}
		else
			cout<<-1<<endl;
	}
}