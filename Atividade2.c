#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nome[5][1000];
    int idade[5][5];
    float notas[5][3];
    int i;
    int j;
    int soma = 0;
    float media[5];

    for (i = 0; i < 5; i++)
    {
        fflush(stdin);
        printf("Nome do %d° aluno: ", i + 1);
        gets(nome[i]);

        printf("Idade: ");
        scanf("%d", &idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite a %d° nota: ", j + 1);
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];
        }
    media[i] = soma / j;
    soma = 0;
    fflush(stdin);
    }

    printf("\n Exibindo dados...\n");
    for (i = 0; i < 5; i++)
    {
        printf(" %d° Aluno: %s \n", i + 1, nome[i]);
        printf("\nIdade: %d \n", idade[i]);
        for (j = 0; j < 3; j++)
        {
            printf("\nnota do %d° aluno: %.2f \n\n", j + 1, notas[i][j]);
        }
            printf("\nMedia: %.1f \n", media[i]);

        if (media[i] >= 7)
        {
            printf("\nAprovado!\n");
        }
        else if (media[i] >= 5)
        {
            printf("\nRecuperacao!\n");
        }
        else
        {
            printf("\nReprovado!\n");
        }
    }

    return 0;
}