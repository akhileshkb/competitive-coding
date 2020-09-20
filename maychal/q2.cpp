#include <iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	int k=t;
	int p[t];
	while(t)
	{
		int a,b,c=0,m,n;
		cin>>a>>b;
		m=a>=b?a:b;
		n=a>=b?b:a;
		while(m>0&&n>0)
		{
			m=m-(m/n)*n;
			if(m<n){
			int temp=n;
			n=m;
			m=temp;
			}
		c++;
		} 
		if(c%2)
		{
			p[t]=1;
		}
		else{p[t]=0;}
		t--;
	}
	while(k)
	{
		if(p[k])
		cout<<"Ari"<<endl;
		else
		cout<<"Rich"<<endl;
		k--;
	}
	return 0;
}
