#include <stdio.h>
 
int main() {
    float x = 5.5; // sendo que o "double" é bem mais preciso que o "float" e melhor para números miores.
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y; // Divisão de ponto flutuante
 
    printf("Soma: %.2f\n", soma); /*aqui foi untilizado o expecificador"2.f" pq esta usando duas casas decimasi*/
    printf("Diferença: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);
 
    return 0;
}