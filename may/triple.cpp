#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,temp1,temp2,temp3,t,j,i;
		cin>>n>>k;
		long long int p[n],a[n],b[n],c[n],flag1=1,flag2=1;
		vector<long long int> v;
		for(long long int i=0;i<n;i++)
		{
			cin>>p[i];
			p[i]--;
			if(p[i]!=n-i)
				flag1=0;
			if(p[i]!=i)
				v.push_back(p[i]); 
		}
		if(flag1)
		{
			if(v.size()%4==2){
				cout<<"-1"<<endl;
				continue;
			}
		}
		t = k;
		i = 0;
		while(t)
		{
			if(p[i] == i)
			{
				if(i==n-1)
					break;
				i++;
				continue;
			}
			temp1 = p[i];
			temp2 = p[p[i]];
			temp3 = p[p[p[i]]];
			j = p[p[i]];
			// cout<<i<<endl;
			// cout<<i<<p[i]<<p[p[i]]<<p[j]<<endl;
			if(p[i]==p[p[p[i]]])
			{
				j = i+1;
				while(j<n)
				{
					if(p[j]!=j && p[j]!=p[p[i]])
					{
						temp3 = p[j];
						break;
					}
					j++;
				}
			}
			
			p[p[i]] = temp1;
			p[i] = temp3;
			p[j] = temp2;
			for(long long int m=1;m<n;m++)
			{
				if(p[m-1]==p[m]){
					cout<<"-1"<<endl;
					flag2=0;
				}
			}
			// for(long long int m=0;m<n;m++)
			// 	cout<<p[m];
			// cout<<endl;
			if(!flag2)
				break;
			a[k-t] = temp1+1;
			b[k-t] = temp2+1;
			c[k-t] = temp3+1;
			// cout<<temp1+1<<" "<<temp2+1<<" "<<temp3+1<<endl;
			t--;
			
			// cout<<i<<p[i]<<p[p[i]]<<p[j]<<endl;
		}
		if(flag2){
			cout<<k-t<<endl;
			for(long long int i=0;i<(k-t);i++)
			{
				cout<<c[i]<<" "<<a[i]<<" "<<b[i]<<endl;
			}
		}
		
	}
}