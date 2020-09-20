#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	cout<<34<<endl;
	while(t--)
	{
		long long int n,m;
		cin>>n>>m;
		vector<pair<long long int,long long int>> v,v1;
		for(long long int i=0;i<n;i++){
			// v.push_back(0);
			pair<long long int,long long int> temp;
			cin>>temp.first;
			temp.second = 0;
			v.push_back(temp);
		}
		for(long long int i=0;i<n;i++){
			// v.push_back(0);
			// pair<int,int> temp;
			// cin>>temp.second;
			// temp.second = 0;
			cin>>v[i].second;
		}
		// for(auto itr=v.begin();itr!=v.end();itr++)
		// {
		// 	cout<<itr.first<<itr.second<<endl;
		// }
		sort(v.begin(),v.end());
		// for(int i=0;i<n;i++)
		// 	cout<<v[i].first<<v[i].second<<endl;
		v1.push_back(v[0]);
		for(long long int i=1;i<n;i++)
		{
			// v1.push_back(v[])
			// cout<<v[i].first<<v[i].second<<endl;
			if(v[i].first==v[i-1].first)
			{
				// cout<<v[i].first<<v[i].second<<endl;
				v1[v1.size()-1].second += v[i].second;
			}
			if(v[i].first!=v[i-1].first)
			{
				pair<long long int,long long int> temp;
				temp.first = v[i].first;
				temp.second = v[i].second;
				v1.push_back(temp);
			}
			// for(int i=0;i<(v1.size());i++)
			// {
			// 	cout<<v1[i].first<<v1[i].second<<endl;
			// }
			// cout<<endl;
		}
		long long int min=INT_MAX;
		for(long long int i=0;i<(v1.size());i++)
		{
			if(v1[i].second<min)
				min=v1[i].second;
		}
		cout<<min<<endl;
	}
}