#include <stdio.h>
 
int main() {
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // 'a' é explicitamente convertido para float
 /*no caso aqui o "float" esta ajindo como casting forçando a converção explicita*/
    printf("Quociente: %.2f\n", quociente);
 
    return 0;
}