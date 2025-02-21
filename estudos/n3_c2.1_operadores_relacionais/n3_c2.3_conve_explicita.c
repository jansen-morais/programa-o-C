#include <stdio.h>

int main() {
    int numemo2 = 10;
    float numero1 = 10.2;

    //int comparison = (float)num == result;

    printf("número1 > número2: %d\n",numero1 > numemo2);//aqui é feito a converção implicita
    printf("número1 = número2: %d\n",numero1 == numemo2);

    printf("Ex.2 número1 > número2: %d\n",(int) numero1 > numemo2);//aqui é feito a converção explicita
    printf("ex.2 número1 = número2: %d\n",(int) numero1 == numemo2);//adicionando o comando (int) antes da variavel se execultada
    //tornando o 10.0, em um numero inteiro, ou somente 10
    
    return 0;
}