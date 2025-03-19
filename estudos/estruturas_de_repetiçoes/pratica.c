#include <stdio.h>
int main(){
    int i = 0;
    int numero;
    

    /*while (i <= 10)
    {
        if(i%2 == 0){//caso eu queria que impra os números impares muda o sinal para "!"
            printf("O número: %d é par!\n", i);
        }
        
        
        i++;
    }*/
    /*do
    {
        printf("Digite um número par para sair do código:\n");
        scanf("%d", &numero);
        if(numero % 2 == 0){
            printf("%d, é par\n",numero);
        }else{
            printf("%d, é impar\n",numero);
        }
    } while (numero % 2 != 0);
    printf("Saindo..!\n");
    */

    printf("Digite um numero para caucularmos a nossa tabuada...\n");
    scanf("%d", &numero);
// Aqui clocarei a interação antes do "loope" para a interação acontece so uma vez 
// antes do programa para iniciarlo. 
    for ( i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, numero, i * numero);
    }
    



        return 0;
}