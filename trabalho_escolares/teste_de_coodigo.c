#include <stdio.h>

void bispo() {
    printf("Uma casa para a direita\n");
    printf("Uma casa para frente\n");
}

void torre() { printf("Linha reta\n"); }
void rainha() { printf("Qualquer direcao\n"); }

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
    printf("Bispo:\n"); for (int i = 0; i < 5; i++) bispo();
    printf("\nTorre:\n");  for (int i = 0; i < 5; i++) torre();
    printf("\nRainha:\n"); for (int i = 0; i < 5; i++) rainha();
    printf("\nCavalo:\n"); cavalo();
    return 0;
}