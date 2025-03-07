#include <stdio.h> // Biblioteca padrão de entrada e saída (printf, scanf)
#include <stdlib.h> // Biblioteca padrão de funções gerais (rand, srand)
#include <time.h> // Biblioteca para funções de tempo (time)

int main() {
    int opcao; // Declara a variável para armazenar a opção do menu
    int numeroSecreto, palpite; // Declara as variáveis para o número secreto e o palpite do jogador

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao); // Lê a opção escolhida pelo usuário

    switch (opcao) {
        case 1: // Caso a opção seja 1 (Iniciar Jogo)
            srand(time(0)); //"srand" gera números aleatoriamente. "time(0)"" vai iniciar de acordo com o horario, tornando assim sempre um número novo
            numeroSecreto = rand() % 10 + 1; //esse comando vai delimitar o número de 0 a 9, adcionamos então a expreção + 1 para ser de 0 a 10 
            printf("Adivinhe o número (entre 1 e 10):");
            scanf("%d", &palpite); // Lê o palpite do jogador

            if (palpite == numeroSecreto) { // Verifica se o palpite está correto
                printf("Parabéns! Você acertou!\n");
            } else {
                printf("Você errou. O número era %d.\n", numeroSecreto);
            }
            break;
        case 2: // Caso a opção seja 2 (Ver Regras)
            printf("Regras do Jogo:\n");
            printf("1. Escolha uma opção no menu.\n");
            printf("2. Se você escolher 'Iniciar Jogo', adivinhe o número secreto.\n");
            printf("3. O jogo termina quando você escolhe 'Sair'.\n");
            break;
        case 3: // Caso a opção seja 3 (Sair)
            printf("Saindo...\n");
            break;
        default: // Caso a opção seja inválida
            printf("Opção inválida. Tente novamente.\n");
    }

    return 0; // Indica que o programa terminou com sucesso
}