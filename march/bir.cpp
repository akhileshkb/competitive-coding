#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		pair<int,int> p;
		p.first=0;
		p.second=0;
		// sort(s,s+s.length());
		if(s[0]=='L')
			p.first--;
		if(s[0]=='R')
			p.first++;
		if(s[0]=='U')
			p.second++;
		if(s[0]=='D')
			p.second++;
		for(int i=1;i<n;i++)
		{
			if(s[i]!=s[i-1])
			{
				if(s[i]=='L'&&s[i-1]!='R')
					p.first--;
				if(s[i]=='R'&&s[i-1]!='L')
					p.first++;
				if(s[i]=='U'&&s[i-1]!='D')
					p.second++;
				if(s[i]=='D'&&s[i-1]!='U')
					p.second--;
				// cout<<s[i]<<p.first<<" "<<p.second<<endl;
			}
			if(s[i]==s[i-1])
				continue;
		}
		cout<<p.first<<" "<<p.second<<endl;
	}
}