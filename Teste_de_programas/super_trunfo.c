#include <stdio.h> // Biblioteca padrão de entrada e saída (printf, scanf)
// As dua bibliotecas a seguir fazen a função de sim e não funcionarem.
#include <stdlib.h> // Biblioteca padrão de funções gerais (rand, srand)
#include <string.h> // Adicionado: Inclui a biblioteca string.h para usar strcmp()

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste jansen morais

int main() { // Função principal do programa
    // Declaração das variáveis para armazenar os dados das cartas
    int carta1, carta2; // Variáveis para armazenar os códigos das cartas (não usadas no código atual)
    char codigo1[10], codigo2[10]; // Códigos das cartas (strings, com tamanho aumentado para evitar buffer overflow)
    char nome1[30], nome2[30]; // Nomes das cidades (strings)
    float populacao1, populacao2; // Populações das cidades (números de ponto flutuante)
    unsigned int area1, area2; // Áreas das cidades (inteiros não assinados)
    unsigned int pib1, pib2; // PIBs das cidades (inteiros não assinados)
    int turismo1, turismo2; // Número de pontos turísticos das cidades (inteiros)
    float densidade1, densidade2;//variavel que armazena a densidade populasional
    float renda1, renda2;// variavel que armazena o resultado da renda percapida
    int resposta1; // Armazena a escolha do "switch"
    char resposta[4]; // Armazena a resposta do sim ou não do "if-else"
    int resultado; // Le o resultado do operador ternario


    // Cabeçalho do jogo
    printf("*** Jogo super trunfo***\n\n"); // imprime a mensagem na tela

    // Coleta de dados da primeira carta
    printf("Por favor, insira o código da carta 1\n:"); // imprime a mensagem na tela
    scanf("%9s", codigo1); // Lê o código da carta (limitando a 9 caracteres para evitar buffer overflow)

    printf("Por favor, insira o nome da cidade\n:"); // imprime a mensagem na tela
    scanf(" %29[^\n]", nome1); // Lê o nome da cidade (lê a linha inteira, incluindo espaços)
    getchar();// limpa o bufer do teclado

    printf("Por favor, insira a quantidade populacional\n:"); // imprime a mensagem na tela
    scanf("%f", &populacao1); // Lê a população da cidade

    printf("Por favor, insira o valor correspondente a area em km°²\n:"); // imprime a mensagem na tela
    scanf("%u", &area1); // Lê a área da cidade (corrigido para %u)

    printf("Por favor, insira a quantidade de pontos turisticos\n:"); // imprime a mensagem na tela
    scanf("%d", &turismo1); // Lê o número de pontos turísticos da cidade

    printf("Por favor, insira o valor do PIB\n:"); // imprime a mensagem na tela
    scanf("%u", &pib1); // Lê o PIB da cidade

    printf("\n"); // Adiciona uma linha em branco para separar as cartas
    printf("Entre com as informações da segunda carta\n"); // imprime a mensagem na tela
    getchar();// limpa o bufer do teclado

    // Coleta de dados da segunda carta
    printf("Por favor, insira o código da carta 2\n:"); // imprime a mensagem na tela
    scanf("%9s", codigo2); // Lê o código da carta (limitando a 9 caracteres)

    printf("Por favor, insira o nome da cidade\n:"); // imprime a mensagem na tela
    scanf(" %29[^\n]", nome2); // Lê o nome da cidade (lê a linha inteira)
    getchar();//limpa o bufer do teclado

    printf("Por favor, insira a quantidade populacional\n:"); // imprime a mensagem na tela
    scanf("%f", &populacao2); // Lê a população da cidade

    printf("Por favor, insira o valor correspondente a area em km°²\n:"); // imprime a mensagem na tela
    scanf("%u", &area2); // Lê a área da cidade (corrigido para %u)

    printf("Por favor, insira a quantidade de pontos turisticos\n:"); // imprime a mensagem na tela
    scanf("%d", &turismo2); // Lê o número de pontos turísticos da cidade

    printf("Por favor, insira o valor do PIB\n:"); // imprime a mensagem na tela
    scanf("%u", &pib2); // Lê o PIB da cidade

    // Exibição dos dados das cartas
    printf("\n*** Dados da Carta 1 ***\n");
    printf("Código: %s\n", codigo1); // Exibe o código da carta
    printf("Nome: %s\n", nome1); // Exibe o nome da cidade
    printf("População: %.3f\n", populacao1); // Exibe a população da cidade
    printf("Área: %.3u km²\n", area1); // Exibe a área da cidade
    printf("Pontos Turísticos: %d\n", turismo1); // Exibe o número de pontos turísticos da cidade
    printf("PIB: %.3u\n", pib1); // Exibe o PIB da cidade
    densidade1 = (float)populacao1/area1; // linha que fara o cauculo da densidade populacional
    printf("Densidade populacional: %.3f, hab/km²\n", densidade1); // Exibe a densidade populacional da cidade
    renda1 = (float)pib1 / populacao1; // linha que fara o cauculo do PIB per capta
    printf("PIB per capita: %.3f, de reais\n", renda1); // exibe o PIB per capita

    printf("\n\n*** Segunda carta***\n\n"); // imprime a mensagem na tela
    

    printf("\n*** Dados da Carta 2 ***\n"); // imprime a mensagem na tela
    printf("Código: %s\n", codigo2); // Exibe o código da carta
    printf("Nome: %s\n", nome2); // Exibe o nome da cidade
    printf("População: %.3f\n", populacao2); // Exibe a população da carta
    printf("Área: %.3u km²\n", area2); // Exibe a área da carta
    printf("Pontos Turísticos: %d\n", turismo2); // Exibe os pontos turisticos da carta
    printf("PIB: %.7u\n", pib2); // Exibe o PIB da carta
    densidade2 = (float)populacao2/area2; // linha que fara o cauculo da densidade populacional
    printf("Densidade populacional: %.3f, hab/km²\n", densidade2); // Exibe a densidade populacional da cidade
    renda2 = (float)pib2 / populacao2; // linha que fara o cauculo do PIB per capta
    printf("PIB per capita: %.3f, de reais\n", renda2); // exibe o PIB per capita
    getchar(); // limpa o bufer do teclado
    
    printf("\n### Comparações ###\n\n"); // Exibe o testo para escolha  
    printf("Deseja fazer a comparação altomatica?\nCaso não, tera que escolher o atributo?\n\n"); // Exibe o testo para escolhas
    printf("Para escolher entre a comparação total e unitara\n"); // Exibe o testo para escolhas
    printf("sim. Para escolher, se todos serão compradas automaticamente\n"); // Exibe o testo para escolhas
    printf("não. Para escolher, quais atributos serão comprados\n"); // Exibe o testo para escolhas 
    printf("Resposta:"); // Faz a coleta da resposta
    scanf("%3s",&resposta); // Le e armazena a resposta na variavem correta
    getchar(); // limpa o bufer do teclado
    
// Função do "if/else" que deixa mais simples o ato de pergunta sim e não 
    if (strcmp(resposta, "sim") == 0) //  Usa strcmp() para comparar strings
    { /*strcmp(resposta, "sim") compara a string armazenada em resposta com a string literal "sim".
        A função strcmp() retorna 0 se as strings forem iguais. 
        Portanto, a condição verifica se o usuário digitou "sim".*/

        int verdadeiras = 0, falsas = 0; // Declara variáveis para contar respostas verdadeiras e falsas (inteiros)
        /*"contadores" As variáveis verdadeiras e falsas foram adicionadas para armazenar a contagem de respostas. 
        Elas são inicializadas com 0.*/

        if (populacao1 > populacao2) { // Verifica se a população1 é maior que população2
            printf("A carta 1 venceu no queisto, população...\n"); // Imprime mensagem se a população1 for maior
            verdadeiras++; // Incrementa o contador de respostas verdadeiras
            printf("Carta 1. População: %.2f\n", populacao1); // Exibe a população da cidade
            printf("Carta 2. População: %.2f\n", populacao2); // Exibe a população da cidade
        } else { // Se a população1 não for maior que a população2
            printf("A carta 2 venceu no queisto, população...\n"); // Imprime mensagem se a temperatura estiver dentro dos parâmetros
            falsas++; // Incrementa o contador de respostas falsas
            printf("Carta 1. População: %.2f\n", populacao1); // Exibe a população da cidade
            printf("Carta 2. População: %.2f\n", populacao2); // Exibe a população da cidade
        }

        if (area1 > area2) { // Verifica se a area1 é maior que area2
            printf("A carta 1 venceu no queisto, Km²...\n"); // Imprime mensagem se a area1 for maior
            printf("Carta 1. Área: %u km²\n", area1); // Exibe a área da cidade
            printf("Carta 2. Área: %u km²\n", area2); // Exibe a área da cidade
            verdadeiras++; // Incrementa o contador de respostas verdadeiras
        } else { // Se a area1 não for maior que area2
            printf("A carta 2 venceu no queisto, km²...\n"); // Imprime mensagem se a area2 for maior que area1
            printf("Carta 1. Área: %u km²\n", area1); // Exibe a área da cidade
            printf("Carta 2. Área: %u km²\n", area2); // Exibe a área da cidade
            falsas++; // Incrementa o contador de respostas falsas
        }

        if (turismo1 > turismo2) { // Verifica se o turismo1 é maior que o turismo2
            printf("A carta 1 venceu no queisto, pontos turiscos...\n"); // Imprime mensagem se o se o turismo1 fo maior
            printf("Carta 1. Pontos Turísticos: %d\n", turismo1); // Exibe o número de pontos turísticos da cidade
            printf("Carta 2. Pontos Turísticos: %d\n", turismo2); // Exibe o número de pontos turísticos da cidade
            verdadeiras++; // Incrementa o contador de respostas verdadeiras
        } else { // Se o turismo1 não for menor que o turismo2
            printf("A carta 2 venceu no queisto, pontos turiscos...\n"); // Imprime mensagem se o turismo2 for maior
            printf("Carta 1. Pontos Turísticos: %d\n", turismo1); // Exibe o número de pontos turísticos da cidade
            printf("Carta 2. Pontos Turísticos: %d\n", turismo2); // Exibe o número de pontos turísticos da cidade
            falsas++; // Incrementa o contador de respostas falsas
        }
        if (pib1 > pib2){ // verifica se o pib1 e maior que o pib2
            printf("A carta 1 venceu no queisto, PIB...\n"); // imprime a mensagem se o pib1 for maior
            printf("Carta 1. PIB: %u\n", pib1); // Exibe o PIB da cidade
            printf("Carta 2. PIB: %u\n", pib2); // Exibe o PIB da cidade
            verdadeiras++;// incrementa o contador de resposta
        }else{ //se o pib2 for mao que o pib1
            printf("A carta 2 venceu no queisto, PIB...\n"); // imprime a mensagen se o pib2 for maior
            printf("Carta 1. PIB: %u\n", pib1); // Exibe o PIB da cidade
            printf("Carta 2. PIB: %u\n", pib2); // Exibe o PIB da cidade
            falsas++; // incrementa a contador de respostas falsas
        }
        if (densidade1 < densidade2){ // verifica se o densidade1 e maior que o densidade2
            printf("A carta 1 venceu no queisto, densidade populacional...\n"); // imprime a mensagem se o pib1 for maior
            printf("Carta 1. Densidade populacional: %.2f, had/km²\n", densidade1); // Exibe a densidade populacional da cidade
            printf("Carta 2. Densidade populacional: %.2f, had/km²\n", densidade2); // Exibe a densidade populacional da cidade
            verdadeiras++;// incrementa o contador de resposta
        }else{ //se o densidade2 for mao que o densidade1
            printf("A carta 2 venceu no queisto, densidade popuplacional...\n"); // imprime a mensagen se o densidade2 for maior
            printf("Carta 1. Densidade populacional: %.2f, had/km²\n", densidade1); // Exibe a densidade populacional da cidade
            printf("Carta 2. Densidade populacional: %.2f, had/km²\n", densidade2); // Exibe a densidade populacional da cidade
            falsas++; // incrementa a contador de respostas falsas
        }
        if (renda1 > renda2){ // verifica se o renda1 e maior que o renda2
            printf("A carta 1 venceu no queisto, PIB per-capta...\n"); // imprime a mensagem se o renda1 for maior
            printf("Carta 1. PIB per capita: %.3f, de rais\n", renda1); // exibe o PIB per capita
            printf("Carta 2. PIB per capita: %.3f, de rais\n", renda2); // exibe o PIB per capita
            verdadeiras++;// incrementa o contador de resposta
        }else{ //se o renda2 for mao que o renda1
            printf("A carta 2 venceu no queisto, PIB per-capita...\n"); // imprime a mensagen se o renda2 for maior
            printf("Carta 1. PIB per capita: %.3f, de rais\n", renda1); // exibe o PIB per capita
            printf("Carta 2. PIB per capita: %.3f, de rais\n", renda2); // exibe o PIB per capita
            falsas++; // incrementa a contador de respostas falsas
        }

        // Exibe o ranking
        printf("\n--- Ranking ---\n"); // Imprime o cabeçalho do ranking
        printf("Vitorias da carta 1: %d\n", verdadeiras); // Imprime o número de respostas verdadeiras
        printf("Vitarioas da carta 2 : %d\n", falsas); // Imprime o número de respostas falsas

        printf("\n--- Ranking ---\n"); // Imprime o cabeçalho do ranking
        if (verdadeiras > falsas){ // verifica se as verdadeiras são maiores que as falsas
            printf("A carta 1 venceu...\n"); // imprime a mensagem se as verdadeiras forem maiores
            printf("\nParabens...\n\n"); // imprime a mensagem na tela
        }else { //se as falsas forem maiores que as verdadeiras
            printf("A carta 2 vence...\n"); // imprime a mensagem se as falsas forem maiores
            printf("\nParabens...\n\n"); // imprime a mensagem na tela
        }
    
    }else{ // execultado caso o resultado for falso

        printf("\n"); // Para pular uma linha e deixar o codigo mais legivel ao execultar
        printf("1. Para População \n"); // imprime a mensagem na tela
        printf("2. Para areá em km²\n"); // imprime a mensagem na tela
        printf("3. Para puntos turisticos\n"); // imprime a mensagem na tela
        printf("4. Para PIB\n"); // imprime a mensagem na tela
        printf("5. Para Densidade populacional\n"); // imprime a mensagem na tela
        printf("6. PIB Per-Carpta\n"); // imprime a mensagem na tela
        printf("Escolha sua opção:\n"); // imprime a mensagem na tela
        scanf("%d",&resposta1); // Faz a leitura, coleta e armazenamento da resposta na variavel

        switch (resposta1) // Função responsavem por iniciar a opção escolhida no menu anterior
        {
        case 1: // valor correspondente a Opção
            resultado = populacao1>=populacao2? 1:0; // Operador ternario responsavel por fazer a comparação das variaveis
            if (resultado==1) // Verifica se o resultado é verdadeiro 
            {
                printf("Jogador 1 venceu!\n"); // Imprime da tela a resolução da equação
                printf("Carta 1. População: %.2f\n", populacao1); // Exibe a população da cidade
                printf("Carta 2. População: %.2f\n", populacao2); // Exibe a população da cidade
                printf("Parabens!\n"); // imprime a mensagem de empate
            }else if (populacao1==populacao2) // Verifica se o resultado é falso
            {
                printf("O jogo empatou!\n"); // imprime a mensagem de empate
                printf("Carta 1. População: %.2f\n", populacao1); // Exibe a população da cidade
                printf("Carta 2. População: %.2f\n", populacao2); // Exibe a população da cidade
                printf("Parabens!\n"); // imprime a mensagem de empate
            }else // execultado caso o resultado for falso
            {
                printf("Jogador 2 venceu!\n"); // imprime a mensagem na tela
                printf("Carta 1. População: %.2f\n", populacao1); // Exibe a população da cidade
                printf("Carta 2. População: %.2f\n", populacao2); // Exibe a população da cidade
                printf("Parabens!\n"); // imprime a mensagem de empate
            }
            break; // finaliza o programa
        case 2:
        resultado = area1>=area2? 1:0; // Operador ternario responsavel por fazer a comparação das variaveis
        if (resultado==1) // Verifica se o resultado é verdadeiro
        {
            printf("Jogador 1 venceu!\n"); // imprime a mensagem na tela
            printf("Carta 1. Área: %u km²\n", area1); // Exibe a área da cidade
            printf("Carta 2. Área: %u km²\n", area2); // Exibe a área da cidade
            printf("Parabens!\n"); // imprime a mensagem de empate
        }else if (area1==area2) // Verifica se o resultado é falso
        {
            printf("O jogo empatou!\n"); // imprime a mensagem na tela
            printf("Carta 1. Área: %u km²\n", area1); // Exibe a área da cidade
            printf("Carta 2. Área: %u km²\n", area2); // Exibe a área da cidade
            printf("Parabens!\n"); // imprime a mensagem de empate
        }else  // execultado caso o resultado for falso
        {
            printf("Jogador 2 venceu!\n"); // imprime a mensagem na tela
            printf("Carta 1. Área: %u km²\n", area1); // Exibe a área da cidade
            printf("Carta 2. Área: %u km²\n", area2); // Exibe a área da cidade
            printf("Parabens!\n"); // imprime a mensagem de empate
        }
            break; // finaliza o programa
        case 3:
        resultado = turismo1>=turismo2? 1:0; // Operador ternario responsavel por fazer a comparação das variaveis
        if (resultado==1) // Verifica se o resultado é verdadeiro
        {
            printf("Jogador 1 venceu!\n"); // imprime a mensagem na tela
            printf("Carta 1. Pontos Turísticos: %d\n", turismo1); // Exibe o número de pontos turísticos da cidade
            printf("Carta 2. Pontos Turísticos: %d\n", turismo2); // Exibe o número de pontos turísticos da cidade
            printf("Parabens!\n"); // imprime a mensagem de empate
        }else if (turismo1==turismo2) // Verifica se o resultado é falso
        {
            printf("O jogo empatou!\n"); // imprime a mensagem na tela
            printf("Carta 1. Pontos Turísticos: %d\n", turismo1); // Exibe o número de pontos turísticos da cidade
            printf("Carta 2. Pontos Turísticos: %d\n", turismo2); // Exibe o número de pontos turísticos da cidade
            printf("Parabens!\n"); // imprime a mensagem de empate
        }else  // execultado caso o resultado for falso
        {
            printf("Jogador 2 venceu!\n"); // imprime a mensagem na tela
            printf("Carta 1. Pontos Turísticos: %d\n", turismo1); // Exibe o número de pontos turísticos da cidade
            printf("Carta 2. Pontos Turísticos: %d\n", turismo2); // Exibe o número de pontos turísticos da cidade
            printf("Parabens!\n"); // imprime a mensagem de empate
        }
            break; // finaliza o programa
        case 4:
        resultado = pib1>=pib2? 1:0; // Operador ternario responsavel por fazer a comparação das variaveis
        if (resultado==1) // Verifica se o resultado é verdadeiro
        {
            printf("Jogador 1 venceu!\n"); // imprime a mensagem na tela
            printf("Carta 1. PIB: %u\n", pib1); // Exibe o PIB da cidade
            printf("Carta 2. PIB: %u\n", pib2); // Exibe o PIB da cidade
            printf("Parabens!\n"); // imprime a mensagem de empate
        }else if (pib1==pib2) // Verifica se o resultado é falso
        {
            printf("O jogo empatou!\n"); // imprime a mensagem na tela
            printf("Carta 1. PIB: %u\n", pib1); // Exibe o PIB da cidade
            printf("Carta 2. PIB: %u\n", pib2); // Exibe o PIB da cidade
            printf("Parabens!\n"); // imprime a mensagem de empate
        }else // execultado caso o resultado for falso
        {
            printf("Jogador 2 venceu!\n"); // imprime a mensagem na tela
            printf("Carta 1. PIB: %u\n", pib1); // Exibe o PIB da cidade
            printf("Carta 2. PIB: %u\n", pib2); // Exibe o PIB da cidade
            printf("Parabens!\n"); // imprime a mensagem de empate
        }
            break; // finaliza o programa
        case 5:
        resultado = densidade1<=densidade2? 1:0; // Operador ternario responsavel por fazer a comparação das variaveis
        if (resultado==1) // Verifica se o resultado é verdadeiro
        {
            printf("Jogador 1 venceu!\n"); // imprime a mensagem na tela
            printf("Carta 1. Densidade populacional: %.2f, had/km²\n", densidade1); // Exibe a densidade populacional da cidade
            printf("Carta 2. Densidade populacional: %.2f, had/km²\n", densidade2); // Exibe a densidade populacional da cidade
            printf("Parabens!\n"); // imprime a mensagem de empate
        }else if (densidade1==densidade2) // Verifica se o resultado é falso
        {
            printf("O jogo empatou!\n"); // imprime a mensagem na tela
            printf("Carta 1. Densidade populacional: %.2f, had/km²\n", densidade1); // Exibe a densidade populacional da cidade
            printf("Carta 2. Densidade populacional: %.2f, had/km²\n", densidade2); // Exibe a densidade populacional da cidade
            printf("Parabens!\n"); // imprime a mensagem de empate
        }else // execultado caso o resultado for falso
        {
            printf("Jogador 2 venceu!\n"); // imprime a mensagem na tela
            printf("Carta 1. Densidade populacional: %.2f, had/km²\n", densidade1); // Exibe a densidade populacional da cidade
            printf("Carta 2. Densidade populacional: %.2f, had/km²\n", densidade2); // Exibe a densidade populacional da cidade
            printf("Parabens!\n"); // imprime a mensagem de empate
        }
            break; // finaliza o programa
        case 6:
        resultado = renda1>=renda2? 1:0; // Operador ternario responsavel por fazer a comparação das variaveis
        if (resultado==1) // Verifica se o resultado é verdadeiro
        {
            printf("Jogador 1 venceu!\n"); // imprime a mensagem na tela
            printf("Carta 1. PIB per capita: %.3f, de rais\n", renda1); // exibe o PIB per capita
            printf("Carta 2. PIB per capita: %.3f, de rais\n", renda2); // exibe o PIB per capita
            printf("Parabens!\n"); // imprime a mensagem de empate
        }else if (renda1==renda2) // Verifica se o resultado é falso
        {
            printf("O jogo empatou!\n"); // imprime a mensagem na tela
            printf("Carta 1. PIB per capita: %.3f, de rais\n", renda1); // exibe o PIB per capita
            printf("Carta 2. PIB per capita: %.3f, de rais\n", renda2); // exibe o PIB per capita
            printf("Parabens!\n"); // imprime a mensagem de empate
        }else // execultado caso o resultado for falso
        {
            printf("Jogador 2 venceu!\n"); // imprime a mensagem na tela
            printf("carta 1. PIB per capita: %.3f, de rais\n", renda1); // exibe o PIB per capita
            printf("carta 2. PIB per capita: %.3f, de rais\n", renda2); // exibe o PIB per capita
            printf("Parabens!\n"); // imprime a mensagem de empate
        }
            break; // finaliza o programa
        default: // função que inicializa caso seja inserido algum valor diferente do pre-definido
        printf("Opção inalida\n"); // imprime a mensagem na tela caso seja inserida diferente do esperado
            break; // finaliza o programa
        }
    }
    

    return 0; // Indica que o programa terminou com sucesso
}
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.