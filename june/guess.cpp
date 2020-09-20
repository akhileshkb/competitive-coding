#include<bits/stdc++.h>
using namespace std;

long long int bin_ser(long long int beg,long long int end)
{
	long long int mid = (beg+end)/2;
	char res;
	cout<<mid<<endl;
	cin>>res;
	if(res=='E')
		exit(0);
	else if(res=='G')
	{
		return bin_ser(mid,end);
	}
}

int main()
{
	long long int n,mid1,mid2,start1=1,start2=1,end1,end2;
	cin>>n;
	char res;
	end1 = n;
	end2 = n;
	cout<<n<<endl;
	cin>>res;
	if(res=='E')
		exit(0);
	cout<<1<<endl;
	cin>>res;
	if(res=='E')
		exit(0);
	while(res!='E')
	{
		mid1 = (start1 + end1)/2;
		mid2 = (start2 + end2)/2;
		cout<<mid1<<endl;
		cin>>res;
		if(res=='E')
			exit(0);
		else if(res=='G')
			start1=mid1;
		else
			end1=mid1;

		cout<<mid2<<endl;
		cin>>res;
		if(res=='E')
			exit(0);
		else if(res=='G')
			start2 = mid2;
		else
			end2 = mid2;
	}
}