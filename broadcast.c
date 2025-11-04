7. Write a MPI Program to demonstration of Broadcast
operation.
#include <stdio.h>
#include <mpi.h>
int main(int argc, char* argv[]) {
int rank, size;
int data;
MPI_Init(&argc, &argv); // Initialize MPI
MPI_Comm_rank(MPI_COMM_WORLD, &rank); // Get current process
rank
MPI_Comm_size(MPI_COMM_WORLD, &size); // Get total number of
processes
if (rank == 0) {
// Root process initializes the data
data = 99;
printf("Process %d broadcasting data = %d\n", rank, data);
}
// Broadcast the value of 'data' from process 0 to all other
processes
MPI_Bcast(&data, 1, MPI_INT, 0, MPI_COMM_WORLD);
/*Each process prints the received data or MPI_Bcast() sends
the value of data from the root process (rank 0) to all other
processes in the communicator (MPI_COMM_WORLD)*/.
printf("Process %d received data = %d\n", rank, data);
MPI_Finalize(); // Finalize the MPI environment
return 0;
}
output
Process 0 broadcasting data = 99
Process 0 received data = 99
Process 1 received data = 99
Process 2 received data = 99
Process 3 received data = 99