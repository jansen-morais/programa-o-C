#include <stdio.h> // Biblioteca para entrada e saída de dados
#include <string.h> // Biblioteca para manipulação de strings
#include <ctype.h> // Biblioteca para funções de caracteres (tolower)


int main() {
    char resposta[4]; // Variável para armazenar a resposta do usuário (sim/não)
    int iniciar = 0; // Variável para controlar o início do programa (0 = não, 1 = sim)

    printf("Deseja iniciar o programa? (sim/não): ");
    scanf("%3s", resposta); // Lê a resposta do usuário (máximo 3 caracteres)

    // Converter a resposta para minúsculas para evitar erros de comparação
    for (int i = 0; resposta[i]; i++) {
        resposta[i] = tolower(resposta[i]);
    }

    if (strcmp(resposta, "sim") == 0) {
        iniciar = 1;
    }

    if (iniciar == 1) {
        printf("Iniciando o programa...\n");
        // ... (código para executar as funcionalidades do programa)
    } else {
        printf("Obrigado por participar!\n");
    }

    return 0;
}