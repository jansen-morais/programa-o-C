#include <stdio.h>

int main() {
  int a = 5;
  int b = 10;
  int c = -5;

  if (a > 0 && b > 0) { // só será impresso o se os dois forem verdadeiros caso contrario sera impreço o falso
    printf("Ambos os números são positivos\n");
  }else{
    printf("pelomenos um dso numeros é negativo\n");
  }

  if (a > 0 || b > 0) { //se um dos valores forem negativos será impresso o valor positivo
    printf("Pelo menos um dos números é positivo\n");
  }else{
    printf("os dois números são negativos\n");
  }

  if (!a) // vai iverter o valor da variavel, assim se tornara falso o que antes era verdadeiro
  //(!(c > 0))
   {
   /*// aqui ele ira inverter o valor logicco da expreção, 
    caso seja verdadeiro retornara falso*/
    printf("A variavel c é zero\n");
  }else{
    printf("A variavel c é diferente de zero\n");
  }

  return 0;
}