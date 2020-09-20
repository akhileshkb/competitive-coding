#include<bits/stdc++.h>
using namespace std;

long long int countFreq(long long int arr[],long long int n) 
{ 
    unordered_map<long long int,long long int> mp; 
    for (long long int i = 0; i < n; i++) 
        mp[arr[i]]++; 
    for (auto x : mp)
    {
        if(x.second%2==1)
        	return x.first;
    }
} 

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a[4*n-1],b[4*n-1],a1,b1;
		unordered_map<long long int,long long int> mp1,mp2;
		for(long long int i=0;i<4*n-1;i++){
			cin>>a1>>b1;
			mp1[a1]++;
			mp2[b1]++;
		}
		for (auto x : mp1)
	    {
	        if(x.second & 1){
	        	a1=x.first;
	        	break;
	        }
	    }
	    for (auto x : mp2)
	    {
	        if(x.second & 1){
	        	b1=x.first;
	        	break;
	        }
	    }
		// a1 = countFreq(a,4*n-1);
		// b1 = countFreq(b,4*n-1);
		cout<<a1<<" "<<b1<<"\n";
	}
}