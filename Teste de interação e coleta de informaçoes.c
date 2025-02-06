#include <stdio.h>

int main(){

    char opcao ='s';
    char nome[50];
    char natural[30];
    int idade;
    char profissao[99];
    float altura;
    char saldo[40];
    

    printf("Olá!\n Tudo bem?\n ... \n Eespero que sim...\n");
    printf(":)\n.\n.");
    printf("Vamos lá.... \nPrimeiramente voçê porderia se aprensentar?\n");
    // testando ainda, |scanf(" %c");//só para interção, antes de iniciar a coleta de informaçoes.
    printf("Me fale seu nome\n:");
    fgets(nome,sizeof(nome),stdin);
    printf("Agora sua idade\n:");scanf("%d,\n",&idade);
    printf("Agora sua altura\n:"); scanf("%f",&altura); printf("Onde voçê nasceu?\n:"); scanf(" %29s,\n",&natural);
    printf("Qual sua profissão?\n:"); scanf(" %99s,\n",&profissao);
    printf("E o seu saldo?\n:"); scanf("%39s",&saldo); printf("perfeito...\n...\n");
    //aqui vai imprimir na tela as informações coletadas.
    printf("Nome: %s\nIdade: %d\nAltura: %.2f\nNatural: %s\nProfissão: %s\nSaldo: %s\n",nome,idade,altura,natural,profissao,saldo);
    //aqui esta avendo um erro bem estranho onde a resposta está pulando duas linhas, porem quando apago a função, \n, funciona normal.. preciso observar isso futuramente.
    printf("...\nCorreto...?\n"); //só para interação
    printf("Prontinho...\n :)\n, Muito obrigado!\n,.."); 

    return 0;
}