#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int count=0;
		// cin>>n;
		string p;
		cin>>p;
		for(long long int i=0;i<p.length();i+=2)
		{
			if((p[i]=='x' && p[i+1]=='y')||(p[i+1]=='x' && p[i]=='y'))
				count++;
			else
				i--;
		}
		cout<<count<<"\n";
	}
}