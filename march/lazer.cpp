#include<bits/stdc++.h>

using namespace std;

#define pdd pair<double, double>

pdd lineLineIntersection(pdd A, pdd B, pdd C, pdd D) 
{ 
    // Line AB represented as a1x + b1y = c1 
    double a1 = B.second - A.second; 
    double b1 = A.first - B.first; 
    double c1 = a1*(A.first) + b1*(A.second); 
  
    // Line CD represented as a2x + b2y = c2 
    double a2 = D.second - C.second; 
    double b2 = C.first - D.first; 
    double c2 = a2*(C.first)+ b2*(C.second); 
  
    double determinant = a1*b2 - a2*b1; 
  
    if (determinant == 0) 
    { 
        // The lines are parallel. This is simplified 
        // by returning a pair of FLT_MAX 
        return make_pair(FLT_MAX, FLT_MAX); 
    } 
    else
    { 
        double x = (b2*c1 - b1*c2)/determinant; 
        double y = (a1*c2 - a2*c1)/determinant; 
        return make_pair(x, y); 
    } 
} 

int main()
{
	
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		vector<pair<double,double>> v,v1;
		double a1[n],b1[n],c1[n];
		for(int i=0;i<n;i++)
		{
			pair<double,double> temp;
			temp.first = i+1;
			cin>>temp.second;
			v.push_back(temp);
		}
		for(int i=0;i<n;i++)
		{
			pdd A = v[i];
			pdd B = v[i+1];
			a1[i] = B.second - A.second; 
    		b1[i] = A.first - B.first; 
    		c1[i] = a1[i]*(A.first) + b1[i]*(A.second);

		}

		// for(int i=0;i<n;i++)
		// {
		// 	cout<<v[i].first<<" "<<v[i].second<<endl;
		// }
		while(q--)
		{
			int x1,x2,y,count=0;
			cin>>x1>>x2>>y;
			pdd p1,p2,p3;
			p1.first = x1;
			p1.second = y;
			p2.first = x2;
			p2.second = y;
			for(int i=0;i<n;i++)
			{
				
				// cout<<p3.first<<" "<<p3.second<<endl;
				if((y>=v[i].second && y<=v[i+1].second) || (y>=v[i+1].second && y<=v[i].second))
				{
					// p3 = lineLineIntersection(v[i],v[i+1],p1,p2);
					// cout<<i<<endl;
					// cout<<p3.first<<" "<<p3.second<<endl;
					pdd C = p1,D = p2;
					double a2 = D.second - C.second; 
				    double b2 = C.first - D.first; 
				    double c2 = a2*(C.first)+ b2*(C.second);

				    double determinant = a1[i]*b2 - a2*b1[i];

				    if (determinant == 0) 
				    { 
				        // The lines are parallel. This is simplified 
				        // by returning a pair of FLT_MAX 
				        // return make_pair(FLT_MAX, FLT_MAX);
				        p3 =  make_pair(FLT_MAX, FLT_MAX);
				    } 
				    else
				    { 
				        double x = (b2*c1[i] - b1[i]*c2)/determinant; 
				        double y = (a1[i]*c2 - a2*c1[i])/determinant; 
				        p3 = make_pair(x, y); 
				    }

					if(p3.first>=x1 && p3.first<=x2 && p3.first>=v[i].first && p3.first<=v[i+1].first)
					{
						// cout<<i<<endl;
						if( (v[i] == p2) || (v[i+1] == p1) )
						{
							// count--;
						}
						else{
						count++;}
						// cout<<count<<endl;
					}
				}
				
			}
			cout<<count<<"\n";
		}
	}
}