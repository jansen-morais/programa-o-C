#include <stdio.h>

int main(){

    char nome[30];
    char natural[30];
    int idade;
    char profissao[99];
    float altura;
    char saldo[40];
    

    printf("Olá!\n Tudo bem?\n ... \n Eespero que sim...\n");
    printf(":)\n.\n.");
    printf("Vamos lá.... \nPrimeiramente voçê porderia se aprensentar?\n");
    scanf(" %s");//só para interção, antes de iniciar a coleta de informaçoes.
    printf("Me fale seu nome\n:");
    scanf("%29s",&nome);
    printf("Agora sua idade\n:");scanf("%d,\n",&idade);
    printf("Agora sua altura\n:"); scanf("%f",&altura); printf("Onde voçê nasceu?\n:"); scanf(" %29s,\n",&natural);
    printf("Qual sua profissão?\n:"); scanf(" %99s,\n",&profissao);
    printf("E o seu saldo?\n:"); scanf("%39s",&saldo); printf("perfeito...\n...\n");
    printf("Nome: %s\nIdade: %d\nAltura: %.2f\nNatural: %s\nProfissão: %s\nSaldo: %s\n",nome,idade,altura,natural,profissao,saldo);
    printf("...\nCorreto...?\n"); //só para interação
    printf("Prontinho...\n :)\n, Muito obrigado!\n,.."); 

    return 0;
}