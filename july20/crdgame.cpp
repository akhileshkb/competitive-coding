#include<bits/stdc++.h>
using namespace std;

int getSum(int n) 
{  
    int sum = 0; 
    while (n != 0) 
    { 
    	sum = sum + n % 10; 
 	   	n = n/10; 
    }  
return sum; 
} 

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,a,b,s1=0,s2=0;
		cin>>n;
		for(long long int i=0;i<n;i++)
		{
			cin>>a>>b;
			getSum(a)>getSum(b)?s1++:s2++;
			if(getSum(a)==getSum(b))
				s1++;
		}
		if(s1>s2)
			cout<<"0 "<<s1<<endl;
		else if(s2>s1)
			cout<<"1 "<<s2<<endl;
		else
			cout<<"2 "<<s1<<endl;
	}
	return 0;
}