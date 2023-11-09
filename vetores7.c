#include <stdio.h>
#include <stdlib.h>

int main (){

int i;
int tamanho = 5;
int numeros [tamanho];
int maiorNumero = 0;
int menorNumero = 9999;


for ( i = 0; i < tamanho; i++)
{
    printf("Digite %d°", i+1);
    scanf("%d",&numeros[i]); 

 menorNumero = numeros[i] < menorNumero  ? numeros[i] : menorNumero;
 maiorNumero = numeros[i] > maiorNumero  ? numeros[i] : maiorNumero;
}
 
for ( i = 0; i < tamanho; i++)
{
   printf("Numero informado: %d \n",numeros [i]);
}

printf("O maior numero: %d\n", maiorNumero);
printf("O menor numero: %d\n", menorNumero);

    return 0;
}