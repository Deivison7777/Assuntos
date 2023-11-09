#include <stdio.h>
#include <Stdlib.h>

int main(){

int i;
int tamanho = 6;
int numeros [tamanho];
int numerosPares = 0;
int numeroImpares = 0;

for ( i = 0; i < tamanho; i++)
{
    printf("Digite o %d° numero: ", i+1);
    scanf("%d", &numeros[i]);

numeros [i] % 2 == 0 ? numerosPares++ : numeroImpares++;
}

 for ( i = 0; i < tamanho; i++)
 {
    printf("Numeros informado: %d\n", numeros [i]);
 }
 
 
 printf("Pares: %d\n", numerosPares);
 printf("Impares : %d\n", numeroImpares);

    return 0;
}