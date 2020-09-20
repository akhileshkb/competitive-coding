#include<bits/stdc++.h>
using namespace std;

int mostFrequent(long long int arr[],long long int n) 
{ 
    // Insert all elements in hash. 
    unordered_map<int, int> hash; 
    for (int i = 0; i < n; i++) 
        hash[arr[i]]++; 
  
    // find the max frequency 
    int max_count = 0, res = -1; 
    for (auto i : hash) { 
        if (max_count < i.second) { 
            res = i.first; 
            max_count = i.second; 
        } 
    } 
  
    return res; 
} 

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,m,k;
		cin>>n>>m>>k;
		long long int c[n][k],a[n];
		for(long long int i=0;i<n;i++)
		{
			for(long long int j=0;j<k;j++)
				cin>>c[i][j];
			a[i] = mostFrequent(c[i],k);
			// cout<<a[i]<<" ";
		}
		for(long long int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<"\n";
		// for()
	}
}