#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int s,w1,w2,w3;
		cin>>s>>w1>>w2>>w3;
		int sum=w1+w2+w3;
		if(sum<=s)
		{
			cout<<"1\n";
		}
		else if(w1+w2<=s || w2+w3<=s)
		{
			cout<<"2\n";
		}
		else
		{
			cout<<"3"<<endl;
		}
	}
}