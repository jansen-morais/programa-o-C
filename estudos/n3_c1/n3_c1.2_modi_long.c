#include <stdio.h>
 
int main() {
    int regularNumber = 2147483647; // Valor máximo de int
    long int bigNumber = 2147483647;//aqui vai almentar o tamanho do int
 
    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (long int): %ld\n", bigNumber);//aqui usamos o comando"%ld" por conta da função long
 
    bigNumber = 2147483648; // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", bigNumber);
 
    return 0;
}