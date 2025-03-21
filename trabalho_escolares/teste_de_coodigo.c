#include <stdio.h> // Inclui a biblioteca stdio.h para funções de entrada/saída padrão

// Função para simular o movimento do bispo
void bispo() { // A função "void" é vazia nos pemitindo criar o parametroparaa recurcividade
    printf("Uma casa para a direita\n"); // Imprime o movimento do bispo para a direita
    printf("Uma casa para frente\n"); // Imprime o movimento do bispo para frente
}

// Função para simular o movimento da torre
void torre() { // A função "void" é vazia nos pemitindo criar o parametro para a recurcividade
    printf("Uma casa em linha reta\n"); // Imprime o movimento da torre em linha reta
}

// Função para simular o movimento da rainha
void rainha() { // A função "void" é vazia nos pemitindo criar o parametroparaa recurcividade
    printf("Uma casa para direita\n"); // Imprime o movimento da rainha para a direita
}

// Função para simular o movimento do cavalo usando loops avançados
void cavalo() { // A função "void" é vazia nos pemitindo criar o parametroparaa recurcividade
    int movimentosLinha[] = {0, 0, 0, 0, 0}; // Array com movimentos na linha (todos 0 neste exemplo)
    int movimentosColuna[] = {-1, -1, 1, 1, 1}; // Array com movimentos na coluna (-1 = esquerda, 1 = direita)

    printf("Movimentos do cavalo:\n"); // Imprime o cabeçalho dos movimentos do cavalo
    for (int i = 0; i < 5; i++) { // Loop para iterar sobre os movimentos do cavalo
        if (movimentosColuna[i] == -1) { // Verifica se o movimento é para a esquerda
            printf("Uma casa para esquerda\n"); // Imprime o movimento para a esquerda
        } else if (movimentosColuna[i] == 1) { // Verifica se o movimento é para a direita
            printf("Uma casa para direita\n"); // Imprime o movimento para a direita
        }
    }
}

// Função principal do programa
int main() {
    printf("\n### Movimentação das peças de Xadrez ###\n\n"); // Imprime o título do programa

    printf("Movimento do Bispo:\n"); // Imprime o cabeçalho dos movimentos do bispo
    for (int i = 0; i < 5; i++) bispo(); // Chama a função bispo() 5 vezes para simular os movimentos
    printf("\nFim do movimento do Bispo\n\n"); // Imprime o fim dos movimentos do bispo

    printf("\nMovimento da Torre:\n"); // Imprime o cabeçalho dos movimentos da torre
    for (int i = 0; i < 5; i++) torre(); // Chama a função torre() 5 vezes para simular os movimentos
    printf("\nFim do movimento da Torre\n\n"); // Imprime o fim dos movimentos da torre

    printf("\nMovimento da Rainha:\n"); // Imprime o cabeçalho dos movimentos da rainha
    for (int i = 0; i < 5; i++) rainha(); // Chama a função rainha() 5 vezes para simular os movimentos
    printf("\nFim do movimento da Rainha\n\n"); // Imprime o fim dos movimentos da rainha

    printf("\nCavalo:\n"); // Imprime o cabeçalho dos movimentos do cavalo
    cavalo(); // Chama a função cavalo() para simular os movimentos
    printf("\nFim do movimento do Cavalo\n\n"); // Imprime o fim dos movimentos do cavalo

    printf("\nFim da movimentação\n\n"); // Imprime o fim da movimentação das peças

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}