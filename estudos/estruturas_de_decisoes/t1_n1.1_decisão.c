#include <stdio.h>

int main() {
  int numero1 = 4;
  int numero2 = 5;

  if (numero1 > numero2) {/*o comando so vai executar o que estiver dentro co cuchete se for verdadeiro
    e tambem pode ser usado para >= ou != etc, 
    caso seja falço executra o que esta fora do colchete */
    printf("numero1 é maior que numero2\n");
  }
  printf("numero1 é menor que numero2\n");/*aqi reproduz se a entrada for diferento do comando*/

  /*int numero=4, resultado;
  
  resultado=numero %2;
  printf("a variavel resultado é: %d ",resultado);
  
  if(resultado==0){
    printf("O número é par\n");
    //esse exemplo mostra no caso da verificação se um número é par
  
  }*/

  return 0;
}