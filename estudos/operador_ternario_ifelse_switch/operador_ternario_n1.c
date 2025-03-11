#include <stdio.h> // Biblioteca padrão de entrada e saída (printf, scanf)
#include <stdlib.h> // Biblioteca padrão de funções gerais (rand, srand)
#include <time.h> // Biblioteca para funções de tempo (time)

int main(){
    int idade = 16; // Declara e inicializa a variável idade com o valor 16
    int resultado; // Declara a variável resultado (não utilizada no código fornecido)
    int temperatura = 31; // Declara e inicializa a variável temperatura com o valor 31
    char* estado; // Declara um ponteiro para char, usado para armazenar uma string (não utilizado no código fornecido)
    int num1 = 40, nun2 = 50; // Declara e inicializa as variáveis num1 e nun2 com os valores 40 e 50, respectivamente
    int maior; // Declara a variável maior, que armazenará o maior valor entre num1 e nun2

    //idade >=18? printf("Voçê é maior de idade\n"): printf("Voçê é menor de idade\n");
    //forma mais simples que "if, else"

    idade >=18? 1:0 ; // Aqui usarei o núm,"1" e "0" para distinguir verdadeiro e falso
    //onde '1' sempre é a reposta verdadeiro 'e' 0 a falsa assi posso usar a expreção "if,else"
    if(resultado ==1){
        printf("Voçê é maior de idade\n");
    }else{
        printf("Voçê é menor de idade\n");
    }

  /*estado = (temperatura > 30) ? "Calor" : "Frio";

   printf("Estado: %s\n", estado);*/

   /* num1 > nun2 ? (maior = num1) : (maior = nun2); // Operador ternário: se num1 > nun2, maior recebe num1, senão recebe nun2
    // Esta linha compara num1 e nun2 e atribui o maior valor à variável maior.
    // O operador ternário é uma forma concisa de escrever um if-else.
    printf("O número maior é: %d\n", maior); // Imprime o valor da variável maior na tela
    // printf() é usado para exibir texto e variáveis na saída padrão (tela).
    // %d é um especificador de formato para números inteiros.
    // \n insere uma nova linha após a impressão.*\

    return 0; // Indica que o programa terminou com sucesso
    // A função main() retorna 0 para indicar que o programa foi executado sem erros.

/*Operador Ternário (? :):
O operador ternário é uma forma concisa de escrever um if-else em uma única linha.
A sintaxe é: condição ? expressão_se_verdadeiro : expressão_se_falso.
No código, ele verifica se num1 > nun2. Se for verdadeiro, maior recebe num1; 
caso contrário, recebe nun2.*/

        return 0;
}