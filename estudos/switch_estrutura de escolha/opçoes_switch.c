#include <stdio.h>

int main() {
    int dia;
  int opcao;
  char opcao2;
  float saldo = 1000.00;
  int dia ;

  printf("Escolha uma opção:\n");
  printf("1. Verificar saldo\n");
  printf("2. Fazer depósito\n");
  printf("3. Fazer saque\n");
  scanf("%d", &opcao);//faz a captação da informação digitade e amarzena na variavel

  switch (opcao) {//faz a leitura da variavel e mada para a opção correta 
    case 'saldo'://faz a leitura da opção e imprime caso seja a sua 
      printf("Seu saldo é .%.2f\n",saldo);
      break;//serve para parar o programa "finalizar o programa"
    case 2:// caso queira usar letras precisa usar estes sinais '' Exp:'a'
      printf("digite o bango que deseja depositar \n");
      break;
    case 3:
      printf("digite o valr que deseja sacar\n");
      break;
    default://cas nenhuma das opçoes sejam validas 
      printf("Opção inválida\n");
  }
 
  //outros exemplos

  /* 
    switch (dia) { //aqui deixa mais simplez de códificar com opções 
    case 1:
      printf("Domingo\n");
      break;
    case 2:
      printf("Segunda-feira\n");
      break;
    case 3:
      printf("Terça-feira\n");
      break;
    case 4:
      printf("Quarta-feira\n");
      break;
    case 5:
      printf("Quinta-feira\n");
      break;
    case 6:
      printf("Sexta-feira\n");
      break;
    case 7:
      printf("Sábado\n");
      break;
    default:
      printf("Dia inválido\n");
  }

  
  
  if (dia == 1) {
    printf("Domingo\n");
  } else if (dia == 2) {
    printf("Segunda-feira\n");
  } else if (dia == 3) {
    printf("Terça-feira\n");
  } else if (dia == 4) {
    printf("Quarta-feira\n");
  } else if (dia == 5) {
    printf("Quinta-feira\n");
  } else if (dia == 6) {
    printf("Sexta-feira\n");
  } else if (dia == 7) {
    printf("Sábado\n");
  } else {
    printf("Dia inválido\n");
  }*/

  return 0;
}