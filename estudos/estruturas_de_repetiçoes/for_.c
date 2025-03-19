#include <stdio.h>
 // É um código simples que sempre tera um inicio, meio e fim. 
 // Contendo um número claro de repetiçoes.
 // E pode ser usado com incremento e decremento.
 // Muito utilizado para algoritimos
int main() {
    for (int i = 1; i <= 20; i++) { // Aqui a variavel foicriada dentro do for porem so sera usada para ele
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
   
    for (int i = 100; i >= 0; i -= 10) {// Aqui ele funciona com decremento
        printf("%d\n", i);
    }

    return 0;
}