#include <stdio.h>
#include <stdlib.h>

int main()
{

    char alunos[2][200];
    float notas[2][3];
    int i;
    int j;
    float media[2];
    float soma = 0;

    system("cls");

    for (i = 0; i < 2; i++)
    {
        printf("\n digite o nome do %dº aluno:", i + 1);
        gets(alunos[i]);

        for (j = 0; j < 3; j++)
        {
            printf(" digite a %dº nota do aluno:", j + 1);
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];
        }
        media[i] = soma / 3;
        soma = 0;
        fflush(stdin);
    }

    printf(" \n exibindo dados....\n");

    for (i = 0; i < 2; i++)
    {

        printf("nome do %dº aluno : %s \n\n", i + 1, alunos[i]);

        for (j = 0; j < 3; j++)
        {
            printf(" nota do %dº aluno : %.2f \n\n", j + 1, notas[i][j]);
        }

        printf(" media do %dº aluno : %.2f \n\n", j + 1, media[i]);
    }

    return 0;
}