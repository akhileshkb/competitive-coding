#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,count1=0,count2=0;
		cin>>n;
		long long int a[n],flag=0;
		for(long long int i=0;i<n;i++)
			cin>>a[i];
		for(long long int i=0;i<n;i++)
		{
			// cin>>a[i];
			if(a[i]==5)
				count1++;
			else
			{ 
				if(a[i]==10)
				{
					if(count1==0)
						flag=1;
					else
					{
						count1--;
						count2++;	
					}
				}
				if(a[i]==15)
				{
					if(count2==0)
					{
						if(count1==0 || count1==1)
							flag=1;
						else
							count1-=2;
					}
					else
						count2--;
				}
			}
			if(flag)
				break;
		}
		flag?cout<<"NO"<<endl:cout<<"YES"<<endl;
	}
}