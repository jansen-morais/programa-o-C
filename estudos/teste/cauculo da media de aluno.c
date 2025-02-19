#include <stdio.h>
#include <string.h> //biblioteca para manipulação de strings
#include <ctype.h> //biblioteca para funçoes de caracters.(tolower)
#include <unistd.h> //biblioteca para manipulaçao do tempo(sleep), simula tempo de espera
#include <stdlib.h> //Inclui a biblioteca stdlib.h, que contém funções gerais, como atoi 
//(para converter uma string para um inteiro).
#include <stdarg.h>//paa lidar com a manipulação de argumentos variaveis
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    if (ungetc(c, stdin) != EOF) {
        while ((c = getchar()) != '\n' && c != EOF);
    }
}
int print_digitado(const char *format, ...) {
    va_list args;
    va_start(args, format);
    char buffer[2048];
    int len = snprintf(buffer, sizeof(buffer), format, args);
    //printf("buffer formatado: %s\n", buffer);//imprime o buffer formatado

    if (len < 0) { // Correção: operador <
        fprintf(stderr, "Erro ao formatar a string.\n");
        va_end(args);
        return -1;
    }

    for (int i = 0; i < len; i++){ // Correção: operador <
        printf("%c", buffer[i]);
        fflush(stdout);//adcionado para sincronizar o buffer de saida
        usleep(70000);
    }

    va_end(args);
    return len;
}


int main(){
    int nota1, nota2,nota3;/*melhor aqui seia usor o comando"float" para facilitar toda a entrada
    e diminiuir as linhas de código deixando assim mais limpo */
    float media;

    print_digitado(" . . .\n");/*uso este "print_digitado" para deixar mais organico*/
    print_digitado("...iniciando...\n");
    print_digitado("***Programa de cauculo de média***\n\n");

    print_digitado("Digite a primeira nota:");
    //scanf("%f", &nota1);/*lembrar de mudar o percentual para"%f" para leo algarismo dcimal*/
    scanf("%d", &nota1);

    print_digitado("Digite a segunda nota:");
    scanf("%d", &nota2);

    print_digitado("Digite a terceira nota:");
    scanf("%d", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3;/*aqui coloco a expreção "(float)" abtes do comendo para forçar a converção,
    de um número nterio para flutuante*/
    
    //printf("A media é: %.2f\n",media);/*a expreção "%.2f"vai impromir somente duas casas decimais*/
    printf("A media é: %.1f\n",media);/*a expreção "%.1f"vai impromir somente uma casa decimal*/

    print_digitado("Obrigado...\n;)\n");

    

    return 0;


}