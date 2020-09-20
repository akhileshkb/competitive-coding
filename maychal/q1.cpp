#include <iostream>

using namespace std;

int main()
{
	int t,k;
	cin>>t;
	k=t;
	int a[t];
	while(t)
	{
		int n;
		cin>>n;
		int sum=n;
		for(int i=1;i<n;i++)
		{
			sum=sum + i +i*sum; 
		}
		sum=sum%1000000007
		cout<<sum<<endl;
		t--;
	}
	return 0;
}
