#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long int x1,y1,z1,x2,y2,z2;
		cin>>x1>>y1>>z1>>x2>>y2>>z2;
		long long int sum1 = (10*x1) + (150*z1)- (30*y1);
		long long int sum2 = (10*x2) +(150*z2)- (30*y2);
		// sum1 = sum1
		if(sum1>sum2)
		{
			cout<<"1"<<endl;
		}
		if(sum1 == sum2)
			cout<<"5.6"<<endl;
		if(sum1<sum2)
			cout<<"2"<<endl;
	}
}