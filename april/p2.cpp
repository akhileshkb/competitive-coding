#include<bits/stdc++.h>
#include<mpi.h>
 
/* Integration Interval */
#define INTERVAL_MIN 0.0
#define INTERVAL_MAX 5.0
#define NUM_INTERVALS 10000000
 
using namespace std;
 
double area = 0;
/* Struct to hold configuration options */
typedef struct
{
    int intervals,rank,size;
    double delta,region;
    double min,max;
    double (*func)(double start, double end, double delta);
} Params;
 
/* Function f(x) to be integrated */
double f(double x)
{
    return 1 + x + sin(2*x); 
}
 
/* Approximation of f(x) using the rectangle rule */
double rectangle_rule(double start, double end, double delta)
{
    double area = 0.0;
    double x;
    for(x = start; x <= end; x+= delta)
        area += f(x)*delta;
    return area;
}
 
/* Function to be executed by the master rank */
void master(Params * p)
{
    // cout<<"Master"<<endl;
    double local;
    double last = 0.0;
    double start, end, result;
    double i = INTERVAL_MIN;
    MPI_Status status;
    /* Loop until the difference of results is less than the error */
    while(i<INTERVAL_MAX)
    {
        start = MPI_Wtime();
        MPI_Bcast(&i,1,MPI_INT,0,MPI_COMM_WORLD);
        i += 0.005;
        MPI_Recv(&local, 1, MPI_DOUBLE, MPI_ANY_SOURCE, 134, MPI_COMM_WORLD, &status);
    }
    // cout<<i<<endl;
    end = MPI_Wtime();
    /* Send all ranks term signal */
    i = -1;
    fprintf(stderr,"Intervals = %8d\tDelta = %f\tTime = %f\n",p->intervals,p->delta,end-start);
    return;
}
 
void slave(Params *p)
{
    // cout<<"Slave"<<endl;
    double i;
 
    while(1)
    {
        MPI_Bcast(&i,1,MPI_INT,0,MPI_COMM_WORLD);
        // cout<<i<<endl;
        /* Terminate if no more work to do */
        p->delta = (p->max-p->min)/p->intervals;
        area += p->func(i,i+0.005,p->delta);
        // cout<<area<<endl;
        /* Return results */
        i += 0.005;
        // cout<<i<<endl;
        MPI_Send(&i, 1, MPI_DOUBLE, 0, 134, MPI_COMM_WORLD);
        if(i > p->max)
        {
            // cout<<"Work Done"<<endl;
            break;
        }
    }
}
 
 
/* Main */
int main(int argc, char *argv[])
{
    int rank;
    int size;
    /* Initialize MPI */
    if(MPI_Init(&argc, &argv) != MPI_SUCCESS)
    {
        fprintf(stderr, "Unable to initialize MPI!\n");
        return -1;
    }
    /* Get rank and size */
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    
    /* Populate the parameters with default values */
    Params p;
    p.min = INTERVAL_MIN;
    p.max = INTERVAL_MAX;
    p.intervals = NUM_INTERVALS;
    p.delta = (p.max-p.min)/p.intervals;
    p.rank = rank;
    p.size = size-1;
    p.func = rectangle_rule;
    
    if(rank == 0)
        master(&p);
    else
        slave(&p);
    MPI_Finalize();
    if(rank == 1)
        cout<<"Area: "<<area<<endl;
    return 0;
}
