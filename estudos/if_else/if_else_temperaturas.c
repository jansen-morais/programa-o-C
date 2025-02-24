#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal do programa
    float temperatura, umidade; // Declara variáveis para armazenar a temperatura e a umidade (números de ponto flutuante)
    unsigned int estoque, estoqueminimo = 1000; // Declara variáveis para estoque atual e estoque mínimo (inteiros não assinados)
    int verdadeiras = 0, falsas = 0; // Declara variáveis para contar respostas verdadeiras e falsas (inteiros)
    /*"contadores" As variáveis verdadeiras e falsas foram adicionadas para armazenar a contagem de respostas. 
    Elas são inicializadas com 0.*/

    printf("Entre com a temperatura: "); // Imprime uma mensagem pedindo a temperatura
    scanf("%f", &temperatura); // Lê a temperatura digitada pelo usuário

    printf("Entre com a umidade: "); // Imprime uma mensagem pedindo a umidade
    scanf("%f", &umidade); // Lê a umidade digitada pelo usuário

    printf("Entre com o estoque: "); // Imprime uma mensagem pedindo o estoque
    scanf("%u", &estoque); // Lê o estoque digitado pelo usuário

    if (temperatura > 30) { // Verifica se a temperatura é maior que 30
        printf("Temperatura esta alta\n"); // Imprime mensagem se a temperatura for alta
        verdadeiras++; // Incrementa o contador de respostas verdadeiras
    } else { // Se a temperatura não for maior que 30
        printf("Temperatura esta dentro dos parametros\n"); // Imprime mensagem se a temperatura estiver dentro dos parâmetros
        falsas++; // Incrementa o contador de respostas falsas
    }

    if (umidade > 50) { // Verifica se a umidade é maior que 50
        printf("Umidade está elevada\n"); // Imprime mensagem se a umidade for elevada
        verdadeiras++; // Incrementa o contador de respostas verdadeiras
    } else { // Se a umidade não for maior que 50
        printf("Umidade está dentro dos parametros\n"); // Imprime mensagem se a umidade estiver dentro dos parâmetros
        falsas++; // Incrementa o contador de respostas falsas
    }

    if (estoque < estoqueminimo) { // Verifica se o estoque é menor que o estoque mínimo
        printf("Estoque está em estado critico\n"); // Imprime mensagem se o estoque estiver crítico
        verdadeiras++; // Incrementa o contador de respostas verdadeiras
    } else { // Se o estoque não for menor que o estoque mínimo
        printf("Estoque está normal\n"); // Imprime mensagem se o estoque estiver normal
        falsas++; // Incrementa o contador de respostas falsas
    }

    // Exibe o ranking
    printf("\n--- Ranking ---\n"); // Imprime o cabeçalho do ranking
    printf("Número de problemas detectados: %d\n", verdadeiras); // Imprime o número de respostas verdadeiras
    printf("Número de parametro OK : %d\n", falsas); // Imprime o número de respostas falsas

    return 0; // Indica que o programa terminou com sucesso
}