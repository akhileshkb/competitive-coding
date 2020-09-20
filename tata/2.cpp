#include<bits/stdc++.h>

using namespace std;
int fact(int n);

int main()
{
	int R,N;
	cin>>R>>N;
	float n=float(N);
	float r=float(R);
	float y=n/r;
	// cout<<y;
	if(y==N/R)
	{
		int pos=fact(n)/(pow(fact(y),r));//*pow(fact(y),p2));
		cout<<pos;
		return 0;
	}
	int a=N/R;
	int b=a+1;
	// cout<<a<<" "<<b<<endl;
	// cout<<a<<b;
	float r1=y-a;
	float r2=1-r1;
	// cout<<r1<<" "<<r2<<endl;
	// int x;
	int p1=round(r*r1);
	int p2=r-p1;
	// cout<<p1<<" "<<p2<<endl;
	// int k=fact();
	// cout<<k;
	int pos=fact(n)/(pow(fact(a),p1)*pow(fact(b),p2));
	cout<<pos;
}

int fact(int n)
{
	if (n==0){return 1;}
	int facto=1;
	for(int i=1;i<=n;i++)
	{
		facto=facto*i;
	}
	return facto;
}