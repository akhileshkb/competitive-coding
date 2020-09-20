#include<bits/stdc++.h>

using namespace std;

vector <int > d,kall;

int change(long long int& n,long long int& p)
{
	
	cout<<"1"<<endl;
	long long int k;
	for(int i=0;i<n;i++)
	{
		if(p%d[i]!=0)
		{
			k=p/d[i];
			k++;
			kall.push_back(k);
			cout<<k;
			break;
		}
	}
	long long int k1;
	if(k==0)
	{
		k1=p/d[n-1];
		k1--;
		kall.push_back(k1--);
		p -= k1*d[n-1];
		change(n,p);
	}
	// n--;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,p;
		cin>>n>>p;
		long long int k=0,k1;
		for(int i=0;i<n;i++){
			d.push_back(0);
			cin>>d[i];
		}
		for(int i=0;i<n;i++)
		{
			if(p%d[i]!=0)
			{
				k=p/d[i];
				k++;
				cout<<k;
				break;
			}
		}
		if(k==0)
		{
			k1=p/d[n-1];
			k1--;
			kall.push_back(k1--);
			p -= k1*d[n-1];
			change(n,p);
		}
		for(int i=0;i<kall.size();i++)
		{
			cout<<kall[i]<<" ";
		}
		cout<<endl;
		// change(n,p);
		// cout<<k;
	}
}