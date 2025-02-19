#include <stdio.h>
/*
    atribuição simples(=)
    atribuição com soma (+=)
    atribuição com subtração (-=)
    atribuição com multiplicação (*=)
    atribuição com divisão (/=)
    */
int main(){

    int numero1=10, numero2, resultado;

    resultado=10;
    printf("Resultado: %d\n",resultado);
    /*para exemplificação seria a mesma coisa se eu colacase o seguinte código
    resultado = resultado + 20*/
    resultado +=20;
    printf("Resultado +20: %d\n", resultado);
    /*para exemplificação seria a mesma coisa se eu colacase o seguinte código
    resultado = resultado - numero1*/
    resultado -= numero1;
    printf("Resultado -10: %d\n",resultado);
    /*para exemplificação seria a mesma coisa se eu colacase o seguinte código
    resultado = resultado * 5*/
    resultado *=5;
    printf("Resultado *5: %d\n",resultado);
    /*para exemplificação seria a mesma coisa se eu colacase o seguinte código
    resultado = resultado / 2*/
    resultado /=2;
    printf("Resultado /2: %d\n",resultado);



        return 0;
}
