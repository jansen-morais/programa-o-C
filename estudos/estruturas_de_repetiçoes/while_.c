#include <stdio.h>
 
int main() {
    int num;

    int i = 1;
   
    while (i <= 5) {// O rpograma se repeteria ate a condição se tornar falsa
        printf("%d\n", i);
        i++;/*aqui eu faço um encremento para que a cpndição se torne falsa
        e o programa finalize*/
    }
   
    printf("Digite um número (negativo para sair): \n");// Esse c´digo sreá repetido para gerar a negativa e finalizar o programa 
    scanf("%d", &num);
   
    while (num >= 0) { //condição para execultar o codigo dentro do loope
        printf("Você digitou: %d\n", num);
       // bloco de código a ser executado repetidamente

        printf("Digite um número (negativo para sair): \n");
        scanf("%d", &num); // negativa para finalizar e não gerar o loope infinito 
    }
   
    printf("Número negativo detectado. Saindo...\n");
   
    return 0;
}