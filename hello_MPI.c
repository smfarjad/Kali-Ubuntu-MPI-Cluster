#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
    MPI_Init(NULL, NULL);     // MPI environment begins!

    int world_size, p_rank, name_len;
    char processor_name[MPI_MAX_PROCESSOR_NAME];
    
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);
    MPI_Comm_rank(MPI_COMM_WORLD, &p_rank);
    MPI_Get_processor_name(processor_name, &name_len);

    printf("Hello world from processor %s, rank %d out of %d processors\n",
           processor_name, p_rank, world_size);

    MPI_Finalize();            // MPI environment ends!
}
