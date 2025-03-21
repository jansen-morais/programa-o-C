#include <stdio.h>
int main(){

//um exemplo de loop com múltiplas variáveis!
for (int i = 0, j = 10; i < j; i++, j--) 
{
    printf("i = %d, j = %d\n", i, j);
}

// um exemplo de loops com condições múltiplas!    
for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) 
{
    printf("i = %d, j = %d\n", i, j);
}

//um exemplo de loops com atualizações complexas!
for (int i = 0; 
    i < 100; 
    i += (i % 2 == 0) ? 1 : 2) // oprador ternario
{
    printf("%d ", i);
}
    return 0;
}