#include <stdio.h>
//a primeira condição é se o usuario esta entre 18 e 65 anos
//A segunda é se a renda esta abaixo de 3000
//A terceira verifica se o número de dependentes é maior que 2
/*este tipo de código nos da a versatilidade de por varias decisoes em cadeia*/

int main() {
  int idade, dependente;
  float renda;
  int numero;

  printf("Digite um numero:");
  scanf("%d",&numero);

  if (numero > 0){
    if(numero % 2 == 0){// vai faze equação que dira se o número é par ou impar
        printf("Número par\n");
    }else{
        printf("Número impar\n");
    }
    printf("Número positivo\n");
  }else if (numero == 0){
    printf("Número é 0\n");
    
    }else{
    printf("Número é egativo\n");
    }
//estruturas desencadeadas e aninhadas  


  /*printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: \n");
  scanf("%f", &renda);
  printf("Digite o números de dependentes\n");
  scanf("%d", &dependente);

  if(idade >= 18 && idade < 65){
    if(renda < 3000){
        if(dependente > 2){
            printf("Voçê atende a tdos os criterios");
        } else{
            printf("voçê atende a todos os criterios\n"); 
        }

    }else{
        printf("Você não atende ao criterio renda\n");
    }

  }else{
    printf("Você não atende ao criterio idade\n");
  }




  /*if (idade < 18 || idade > 60) {
    if (renda < 2000.0) {
      printf("Você está qualificado para o desconto especial\n");
    } else {
      printf("Você não está qualificado para o desconto devido à renda\n");
    }
  } else {
    printf("Você não está qualificado para o desconto devido à idade\n");
  }*/

  return 0;
}