#include<mpi.h>
#include<bits/stdc++.h>
 
using namespace std;
 
float func(float a,float h)
{
    float res = 1 + a + sin(2*a);
    return res*h;
}
 
int main(int argc, char ** argv)
{
    int np, myrank;
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &np);
    MPI_Comm_rank(MPI_COMM_WORLD, &myrank);
    float h = 0.000001;
    MPI_Status status;
    int a = 0;
    int b = 5;
    float result = 0;
    if(myrank%np==0)
    {
        for(float i = a;i<=b;i = i + np*h)
        {
 
            float ans = func(i,h);
            result += ans;
        }
        cout<<result<<" is given by "<<myrank%np<<" process."<<endl;
    }
    if(myrank%np==1)
    {
        for(float i = a + (myrank%np)*h;i<=b;i = i + np*h)
        {
            float ans = func(i,h);
            result += ans;
        }
        cout<<result<<" is given by "<<myrank%np<<" process."<<endl;
    }
    if(myrank%np==2)
    {
        for(float i = a + (myrank%np)*h;i<=b;i = i + np*h)
        {
            float ans = func(i,h);
            result += ans;
        }
        cout<<result<<" is given by "<<myrank%np<<" process."<<endl;
 
    }
    if(myrank%np==3)
    {
        for(float i = a + (myrank%np)*h;i<=b;i = i + np*h)
        {
            float ans = func(i,h);
            result += ans;
        }
        cout<<result<<" is given by "<<myrank%np<<" process."<<endl;
    }
    float finale = 0;
    if(myrank%4 == 0)
    {
        finale = result;
        for (int i=1;i<np;i++)
        {
          int source = i;
          MPI_Recv(&result, 1, MPI_FLOAT, source, 134, MPI_COMM_WORLD, &status);
          finale += result;
        }
        printf("The result =%f\n",finale);
    }
    else
        MPI_Send(&result, 1, MPI_FLOAT, 0, 134, MPI_COMM_WORLD);
    MPI_Finalize(); 
}
