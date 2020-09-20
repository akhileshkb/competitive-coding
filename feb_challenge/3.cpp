#include<bits/stdc++.h>

using namespace std;
long long int a[4]={0},b[4]={0},c[4]={0},d[4]={0};

long long int max_num(long long int a1,long long int b1,long long int c1,long long int d1)
{
	long long int max=0;
	if(a1>max)
		max=a1;
	if(b1>max)
		max=b1;
	if(c1>max)
		max=c1;
	if(d1>max)
		max=d1;
	cout<<max<<endl;
	if(max==a1)
		a[0]=0,a[1]=0,a[2]=0,a[3]=0;
	else if(max==b1)
		b[0]=0,b[1]=0,b[2]=0,b[3]=0;
	else if(max==c1)
		c[0]=0,c[1]=0,c[2]=0,c[3]=0;
	else if(max==d1)
		d[0]=0,d[1]=0,d[2]=0,d[3]=0;
	return max;
}

// void empty(long long int max,int i)
// {
// 	for(int i=0;i<n)
// }

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int sum=0;
		string e;
		int tm;
		for(long long int i=0;i<n;i++)
		{
			cin>>e>>tm;
			if(e=="A"){
				if(tm==12)
					a[0]++;
				if(tm==3)
					a[1]++;
				if(tm==6)
					a[2]++;
				if(tm==9)
					a[3]++;
			}
			if(e=="B"){
				if(tm==12)
					b[0]++;
				if(tm==3)
					b[1]++;
				if(tm==6)
					b[2]++;
				if(tm==9)
					b[3]++;
			}
			if(e=="C"){
				if(tm==12)
					c[0]++;
				if(tm==3)
					c[1]++;
				if(tm==6)
					c[2]++;
				if(tm==9)
					c[3]++;
			}
			if(e=="D"){
				if(tm==12)
					d[0]++;
				if(tm==3)
					d[1]++;
				if(tm==6)
					d[2]++;
				if(tm==9)
					d[3]++;
			}
		}
		
		for(int i=0;i<4;i++)
		{
			cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<" "<<d[i]<<" "<<endl;
		}
		cout<<endl;
		long long int s3=max_num(a[3],b[3],c[3],d[3]);
		for(int i=0;i<4;i++)
		{
			cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<" "<<d[i]<<" "<<endl;
		}
		cout<<endl;
		long long int s2=max_num(a[2],b[2],c[2],d[2]);
		for(int i=0;i<4;i++)
		{
			cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<" "<<d[i]<<" "<<endl;
		}
		cout<<endl;
		long long int s1=max_num(a[1],b[1],c[1],d[1]);
		for(int i=0;i<4;i++)
		{
			cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<" "<<d[i]<<" "<<endl;
		}
		cout<<endl;
		long long int s0=max_num(a[0],b[0],c[0],d[0]);
		for(int i=0;i<4;i++)
		{
			cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<" "<<d[i]<<" "<<endl;
		}
		cout<<endl;
		if(s0==0)
			sum-=100;
		else
			sum += s0*25;
		if(s1==0)
			sum-=100;
		else
			sum += s1*50;
		if(s2==0)
			sum-=100;
		else
			sum += s2*75;
		if(s3==0)
			sum-=100;
		else
			sum += s3*100;
		cout<<s0<<" "<<s1<<" "<<s2<<" "<<s3<<" "<<sum<<endl;
	}
}