#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int p,q,r,a,b,c,a1,a2,a3,m1=INT_MIN,m2=INT_MIN,m3=INT_MIN,flag=0;
		cin>>p>>q>>r>>a>>b>>c;
		a1 = a - p;
		a2 = b - q;
		a3 = c - r;
		if(p){
			m1=a/p;
			if(a!=m1*p)
				m1=INT_MIN;
		}
		if(q){
			m2=b/q;
			if(b!=m2*q)
				m2=INT_MIN;
		}
		if(r){
			m3=c/r;
			if(c!=m3*r)
				m3=INT_MIN;
		}
		if((a1==a2)&&(a2==a3)&&(a3==0))
			cout<<0<<endl;
		else if((a1==a2)&&(a2==a3))
			cout<<1<<endl;
		else if((m1==m2)&&(m2==m3)&&(m1!=INT_MIN))
			cout<<1<<endl;
		else if((a1==0 && a2==a3)||(a2==0 && a1==a3)||(a3==0 && a2==a1)
			||(a1==a2 && a2==0)||(a3==a2 && a2==0)||(a1==a3 && a1==0))
			cout<<1<<endl;
		else if((a==p && m2==m3 && m2!=INT_MIN)||
			(b==q && m1==m3 && m1!=INT_MIN)||
			(c==r && m2==m1 && m2!=INT_MIN)||
			(b==q && a==p)||(b==q && c==r)||(c==r && a==p))
			cout<<1<<endl;
		else if((a1+a2==a3)||(m1>INT_MIN && m2>INT_MIN && m3>INT_MIN && m1*m2==m3)||
			(a1+a3==a2)||(m1>INT_MIN && m2>INT_MIN && m3>INT_MIN && m1*m3==m2)||
			(a3+a2==a1)||(m1>INT_MIN && m2>INT_MIN && m3>INT_MIN && m3*m2==m1)||
			(a1==a2 && a1!=0 && a3!=0)||(a3==a2 && a2!=0 && a1!=0)||(a1==a3 && a1!=0 && a2!=0)||
			(m1>INT_MIN && m2>INT_MIN && m3>INT_MIN && m1==m2 && m1!=1 && m3!=1)||
			(m1>INT_MIN && m2>INT_MIN && m3>INT_MIN && m3==m2 && m2!=1 && m1!=1)||
			(m1>INT_MIN && m2>INT_MIN && m3>INT_MIN && m1==m3 && m1!=1 && m2!=1))
			cout<<2<<endl;
		else
		{
			if(m3>INT_MIN && ((q+a1)*m3==b)||((q*m3)+a1==b))
			{
				cout<<2<<endl;
				flag=1;
			}
			else if(m1>INT_MIN && ((q+a3)*m1==b)||((q*m1)+a3==b))
			{
				cout<<2<<endl;
				flag=1;
			}
			else if(m1>INT_MIN && ((r+a2)*m1==c)||((r*m1)+a2==c))
			{
				cout<<2<<endl;
				flag=1;
			}
			else if(m2>INT_MIN && ((r+a1)*m2==c)||((r*m2)+a1==c))
			{
				cout<<2<<endl;
				flag=1;
			}
			else if(m3>INT_MIN && ((p+a2)*m3==a)||((p*m3)+a2==a))
			{
				cout<<2<<endl;
				flag=1;
			}
			else if(m2>INT_MIN && ((p+a3)*m2==a)||((p*m2)+a3==a))
			{
				cout<<2<<endl;
				flag=1;
			}
			if(flag==0)
				cout<<3<<endl;
		}
	}
}