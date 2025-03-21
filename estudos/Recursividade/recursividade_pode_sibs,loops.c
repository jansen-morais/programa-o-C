

//Para ilustrar o conceito de recursividade, 
//veja um exemplo simples de uma função recursiva em C que simula o comportamento de um loop. 
//Considere o código a seguir, 
//que usa recursividade para imprimir números de n até 1.

#include <stdio.h>
 
// Função recursiva para imprimir números de n até 1
void recursiveLoop(int n) {
    if (n > 0) {
        printf("%d ", n);  // Imprime o valor atual de n
        recursiveLoop(n - 1);  // Chama a si mesma com n - 1
    }
}
 
int main() {
    int numero = 5;
    printf("Contagem regressiva: ");
    recursiveLoop(numero);
    return 0;
}

/*#include <stdio.h>

// um exemplo simples de um procedimento que imprime uma mensagem na tela
// Definição de procedimento para imprimir uma mensagem
void imprimirMensagem() {
    printf("Olá, mundo!\n");
}
 
int main() {
    // Chamada do procedimento
    imprimirMensagem();
    return 0;
}*/

   
