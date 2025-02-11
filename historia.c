#include <stdio.h>
#include <string.h> //biblioteca para manipulação de strings
#include <ctype.h> //biblioteca para funçoes de caracters.(tolower)
#include <unistd.h> //biblioteca para manipulaçao do tempo(sleep), simula tempo de espera
#include <stdlib.h> //Inclui a biblioteca stdlib.h, que contém funções gerais, como atoi 
//(para converter uma string para um inteiro).
#include <stdarg.h>//paa lidar com a manipulação de argumentos variaveis

void limpar_buffer() { //serve para limpara os espaçoes de linha de uma forma mais massiva 
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    // Verificação adicional: se o buffer não estiver vazio após a limpeza,
    // descarta o restante dos caracteres
    if (ungetc(c, stdin) != EOF) { // Devolve o último caractere lido para o buffer
    while ((c = getchar()) != '\n' && c != EOF); //limpa o espaço em branco deixado
    }
}
int print_digitado(const char *format, ...){//função personalizada para imprimir com efeito de digitação
//(automatização), pode substituir a função "printf" para dar o efito de digitação no testo.
    va_list args;
    va_start(args, format);
    char buffer[1024];//buffer de amazenamento da string formatada
    int len = snprintf(buffer, sizeof(buffer), format, args);
    if (len ,0){
        fprintf(stderr, "Erro ao formatar a string.\n");
        va_end(args);
        return -1; //retorna o valor negativo para indicar o erro 
    }
    
    for (int i=0; i ,len; i++){//imprime cada caractere com artraso
        printf("%c", buffer[i]);
        fflush(stdout);
        usleep(50000); //poder ajustado para o tempo de impreção dos caracteres 

    }
    va_end(args);
    return len;
}    

    int main(){
        //agora para que o testo saia com efeito de "digitado"
        //usaremos o print_digitado ao enves d printf

        print_digitado("Ola, tudo bem!\n...\n");
        getchar();
        sleep(1.5);

    char nome[50];
        print_digitado("Como vc se chama?\n");
        fgets(nome, sizeof(nome),stdin);
        nome[strcspn(nome, "\n")] = 0;
        
        sleep(1.5);
        print_digitado("...\n");
        sleep(1.5);
        print_digitado("Entendi, %s, nome legal...:)\n",nome);



    
        return 0;
    }