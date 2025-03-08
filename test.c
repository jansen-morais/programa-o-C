#include <stdio.h>
#include <string.h> // Adicionado: Inclui a biblioteca string.h para usar strcmp()

int main(){
    
    char nome[30];
    int idade;
    float altura;
    char resposta[4];
    
    printf("Deseja começar?\n");
    scanf("%3s",&resposta);

    if (strcmp(resposta, "sim") == 0) //  Usa strcmp() para comparar strings
    { /*strcmp(resposta, "sim") compara a string armazenada em resposta com a string literal "sim".
        A função strcmp() retorna 0 se as strings forem iguais. 
        Portanto, a condição verifica se o usuário digitou "sim".*/
    printf("tudo bem..\nPoderia se aprensentar por gentileza?\n");
    printf("Qual o seu nome?\n:"); scanf("%29s",&nome);
    printf("Quantos anos voçê tem?\n:"); scanf("%d", &idade);
    printf("Qual a sua altura\n:"); scanf("%f",&altura);
    printf("Então vamos\n...\n");
    printf("Nome: %s\n Idade: %d\n Altura; %.2f\n",nome,idade,altura);
    printf("Obrigado!\n\n...");
    }else{
        printf("Ok... Obrigado!\n\n");
    }
    


    
       
    
    return 0;
}