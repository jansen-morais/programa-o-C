#include <stdio.h>

int main(){

    float temperatura, umidade;
    unsigned int estoque, estoqueminimo = 1000;

    printf("Entre coma temperatura;");
    scanf("%f",&temperatura);

    printf("Entre coma umidade;");
    scanf("%f",&umidade);

    printf("Entre coma estoque;");
    scanf("%u",&estoque);

    if(temperatura>30){
        printf("Temperatura esta alta\n");
    }else{
        printf("Temperatura esta dentro dos parametros\n");
    }

    if(umidade>50){
        printf("Umidade está elevada\n");
    }else{
        printf("Umidade está dentro dos parametros\n");
    }

    if(estoque < estoqueminimo){
        printf("Estoque está em estado critico\n");
    }else{
        printf("Estoque está normal\n");
    }
    return 0;
}