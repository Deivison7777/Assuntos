#include <stdio.h>
#include <stdlib.h>

int main()
{

    char disciplina[3][1000];
    float notas[3][2];
    int i, j;
    int soma = 0;
    float media[2];

    for (i = 0; i < 3; i++)
    {
        printf("\nNome da %d° disciplina: ", i + 1);
        gets(disciplina[i]);
        for (j = 0; j < 2; j++)
        {
            printf("digite a %d° nota: ", j + 1);
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];
        }
        media[i] = soma / j;
        soma = 0;
        fflush(stdin);
    }

    printf("\n Exibindo dados\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d Disciplina: %s \n\n", i + 1, disciplina[i]);
   
   for ( j = 0; j < 2; j++)
   {
    printf("nota do %d° aluno: %.2f \n\n", j+1, notas[i][j]);

   }
   printf("Media: %.2f \n", media[i]);

if (media[i] >= 7.0)
{
    printf("\nAproveido!\n");
}
else if (media[i] >= 5.0 )
{
    printf("\nRecu recu!\n");
}
else
{
    printf("\nReprovado!\n");
}
    }

    return 0;
}