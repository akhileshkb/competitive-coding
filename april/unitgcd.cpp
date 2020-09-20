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

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		// vector<vector<long long int>> v;
		// vector<long long int> v1;
		// v1.push_back(1);
		// v.push_back(v1);
		long long int a[n/2][3]={0};
		// a[0][0]=1;
		// for(int i=2;i<=n;i++)
		// {
		// 	if(isPrime(i))
		// 		v[0].push_back(i);

		// }
		// for(int i=0;i<v[0].size();i++)
		// 	cout<<v[0][i]<<endl;
		if(n==1)
		{
			cout<<"1"<<"\n";
			cout<<"1 1"<<"\n";
		}
		if(n==2)
		{
			cout<<"1"<<"\n";
			cout<<"2 1 2"<<"\n";
		}
		if(n>=3)
		{
			a[0][0]=1;a[0][1]=2;a[0][2]=3;
			cout<<n/2<<"\n";
			cout<<"3 1 2 3"<<"\n";
			for(long long int i=4;i<n;i = i + 2)
			{
				cout<<"2 "<<i<<" "<<i+1<<"\n";
			}
			if(n%2==0)
				cout<<"1 "<<n<<"\n";
			// else
				// cout<<"2 "<<n-1<<" "
		}
		
	}
}