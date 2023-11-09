#include <stdio.h>
#include <stdlib.h>

int main (){

int vetor[5];
int i;

printf("Digite os elementos do vertor: \n");

for ( i = 0; i < 5; i++)
{
    printf("Elemento %d: ", i+1);
    scanf("%d", &vetor[i]);
}

for ( i = 0; i < 5; i++)
{
    printf("Elemento %d: %d \n", i+1,vetor [i]);
}


    return 0;
}