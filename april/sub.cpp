#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a[n],flag=1,subsize=0,count=0,v=0,index=-1;
		std::vector<long long int> v1;
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2==0 && a[i]%4!=0)
			{
				// if(index==-1)
				{
					if(!flag)
					{
						flag=1;
						v++;
						count += (subsize*(subsize+1))/2;
						// cout<<count<<endl;
						subsize=0;
					}
					if(flag)
					{
						// cout<<a[i]<<endl;
						flag=0;
						subsize=0;
					}
				}
				// else
				// {

				// }
			}
			if(a[i]%2 == 1 || a[i]%4 == 0)
			{
				if(flag==0)
				{
					// cout<<a[i]<<endl;
					subsize++;
				}
				if(flag)
				{
					// cout<<a[i]<<endl;
					v++;
				}
				if(a[i]%4 == 0){
					index = i;
					// v1.push_back(index);
				}
			}
			if(index!=-1)
			{
				if(a[i]%2==0 && a[i]%4!=0)
				{
					if(flag==0)
						count++;
					if(flag==1)
						count++;
				}
				if(flag==0)
				{
					if(a[i]%2==1)
						count++;
				}
			}
		}
		// if(!flag)

		// for(long long int i=0;i<n;i++)
		// {

		// }

		{
			count += (subsize*(subsize+1))/2;
		}
		count += (v*(v+1))/2;
		cout<<count<<endl;
	}
}