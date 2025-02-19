#include <stdio.h>
 
int main() {
    int signedNumber = 3000000000; // Este valor excede o limite de um int normal
    unsigned int unsignedNumber = 3000000000;/*aqui a função "unsigned" armazena somente valores positivos, dobrando o valor que armazena o comando"int*/
 
    printf("Número com sinal: %d\n", signedNumber);
    printf("Número sem sinal: %u\n", unsignedNumber);
 
    return 0;
}