#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x1,y1;
		cin>>x1>>y1;
		// cout<<34+
		if(x1>=y1){
			cout<<33+x1<<endl;
			while(y1>1)
			{
				x1--;
				y1--;
				cout<<x1<<" "<<y1<<endl;
			}
			while(x1!=y1)
			{
				x1--;
				y1++;
				cout<<x1<<" "<<y1<<endl;
			}
			while(x1!=1)
			{
				x1--;
				y1--;
				cout<<x1<<" "<<y1<<endl;
			}
		}
		else if(y1>x1){
			cout<<33+y1<<endl;
			while(x1>1)
			{
				x1--;
				y1--;
				cout<<x1<<" "<<y1<<endl;
			}
			while(x1!=y1)
			{
				x1++;
				y1--;
				cout<<x1<<" "<<y1<<endl;
			}
			while(x1!=1)
			{
				x1--;
				y1--;
				cout<<x1<<" "<<y1<<endl;
			}
		}
		// cout<<"34"<<endl;
		int y=1;
		// cout<<"1 1"<<endl;
		for(int i=2;i<=8;i++)
		{
			if(i%2==0)
				cout<<i<<" "<<y+1<<endl;
			else
				cout<<i<<" "<<y<<endl;
		}
		cout<<"7 3"<<endl;
		cout<<"8 4"<<endl;
		y=y+2;
		for(int i=7;i>0;i--)
		{
			if(i%2==0)
				cout<<i<<" "<<y+1<<endl;
			else
				cout<<i<<" "<<y<<endl;
		}
		cout<<"2 4 "<<endl;
		cout<<"1 5"<<endl;
		y=y+2;
		for(int i=2;i<=8;i++)
		{
			if(i%2==0)
				cout<<i<<" "<<y+1<<endl;
			else
				cout<<i<<" "<<y<<endl;
		}
		cout<<"7 7"<<endl;
		cout<<"8 8"<<endl;
		y=y+2;
		for(int i=7;i>0;i--)
		{
			if(i%2==0)
				cout<<i<<" "<<y+1<<endl;
			else
				cout<<i<<" "<<y<<endl;
		}
	}
}