#include <bits/stdc++.h>
using namespace std;

// long long int power(long long ele,long long p)
// {
// 	long long int pro = 1;
// 	for(long long int i=1;i<=p;i++)
// 	{
// 		pro *= ele;
// 		pro = pro%1000000007; 
// 	}
// 	return pro;
// }
long long int power(long long int x,long long int y) 
{ 
    long long int res = 1; // Initialize result 
  
    while (y > 0) { 
        // If y is odd, multiply x with result 
        if (y & 1) {
            res = res * x; 
            res = res%1000000007;
        }
  
        // n must be even now 
        y = y >> 1; // y = y/2 
        x = (x%1000000007) * (x%1000000007);
        x = x%1000000007; // Change x to x^2 
    } 
    return res; 
} 

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,a,ele,sum=0,tel;
		cin>>n>>a;
		ele = a;
		// cout<<power(2,3);
		for(int i=1;i<=n;i++)
		{
			tel = power(ele,2*i-1);
			sum += tel%1000000007;
			ele = ele%1000000007;
			ele = power(ele,2*i);
			ele = ele%1000000007;
			
		}
		sum = sum%1000000007;
		cout<<sum<<endl;
	}
}