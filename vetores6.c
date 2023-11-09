#include <stdio.h>
#include <stdlib.h>

int main (){

int i;
int tamanho = 4;
float notas [tamanho];
float media;
int soma = 0;
printf("Insira as nota do usuario \n");

for ( i = 0; i < tamanho; i++)
{
    printf("Nota %d°: ", i+1);
    scanf("%f", &notas[i]);

soma += notas[i];

}

media = soma / tamanho;



printf("Mostrando as notas \n");
for ( i = 0; i < tamanho; i++)
{
    printf("Nota %d: %.1f \n", i+1,notas [i]);
}
printf("A media e: %.2f", media);
 
 if (media >= 7 )
{
    printf("\nAprovado! \n");
}
else if (media >= 5 && 6.9)
{
    printf("\nRecuperacao! \n");
}
else
{
    printf("\nAprovado! \n");
}

 
 
    return 0;
}