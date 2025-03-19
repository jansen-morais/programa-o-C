#include <stdio.h> // Biblioteca padrão de entrada e saída (printf, scanf)
#include <stdlib.h> // Biblioteca padrão de funções gerais (rand, srand)
#include <string.h> // Adicionado: Inclui a biblioteca string.h para usar strcmp()

int main(){

    int rainha = 1;
    int torre = 1;
    int bispo = 1;


        printf("### Xadrez ###\n\n");

        printf("\n### Movimentação do Bispo ###\n\n");

    while (bispo <= 10)
    {
        printf("Uma casa para a direita\n");
       bispo++;
        printf("Uma casa para frente\n");
        bispo++;
        
    }printf("Movimentou 5 casas na diagonal.\nFim do movimento do Bispo...\n");

            printf("\n### Movimentação da Torre ###\n\n");

    for ( torre = 0; torre < 5; torre++)
    {
        printf("Uma casa para frente\n");
    
    }printf("Movimentou 5 casas na vertical.\nFim do movimento do Torre...\n");

    printf("\n### Movimentação da Rainha ###\n\n");

    do
    {
        printf("Uma casa para a Direita\n");
        rainha++;
    } while (rainha <= 8);
    printf("Movimentou 8 casas na horizontal.\nFim do movimento da Rainha...\n");
    
    


        return 0;
}