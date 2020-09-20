#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],max=0,index=-1;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>max){
				max=a[i];
				index = i;
			}
		}
		vector<int> v;
		for(int i=0;i<n;i++)
			if(a[i]==max)
				v.push_back(i);
		if(v.size()>1)
		{
			// int diff = n - (v[v.size()-1]-v[0]);
			// if(v.size()==2)
			// {
			// 	if((v[v.size()-1]-v[0])<diff)
			// 		diff = v[v.size()-1]-v[0];

			// 	if(diff==(n+1)/2)
			// 	{
			// 		cout<<"0"<<endl;
			// 	}
			// 	else{
			// 		cout<<(n+1)/2 - diff<<endl;
			// 	}
			// }
			// else
			// {
			// 	// for(int i=1;i<v.size();i++)
			// 	// {
			// 	// 	if(diff<(v[i]-v[i-1]))
			// 	// 		diff=v[i]-v[i-1];

			// 	// }
			// 	// cout<<v[v.size()-1]-v[0]<<endl;
			// 	if((v[v.size()-1]-v[0])>diff)
			// 		diff = v[v.size()-1]-v[0];
			// 	if(diff>=(n+1)/2)
			// 	{
			// 		cout<<"0"<<endl;
			// 	}
			// 	else{
			// 		cout<<(n+1)/2 - diff<<endl;
			// 	}
			// }
			int max = 0,index2 = 0,dis =0; 
			for(int i=0;i<v.size();i++)
			{
				v[i] = v[i]-v[0];
				if(v[i]>(n-(v[i])))
					v[i] = 0 - v[i];
				if(max<(v[i])){
					max= v[i]; 
					// index2 = i;
				}
				if(v[i]<0)
				{
					if(dis>v[i]){
						dis = v[i];
						index2 = i;
					}

				}
			}
			for(int i=0;i<v.size();i++){
				if(v[index2]<0)
				{
					v[i] = v[i] + v[index2];
				}
				 
			}
			if(v[index2]<0)
				max = max + v[index2];
			if(max>=(n+1)/2)
				cout<<"0"<<endl;
			else{
				cout<<(n+1)/2 - max<<endl;
			}
		}
		if(v.size()==1)
			cout<<(n+1)/2<<endl;
	} 
}