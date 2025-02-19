#include <stdio.h>

int main(){

    int nota1, nota2, nota3;
    float media;

    printf("*** Cauculo de media ***\n");

    printf("Informe a primeira nota:");
    scanf("%d", &nota1);

    printf("Informe a segunda nota:");
    scanf("%d", &nota2);

    printf("Informe a terceira nota:");
    scanf("%d", &nota3);

    media= (float)(nota1 + nota2 + nota3) /3;

    printf("Media: %.2f\n", media);

    printf("Obrigado...\n:)\n");

    return 0;
}