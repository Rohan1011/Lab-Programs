#include<stdio.h>
#include<mpi.h>
int main(int argc, char *argv[])
{
    int rank, size;
    int number;
    MPI_Init(&argc, &argv);               // Initialize MPI
    MPI_Comm_rank(MPI_COMM_WORLD, &rank); // Get process rank
    MPI_Comm_size(MPI_COMM_WORLD, &size); // Get number of processes
    if (size < 2)
    {
        if (rank == 0)
            printf("This program requires at least 2 MPI processes.\n");
        MPI_Finalize();
        return 0;
    }
    if (rank == 0)
    {
        number = 42; // The number to send
        printf("Process 0 sending number %d to process 1\n", number);
        MPI_Send(&number, 1, MPI_INT, 1, 0, MPI_COMM_WORLD);
    }
    else if (rank == 1)
    {
        MPI_Recv(&number, 1, MPI_INT, 0, 0, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        printf("Process 1 received number %d from process 0\n", number);
    }
    MPI_Finalize(); // Finalize MPI
    return 0;

}

user@fedora:$ mpicc prog5_mpi.c -o prog5_mpi 
user@fedora:$ mpirun -np 2  ./prog5_mpi 
Process 0 sending number 42 to process 1 
Process 1 received number 42 from process 0
