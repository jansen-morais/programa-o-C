#include <stdio.h>

int main() {
    int nota;
  
    /*int idade;

  printf("Digite a sua idade: \n");
  scanf("%d", &idade);

  if (idade < 12) {
    printf("Você é uma criança\n");

  } else if (idade >= 12 && idade < 18) {
    //aqui uasarei o comando "&&" para comparar novamende dentro da mesma função
    printf("Você é um adolescente\n");

  } else if (idade >= 18 && idade < 60) {
    printf("Você é um adulto\n");

  } else {
    printf("Você é um idoso\n");

  }*/

  //segundo programa
  printf("Digite a sua nota: \n");
  scanf("%d", &nota);

  if (nota >= 90) {
    printf("Sua nota é A\n");

  } else if (nota >= 80) {
    printf("Sua nota é B\n");

  } else if (nota >= 70) {
    printf("Sua nota é C\n");

  } else if (nota >= 60) {
    printf("Sua nota é D\n");

  } else if (nota >= 50) {
    printf("Sua nota é E\n");

  }else{//caso a nota seja menor que 50 executara esté comando
    printf("sua nota é F"); 
  }

  return 0;
}