#include <stdio.h> // Biblioteca padrão de entrada e saída (printf, scanf)
#include <stdlib.h> // Biblioteca padrão de funções gerais (rand, srand)
#include <time.h> // Biblioteca para funções de tempo (time)

int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;
    // Gerar número aleatorio
    srand(time(0));// Inicializa a semente do gerador de números aleatórios com o tempo atual
    // A função srand() configura o gerador de números aleatórios com uma semente inicial.
    // time(0) retorna o tempo atual em segundos, garantindo que a semente seja diferente a cada execução.
    numeroComputador = rand()% 100+1; // Número emtre 1 e 100
    // Aqui uso o sinal "%" para fazer a divisão, 

            // Inicio do jogo
    printf("Bem vindo ao jogo maior, menor ou igual!\n\n");
    printf("Voçê deve escolher um numero e um tipo de comparação\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");
    printf("\n");

    printf("Escolha a comparação \n");
    scanf("%c", &tipoComparacao);

    printf("Digite um número de, 1 a 100\n:");
    scanf("%d", &numeroJogador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Voê escolheu a opção maior \n");
        resultado = numeroJogador > numeroComputador? 1:0;
        printf("Número do computador é: %d e o do jogador é: %d \n", numeroComputador, numeroJogador);
        break;
    case 'N':
    case 'n':
        printf("Voê escolheu a opção menor \n");
       resultado = numeroJogador < numeroComputador? 1:0;
       printf("Número do computador é: %d e o do jogador é: %d \n", numeroComputador, numeroJogador);
        break;
    case 'I':
    case 'i':
        printf("Voê escolheu a opção igual \n");
        resultado = numeroJogador == numeroComputador? 1:0;
        printf("Número do computador é: %d e o do jogador é: %d \n", numeroComputador, numeroJogador);
        break; 
    default:
    printf("Opção invalida\n");
        break;
    }
    if (resultado == 1){
        printf("Voçê venceu!\n");
    }else{
        printf("Voçê perdeu!\n");
    }
    

            // Exibe o número do computador
    //printf("O número do computador é: %d\n", numeroComputador);





        return 0;
}