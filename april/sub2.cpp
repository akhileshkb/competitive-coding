#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a[n],sum=0;
		vector<pair<long long int,long long int>> v;
		sum = (n*(n+1))/2;
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
			a[i] = llabs(a[i]);
			if(a[i]%2==0)
			{
				pair<long long int,long long int> p;
				if(a[i]%4==0)
				{
					
					p.first = i;
					p.second = 1;
					v.push_back(p);
				}
				if(a[i]%4!=0)
				{
					p.first = i;
					p.second = 0;
					v.push_back(p);
				}
			}
		}
		long long int left,right;
		for(long long int i=0;i<v.size();i++)
		{
			if(v[i].second==0)
			{
				if(i==0 && i==v.size()-1)
				{
					left = v[i].first - 0;
					right = right = n - (v[i].first + 1);
				}
				else if(i==0)
				{
					left = v[i].first - 0;
					right = v[i+1].first - v[i].first -1; 
				}
				else if(i==v.size()-1)
				{
					left = v[i].first - v[i-1].first -1;
					right = n - (v[i].first + 1);
				}
				else
				{
					left = v[i].first - v[i-1].first -1;
					right = v[i+1].first - v[i].first -1;
				}
				// cout<<sum<<"\n";
				sum = sum - (left*right + left + right + 1);
			}
		}
		cout<<sum<<"\n";
	}
}