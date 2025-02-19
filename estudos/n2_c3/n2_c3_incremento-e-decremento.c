#include <stdio.h>

int main(){
    /*
    muito utilizado no caso de um loop para  a adção simples de um valor decimal 
    incremento (++)
    pré-inceremento ++a
    pós-inceremento a++
    decremento (--)
    pré-decremento --a
    pós-decremento a--
    */

    int numero1=1, resultado;

    printf("Antes incremento: %d\n",numero1);
    //numero1 +=1;//ta,bem poderiaser assim na expreção normal usando a taribição 
    //numero1++;//seria examente igual "numero1 = numero1 +1;" utilizando o incremento facilita a escrita e leitura
    //resultado = numero1++;//pos-incremento seria:
    resultado = numero1;  //resultado vai receber o incremento e depois sera feito a adição
    numero1++; //aqui foi separa em 2 funçoes e acrencentado "numero1" que vai dividir em 2 funçoes 
    //printf("Apos incremento: %d\n",numero1);
    printf("Apos pos-incremento - Número 1: %d - resultado: %d\n",numero1, resultado);
    /*aqui vai mostrar o resultado antes de ser incrementado */

    resultado = ++numero1;//aqui esta fazendo a adição do valor que a variavel "numero1" ja tinha antes do pos-incremento
    printf("Apos pre-incremento - Número 1: %d - resultado: %d\n",numero1, resultado);

    //numero1 -=1;
   //numero1--;//seria examente igual "numero1=numero1-1;" utilizando o incremento facilita a escrita e leitura
    //printf("Apos decremento: %d\n",numero1);

  //numero1 -=1;
    resultado = numero1--;
    printf("Apos pos-decremento - Número 1: %d - resultado: %d\n",numero1, resultado);

    resultado = --numero1;//aqui esta subritaindo do valor que a variavel "numero1" ja tinha antes do pos-decremento
    //mostrando como resultado o valor inicial 
    printf("Apos pre-decremento - Número 1: %d - resultado: %d\n",numero1, resultado);


    /**/

        return 0;
}