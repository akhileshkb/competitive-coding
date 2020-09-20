#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
		fact=fact*i;
	return fact;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,c1=0,c2=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<k;i++){
			if(a[k-1]==a[i])
				c1++;
		}
		for(int i=0;i<n;i++){
			if(a[k-1]==a[i])
				c2++;
		}
		int result = fact(c2)/(fact(c1)*fact(c2-c1));
		cout<<result<<endl;
	}
}