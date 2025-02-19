#include <stdio.h>
 
int main() {
    double preciseNumber = 3.141592653589793; // consegue trabãlhar com mais casa decimais e mais precisas 
    long double veryPreciseNumber = 3.14159265358979323846; //número muito preciso com maior precizão
 
    printf("Número preciso (double): %.15f\n", preciseNumber);//aqui o vinculo é colocado como %.15f, que vai representar a quantidade de casa decimais que ele vai apresentar
    printf("Número muito preciso (long double): %.21Lf\n", veryPreciseNumber);
 
    return 0;
}