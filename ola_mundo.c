#include <stdio.h>
#include <mpi.h>
/*
Relatorio

Foi feita a instalacao atraves do terminal utilizando o sudo apt install wsl, depois intalado as bibliotecas. Apos foi feito alguns
testes.
O codigo utilizado na pratica tem por função rodar o comando para ranquear o numero de processos contando com o tamanho de
 nucleos possuinte, o codigo mostra diferentes resultados, mas todos gerados ao mesmos momento. Mostrando como funciona a
clusterizacao.
*/

int main(int argc, char *argv[]) {
    int rank, size;

    MPI_Init(&argc, &argv); // Inicializa MPI
    MPI_Comm_size(MPI_COMM_WORLD, &size); // Número total de processos
    MPI_Comm_rank(MPI_COMM_WORLD, &rank); // ID do processo atual

    printf("Olá do processo %d de %d\n", rank, size);

    MPI_Finalize(); // Finaliza MPI
    return 0;
}
