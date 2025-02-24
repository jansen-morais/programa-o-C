#include <stdio.h>

int main(){

    int nota1;
    int nota2;
    int nota3;
    float media;/*aqui onsera armasenado o cauculo da media */

    printf("cauculo de media\n\n");


    printf("primeira nota:");
    scanf("%d",&nota1);

    printf("segunda nota:");
    scanf("%d",&nota2);

    printf("terceira nota:");
    scanf("%d",&nota3);

    media = (float)(nota1 + nota2 + nota3)/3;//comando que execulta o cauculo da media 
    //o comando "float" força aconveção dos algariimos para que não gere erro
    //media = (float)nota1 / nota3; 

    printf("a media é: %.2f\n\n",media);

    return 0;

}