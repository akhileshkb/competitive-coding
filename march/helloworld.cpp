#include<mpi.h>
#include<iostream>
int main(int argc, char* argv[]) {
	MPI_Init(&argc, &argv);
	int rank, numProcesses;
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &numProcesses);
	printf("Hello from process %d\n%d", rank,numProcesses);
	MPI_Finalize();
}
