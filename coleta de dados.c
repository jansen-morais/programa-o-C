#include <stdio.h> //biblioteca para entrada e saida de dados
#include <string.h> //biblioteca para manipulação de strings
#include <ctype.h> //biblioteca para funçoes de caracters.(tolower)
#include <unistd.h> //biblioteca para manipulaçao do tempo(sleep), simula tempo de espera

int main(){
    char resposta[4];//variavel que recebe a resposta "sim" ou "não"
    //variaveis que armazenaram os dados.
    char nome[50];
    int idade;
    char natural[50];
    char reside[50];
    char profissao[60];

    printf("Ola tudo bem?\n");
    sleep(1.5);//pausa de 3 segundos.
    printf("...\n");
    sleep(2);//pausa de 3 segundos.
    printf("Deseja entrar com as informações?\n"); sleep(3);//pausa de 3 segundos.
    printf("Vamos começar...\n"); sleep(2);//pausa de 3 segundos.
    printf("Voçê poderia se apresentar por gentileza? (sim/não)\n");
    scanf("%3s",resposta); //vai ler e armazenar a resposta 
    getchar();//limpa o caractere de nova linha do buffer
        for(int i=0;resposta[i];i++){
            resposta[i]=tolower(resposta[i]);//vai ler e diferenciar a linha da rsposta
        }
            if(strcmp(resposta,"sim")==0){//aqui lera a resposta "sim" e iniciara o programa, lembrando que as funçoes precisaram estarem dentro destes colchetes.

            printf("Farei algumas perguntas..\n");
            sleep(1.5);
            printf("Me fale seu nome\n:");
            fgets(nome,sizeof(nome),stdin);

            printf("Qual a sua idade?\n:"); scanf(" %d",&idade);
                int c; // Limpeza do buffer do teclado
                 while ((c = getchar()) != '\n' && c != EOF);// Limpeza mais robsuta do buffer do teclado
            printf("Onde vc nascel?\n:"); scanf(" %49s",&natural);
                 while ((c = getchar()) != '\n' && c != EOF);
            printf("Onde voçê mora?\n:"); scanf(" %49s",&reside);
                while ((c = getchar()) != '\n' && c != EOF);
            printf("Qual a sua profissão?\n:"); 
            fgets(profissao, sizeof(profissao), stdin);
            profissao[strcspn(profissao, "\n")] = 0;// Remove a quebra de linha do final da string, se existir
                while ((c = getchar()) != '\n' && c != EOF);
                
                
            sleep(3);
            printf("Obrigado...\n");
            printf("Nome: %s\nIdade: %d\nNatural: %s\nResidencia: %s\nProfissão: %s\n",nome, idade, natural, reside, profissao);
            getchar();
            sleep(1.5);
            printf("...\n");
            sleep(1.5);
            printf("Correto? (sim/não)\n");


            } 
    else{
    printf("Ok...\n");
    sleep(3);//pausa de 3 segundos.
    printf("Obrido! e ate a proxima...\n"); sleep(3.5);//pausa de 3 segundos.
    }

    

        return 0;

}