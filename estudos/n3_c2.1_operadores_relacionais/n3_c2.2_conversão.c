#include <stdio.h>

int main() {
    int x = 5;
    float y = 5.0;
    char c= 'a';//quando se armazena um caractere ele armazena o valo do caractere "A" na tabela ASCII

    printf("x >= y: %d\n", x >= y);//como não foi feita a converção explicita, ou uma implicta
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    printf("x >= c: %d\n", x >= c);
    printf("O valor ASCII de %c é %d: \n", c,c);//o comando %c imprimo somente o caractere

    return 0;
}