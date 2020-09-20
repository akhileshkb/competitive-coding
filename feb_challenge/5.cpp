#include<bits/stdc++.h>
#define range(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define rep(i,n) range(i,0,n)

using namespace std;

bool isleap(int year)  
{  
    // If a year is multiple of 400,  
    // then it is a leap year  
    if (year % 400 == 0)  
        return true;  
  
    // Else If a year is muliplt of 100,  
    // then it is not a leap year  
    if (year % 100 == 0)  
        return false;  
  
    // Else If a year is muliplt of 4,  
    // then it is a leap year  
    if (year % 4 == 0)  
        return true;  
    return false;  
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m1,y1,m2,y2,flag;
		cin>>m1>>y1>>m2>>y2;
		range(i,y1,y2+1) if(isleap(i)) flag++;
		if((isleap(y1) && m1>2) )
		{
			flag--;
		}
		if((isleap(y2) && m2<2))
		{
			flag--;
		}
		cout<<flag<<endl;
	}
}