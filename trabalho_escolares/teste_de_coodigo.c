#include <stdio.h>

void bispo() {
    printf("Uma casa para a direita\n");
    printf("Uma casa para frente\n");
}

void torre() { printf("Uma casa em linha reta\n"); }
void rainha() { printf("Uma casa para direita\n"); }

void cavalo() {
    int movimentosLinha[] = {0, 0, 0, 0, 0}; // Array para movimentos na linha
    int movimentosColuna[] = {-1, -1, 1, 1, 1}; // Array para movimentos na coluna

    printf("Movimentos do cavalo:\n");
    for (int i = 0; i < 5; i++) {
        if (movimentosColuna[i] == -1) {
            printf("Uma casa para esquerda\n");
        } else if (movimentosColuna[i] == 1) {
            printf("Uma casa para direita\n");
        }
    }
}

int main() {
        printf("\n### Movimentação das peças de Xadrez ###\n\n");
    printf("Movimento do Bispo:\n"); for (int i = 0; i < 5; i++) bispo();
    printf("\nFim do movimento do Bispo\n\n");
    printf("\nMovimento da Torre:\n");  for (int i = 0; i < 5; i++) torre();
    printf("\nFim do movimento da Torre\n\n");
    printf("\nMovimento da Rainha:\n"); for (int i = 0; i < 5; i++) rainha();
    printf("\nFim do movimento da Rainha\n\n");
    printf("\nCavalo:\n"); cavalo();
    printf("\nFim do movimento do Cavalo\n\n");

    printf("\nFim da movimntação\n\n");
    
        return 0;
}