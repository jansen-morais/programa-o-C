#include <stdio.h>
// O comando "void" é uma finção vazia e sempre vem antes do "int main"
void recursivo(int numero){ // Ao usar "recursividade" o ideal é que usemos o "decremento"
    if(numero > 0)
    {
    printf("%d \n", numero);

    recursivo(numero-1);
    }
}

int main(){


    return 0;
}