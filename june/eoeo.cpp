#include<bits/stdc++.h>
using namespace std;

int highestPowerOf2(int n) 
{ 
    return (n & (~(n - 1))); 
} 

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int ts,k;
		cin>>ts;
		if(ts%2==1)
			cout<<(ts-1)/2<<endl;
		else
		{
			k = ts/highestPowerOf2(ts);
			cout<<(k-1)/2<<endl;
		}
	}
}