#include <stdio.h>

int main() {
  int idade = 20;
  float altura = 1.75;

  if (idade >= 18 && idade <= 30 && altura >= 1.70) {
    printf("Você está na faixa etária e tem a altura adequada\n"); /*como esta tudo em conforme das informaçoes, 
    o "&&" retornara o veraddeiro*/
  } else {
    printf("Você não atende aos critérios\n");
  }

  return 0;
}