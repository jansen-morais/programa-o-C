#include <stdio.h>

int main(){

    //sintaxe do scanf
    //scanf("formato1", &variavel1);
    //`char palavra[100];` define uma variável `palavra` como um array de caracteres com tamanho máximo de 100 
    //`scanf("%99s", palavra);` lê uma string (palavra) do usuário. O `%99s` especifica que o scanf deve ler até 99 caracteres, deixando espaço para o caractere nulo (`\0`) que marca o fim da string 
    //printf("Você digitou: %s\n", palavra);` imprime a palavra lida.

    int idade;
    float altura;
    char opcao;

    printf("Entre com a idade e altura:\n");
    scanf("%d %f", &idade, &altura);
    printf("Idade:%d\n",idade);
    printf("Altura:%.2f\n",altura);
    printf("Entre com a opção:\n");
    scanf(" %c",&opcao);
    printf("A opção é; %c\n", opcao);
 
}