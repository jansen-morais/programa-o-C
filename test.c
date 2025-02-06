#include <stdio.h>

int main(){
    
    char nome[30];
    int idade;
    float altura;
    
    printf("Ola tudo bem?\nPoderia se aprensentar por gentileza?");
    printf("Qual o seu nome?\n:"); scanf("%29s",&nome);
    printf("Quantos anos voçê tem?\n:"); scanf("%d", &idade);
    printf("Qual a sua altura\n:"); scanf("%f",&altura);
    printf("Então vamos\n...\n");
    printf("Nome: %s\n Idade: %d\n Altura; %.2f\n",nome,idade,altura);
    printf("Obrigado!\n...");
        return 0;
}