#include<stdio.h>

// using namespace std;

int main()
{
	int t;
	scanf("%d",t);
	while(t--)
	{
		long long int n,m,flag=0,temp;
		cin>>n>>m;
		long long int p[n],i=0,k=0;
		for(long long int i=0;i<n;i++)
		{
			cin>>p[i];
			

		}
				
		
		for(long long int i=0;i<n;i++)
		{
			for(long long int j=i+1;j<n;j++)
			{
				if(p[i]+p[j]==m){
					flag=1;
					break;
				}

			}
		}
		if(flag==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}