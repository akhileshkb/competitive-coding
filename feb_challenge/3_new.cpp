#include<bits/stdc++.h>

using namespace std;

long long int show[4][4]={0},su=0,flag=0;

long long int max(long long int sum)
{
	int maxElement = INT_MIN;
	pair<int , int> pos;
	for (int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4; j++) { 
            if (show[i][j] > maxElement) { 
                maxElement = show[i][j];
                pos.first = i;
                pos.second = j;
            }
        }
    }
    if(maxElement==0)
    {
    	sum-=100;
    }
    if(flag==0)
    {
    	sum+=maxElement*100;
    	flag++;
    }
    else if(flag==1)
    {
    	sum+=maxElement*75;
    	flag++;
    }
    else if(flag==2)
    {
    	sum+=maxElement*50;
    	flag++;
    }
    else if(flag==3)
    {
    	sum+=maxElement*25;
    	flag++;
    }
    for (int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4; j++) { 
            if (i==pos.first || j==pos.second) { 
                show[i][j] = INT_MIN;
            }
        }
    }
    return sum;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		for (int i = 0; i < 4; i++) { 
        	for (int j = 0; j < 4; j++) { 
           		show[i][j]=0;
            }
   		}
		long long int sum=0;
		flag=0;
		string e;
		int tm;
		for(long long int i=0;i<n;i++)
		{
			cin>>e>>tm;
			if(e=="A"){
				if(tm==12)
					show[0][0]++;
				if(tm==3)
					show[0][1]++;
				if(tm==6)
					show[0][2]++;
				if(tm==9)
					show[0][3]++;
			}
			if(e=="B"){
				if(tm==12)
					show[1][0]++;
				if(tm==3)
					show[1][1]++;
				if(tm==6)
					show[1][2]++;
				if(tm==9)
					show[1][3]++;
			}
			if(e=="C"){
				if(tm==12)
					show[2][0]++;
				if(tm==3)
					show[2][1]++;
				if(tm==6)
					show[2][2]++;
				if(tm==9)
					show[2][3]++;
			}
			if(e=="D"){
				if(tm==12)
					show[3][0]++;
				if(tm==3)
					show[3][1]++;
				if(tm==6)
					show[3][2]++;
				if(tm==9)
					show[3][3]++;
			}
		}
		sum=max(sum);
		sum=max(sum);
		sum=max(sum);
		sum=max(sum);
		cout<<sum<<endl;
		su+=sum;
	}
	cout<<su<<endl;
}