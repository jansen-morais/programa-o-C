#include <stdio.h> //biblioteca para entrada e saida de dados
#include <string.h> //biblioteca para manipulação de strings
#include <ctype.h> //biblioteca para funçoes de caracters.(tolower)
#include <unistd.h> //biblioteca para manipulaçao do tempo(sleep), simula tempo de espera
#include <stdlib.h> //Inclui a biblioteca stdlib.h, que contém funções gerais, como atoi 
//(para converter uma string para um inteiro).

void limpar_buffer() { //serve para limpara os espaçoes de linha de uma forma mais massiva 
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    // Verificação adicional: se o buffer não estiver vazio após a limpeza,
// descarta o restante dos caracteres
    if (ungetc(c, stdin) != EOF) { // Devolve o último caractere lido para o buffer
    while ((c = getchar()) != '\n' && c != EOF);
    }
}

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
        //while ((c = getchar()) != '\n' && c != EOF);
    getchar();//limpa o caractere de nova linha do buffer
        for(int i=0;resposta[i];i++){
            resposta[i]=tolower(resposta[i]);//vai ler e e converter a resposta mara minuscula
        }
            if(strcmp(resposta,"sim")==0){//aqui lera a resposta "sim" e iniciara o programa, lembrando que as funçoes precisaram estarem dentro destes colchetes.

            printf("Farei algumas perguntas..\n");
            sleep(1.5);
            //getchar(); //remove espassos vazios(desbilitada por hora)
            
        
           
        printf("Me fale seu nome:\n:");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = 0; // Remove a quebra de linha do nome

        printf("Qual a sua idade?\n:");
        scanf("%d",&idade);//le o string em valor decimal(somente numeros)
        getchar(); //consome o espaço em branco deixado pelo scanf
        //char idade_str[10]; // é necessária porque a função fgets lê a entrada como uma string, 
        //mesmo que essa entrada seja um número.
        //fgets(idade_str, sizeof(idade_str), stdin);
        //idade = atoi(idade_str); // Converte a idade para inteiro

        printf("Onde vc nasceu?\n:");
        fgets(natural, sizeof(natural), stdin);
        natural[strcspn(natural, "\n")] = 0;  // Remove a quebra de linha da naturalidade

        printf("Onde você mora?\n:");
        fgets(reside, sizeof(reside), stdin);
        reside[strcspn(reside, "\n")] = 0; // remove a quebra de linha 

        printf("Qual a sua profissão?\n:");
        fgets(profissao, sizeof(profissao), stdin); // le e aramzena 
        profissao[strcspn(profissao, "\n")] = 0; // removea a quebra de linha 
            profissao[strcspn(profissao, "\n")] = 0;// Remove a quebra de linha do final da string, se existir
                
                
                
        
            printf("Obrigado...\n\n\n");
            sleep(2.5);
            printf("Nome: %s\nIdade: %d\nNatural: %s\nResidencia: %s\nProfissão: %s\n",nome, idade, natural, reside, profissao);
            getchar();
            sleep(1.5);
            printf("...\n");
            sleep(1.5);

    char resposta2[4];//para diferenciar a variavel da primeira resposta         
            printf("Correto? (sim/não)\n");
            scanf("%3s",resposta2);//vai captar a resposta
            getchar();
                


            } 
    else{
    printf("Ok...\n");
    sleep(3);//pausa de 3 segundos.
    printf("Obrido! e ate a proxima...\n"); sleep(3.5);//pausa de 3 segundos.
    }

    

        return 0;

}