#include <stdio.h>
#include <stdlib.h>

int main (){

int i;
int tamanho = 3;
float notas [tamanho];
printf("Insira as nota do usuario \n");

for ( i = 0; i < tamanho; i++)
{
    printf("Nota %d°: ", i+1);
    scanf("%f", &notas[i]);
}

printf("Mostrando as notas \n");
for ( i = 0; i < tamanho; i++)
{
    printf("Nota %d: %.1f \n", i+1,notas [i]);
}


    return 0;
}