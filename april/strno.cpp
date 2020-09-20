#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (long long int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

long long int getMaximumPower(long long int n,long long int m)
{
    long long int count = 0;
    while(n%m==0)
    {
        n = n/m;
        //cout<<n<<endl;
        count++;
    }
    return count;
}



int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,k,count=0,maxp;
        cin>>x>>k;
        //long long int a[k];
        //vector<long long int> v;
        // for(long long int i=2;i<=(x/2);i++){
        //     //a[i]=2;
        //     if(x%i==0 && isPrime(i))
        //     {
        //         maxp = getMaximumPower(x,i);
        //         // cout<<maxp<<endl;
        //         count+=maxp;
        //     }
        // }
        long long int n = x;
        while (n % 2 == 0)  
	    {  
	        // cout << 2 << " ";
	        count++;
	        n = n/2;  
	    }  
	  
	    // n must be odd at this point. So we can skip  
	    // one element (Note i = i +2)  
	    for (int i = 3; i <= sqrt(n); i = i + 2)  
	    {  
	        // While i divides n, print i and divide n  
	        while (n % i == 0)  
	        {  
	            // cout << i << " ";
	            count++;
	            n = n/i;  
	        }  
	    }  
	  
	    // This condition is to handle the case when n  
	    // is a prime number greater than 2  
	    if (n > 2)
	    {
        	count++;
        	// cout << n << " ";
    	}
        if(count>=k)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;

    }
}
