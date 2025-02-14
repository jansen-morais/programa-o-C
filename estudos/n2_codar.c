#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Ola!\n...\nEntre com as informaçoes do alino.\n");


    printf("Digite sua idade:\n"); scanf("%d",&idade);
    printf("Digite sua altura:\n"); scanf("%F",&altura);
    printf("Digite seu nome;\n"); scanf("%49s",&nome);
    printf("Digite sua matricula:\n"); scanf("%d",&matricula);

    printf("Nome do aluno: %s - Matricula: %d\n",nome, matricula);
    printf("Idade: %d - Altura: %.2f \n", idade, altura);

    printf("Obrigado!\n...");



    return 0;

 
}