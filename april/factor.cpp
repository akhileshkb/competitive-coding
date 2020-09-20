#include<bits/stdc++.h>
using namespace std;

typedef long long int Int; 

const Int MAX = 1000000007; 
  
// array to store prime factors 
Int factor[MAX] = { 0 }; 
  
// function to generate all prime factors 
// of numbers from 1 to 10^6 
void generatePrimeFactors() 
{ 
    factor[1] = 1; 
  
    // Initializes all the positions with their value. 
    for (Int i = 2; i < MAX; i++) 
        factor[i] = i; 
  
    // Initializes all multiples of 2 with 2 
    for (Int i = 4; i < MAX; i += 2) 
        factor[i] = 2; 
  
    // A modified version of Sieve of Eratosthenes to 
    // store the smallest prime factor that divides 
    // every number. 
    for (Int i = 3; i * i < MAX; i++) { 
        // check if it has no prime factor. 
        if (factor[i] == i) { 
            // Initializes of j starting from i*i 
            for (Int j = i * i; j < MAX; j += i) { 
                // if it has no prime factor before, then 
                // stores the smallest prime divisor 
                if (factor[j] == j) 
                    factor[j] = i; 
            } 
        } 
    } 
} 
  
// function to calculate number of factors 
Int calculateNoOFactors(Int n) 
{ 
    if (n == 1) 
        return 1; 
  
    Int ans = 1; 
  
    // stores the smallest prime number 
    // that divides n 
    Int dup = factor[n]; 
  
    // stores the count of number of times 
    // a prime number divides n. 
    Int c = 1; 
  
    // reduces to the next number after prime 
    // factorization of n 
    Int j = n / factor[n]; 
  
    // false when prime factorization is done 
    while (j != 1) { 
        // if the same prime number is dividing n, 
        // then we increase the count 
        if (factor[j] == dup) 
            c += 1; 
  
        /* if its a new prime factor that is factorizing n,  
           then we again set c=1 and change dup to the new  
           prime factor, and apply the formula explained  
           above. */
        else { 
            dup = factor[j]; 
            ans = ans * (c + 1); 
            c = 1; 
        } 
  
        // prime factorizes a number 
        j = j / factor[j]; 
    } 
  
    // for the last prime factor 
    ans = ans * (c + 1); 
  
    return ans; 
} 

void addEdge(vector<Int> v[], 
             Int x, 
             Int y) 
{ 
    v[x].push_back(y); 
    v[y].push_back(x); 
} 
  
// A function to print the path between 
// the given pair of nodes. 
void printPath(vector<Int> stack,Int p[]) 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Int i,pdt=1; 
    for (i = 0; i < (Int)stack.size(); 
         i++) { 
    	pdt *= p[stack[i]-1];
        // cout << stack[i]<<":"<<p[stack[i]-1] << " -> "; 
    } 
    // cout << stack[i]<<":"<<p[stack[i]-1]<<endl;
    // cout<<pdt<<endl; 
    Int n = pdt;
    
    cout<<(calculateNoOFactors(n)%1000000007)<<"\n";
    
} 
  
// An utility function to do 
// DFS of graph recursively 
// from a given vertex x. 
void DFS(vector<Int> v[], 
         bool vis[], 
         Int x, 
         Int y, 
         vector<Int> stack,Int p[]) 
{ 
    stack.push_back(x); 
    if (x == y) { 
  
        // print the path and return on 
        // reaching the destination node 
        printPath(stack,p); 
        return; 
    } 
    vis[x] = true; 
  
    // A flag variable to keep track 
    // if backtracking is taking place 
    Int flag = 0; 
    if (!v[x].empty()) { 
        for (Int j = 0; j < v[x].size(); j++) { 
            // if the node is not visited 
            if (vis[v[x][j]] == false) { 
                DFS(v, vis, v[x][j], y, stack,p); 
                flag = 1; 
            } 
        } 
    } 
    if (flag == 0) { 
  
        // If backtracking is taking 
        // place then pop 
        stack.pop_back(); 
    } 
} 
  
// A utility function to initialise 
// visited for the node and call 
// DFS function for a given vertex x. 
void DFSCall(Int x, 
             Int y, 
             vector<Int> v[], 
             Int n, 
             vector<Int> stack, Int p[]) 
{ 
    // visited array 
    bool vis[n + 1]; 
  
    memset(vis, false, sizeof(vis)); 
  
    // DFS function call 
    DFS(v, vis, x, y, stack,p); 
} 

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	generatePrimeFactors();

	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		// vector<pair<long long int,long long int>> e;
		vector<Int> v[n+1],stack;
		pair<long long int,long long int> temp;
		for(long long int i=0;i<n-1;i++)
		{
			cin>>temp.first>>temp.second;
			// e.push_back(temp);
			addEdge(v,temp.first,temp.second);
		}
		long long int p[n],q;
		for(long long int i=0;i<n;i++)
			cin>>p[i];
		cin>>q;
		while(q--)
		{
			long long int a,b;
			cin>>a>>b;

			DFSCall(a,b,v,n+1,stack,p);
		}
	}
}