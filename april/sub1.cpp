#include<bits/stdc++.h>
using namespace std;

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
		long long int a[n],count = 0;
		for(long long int i=0;i<n;i++)
			cin>>a[i];
		for(long long int i=0;i<n;i++)
		{
			long long int subseq = a[i];
			if(a[i]%2==1 || a[i]%4==0)
				count++;
			for(long long int j=i+1;j<n;j++)
			{
				subseq = subseq*a[j];
				if(subseq%2==1 || subseq%4==0)
					count++;
				// else
					// count++;
			}
		}
		cout<<count<<endl;
	}
}