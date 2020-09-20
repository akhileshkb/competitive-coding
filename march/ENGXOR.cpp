#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
    	long long int n,q;
    	cin>>n>>q;
    	long long int a[n],bin_a[n],b_odd=0,b_even=0,c_odd=0,c_even=0,temp;
    	for(long long int i=0;i<n;i++)
    	{
    		cin>>temp;
    		bin_a[i] = __builtin_parity(temp);
    		if(bin_a[i])
    		{
    			c_odd++;
    		}
    		else{
    			c_even++;
    		}
    	}

    	while(q--)
    	{
	    	b_odd = 0;
	    	b_even = 0;
	    	long long int p;
	    	cin>>p;
	    	long long int bin_p =  __builtin_parity(p);
	   //  	for(long long int i=0;i<n;i++)
	   //  	{
	   //  		// bin_a = __builtin_parity(a[i]);
				// if(bin_p==bin_a[i])
	   //  		{
	   //  			b_even++;
	   //  		}
	   //  		else{
	   //  			b_odd++;
	   //  		}
	   //  	}
	    	if(bin_p)
	    	{
	    		cout<<c_odd<<" "<<c_even<<"\n";
	    	}
	    	else
	    	{
	    		cout<<c_even<<" "<<c_odd<<"\n";
	    	}
	    }
    }
}