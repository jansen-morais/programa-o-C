#include <stdio.h>
 
int main() {
    unsigned long int numeroGrandePositivo = 4000000000;
    unsigned int numeroPositivo = 4000000000;
    long int numeroGrande = 4000000000;//não seja compreendido o número, basta somente acrecentar masi um long
    int numero = 4000000000;//acima da capacidade do múmero interio

    printf("Número positivo grande: %lu\n",numeroGrandePositivo );
    printf("Número positivo : %u\n",numeroPositivo );
    printf("Número  grande: %ld\n",numeroGrande );//aqui teria que acrecentar mais um l, ex:%lld
    printf("Número : %d\n",numero );
 
    return 0;
}