#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,flag=0;
		cin>>n;
		for(long long int i=0;i<8;i++)
		{
			for(long long int j=0;j<8;j++)
			{
				if(!i && !j){
					n--;
					cout<<"O";
				}
				else
				{
					if(n){
						cout<<".";
						n--;
					}
					else
						cout<<"X";
				}
			}
			cout<<"\n";
		}
	}
}