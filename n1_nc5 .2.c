#include <stdio.h>

int main(){
    
    char inicial = 'J';
    char nome[20] = "Jansen";
    int idade = 52;
    float altura = 1.75;
    double saldoemconta = 2800.65;
    char nacionalidade[20] = "Ceára";
    
    printf ("Opção: %c \n", inicial);
    printf (" Nome: %s, Idade; %d, anos \n", nome, idade);
    printf ("Altura; %.2f, metros. \n", altura);
    printf ("Natural: %s \n", nacionalidade);
    printf (" Saldo em conta: %.2f, Reais \n", saldoemconta);
    printf ("Fim...");
    
    return 0;






       /*
    printf("%formato1 formato2", variavel, variavel2)
    
    %d: imprime um inteiro do formato decimal.
    %i: equivalente a %d.
    %f: Imprime um número do ponto flutuante no formato padrão.
    %.2f: Imprime um número do ponto flutuante no formato polido.
    %e: Imprime um número do ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %S: Iimprime uma cadeia (string) de caracteres.
        
    */
}