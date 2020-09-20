#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,s;
		vector<pair<long long int,long long int>> v;
		pair<long long int,long long int> temp;
		temp.second = 0;
		cin>>n>>s;
		for(long long int i=0;i<n;i++)
		{
			cin>>temp.first;
			v.push_back(temp);
		}
		for(long long int i=0;i<n;i++)
		{
			cin>>v[i].second;
		}
		vector<long long int> v1,v2;
		for(long long int i=0;i<n;i++)
		{
			if(v[i].second==0)
				v1.push_back(v[i].first);
			else
				v2.push_back(v[i].first);
		}
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		if(v1.size()==0 || v2.size()==0)
			cout<<"no"<<endl;
		else
		{
			if(v1[0]+v2[0]+s<=100)
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
		}
		
	}
}