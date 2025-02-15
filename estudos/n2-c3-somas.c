#include <stdio.h>

int main(){
    /*soma (+)
    subitração (-)
    multipliclação (*)
    divisão (/)

    */

    int numero1, numero2, resultado;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o número 1\n");
    scanf("%d", &numero1);
    printf("Entre com o número 2\n");
    scanf("%d", &numero2);


    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;
    
    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n",subtracao);
    printf("A multiplicação é: %d\n",multiplicacao);
    printf("A divisão é: %d\n",divisao);




            printf("Obrigado e ate a prxima\n\n");
        return 0;

}