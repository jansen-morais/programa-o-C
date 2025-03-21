#include <stdio.h>
// A "recursividade" é uma função que chama a si mesma
// O comando "void" é uma finção vazia e sempre vem antes do "int main"
void recursivo(int numero){ // Ao usar "recursividade" o ideal é que usemos o "decremento"
    if(numero > 0) // O comando "if" aqui funcona como "quando ou si" para execultar a função
    {
    printf("%d \n", numero);
    recursivo(numero-1); // essa função torna o código "recursivo"
    //printf("%d \n", numero);
    //para utilizar a "recursividade" de forma crecente basta inverter de,
    // "antes da função" que vai diminuir pata
    // "depois da função" que vai acrecentar 
    }
}

int main(){

    int quantidade = 10;

    printf("Contagem regressiva...\n");
    recursivo(quantidade); // A "variavel" precisa ser do mesmo tipo que foi descrita no "void"



    return 0;
}