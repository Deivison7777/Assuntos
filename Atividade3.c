#include <stdio.h>
#include <stdlib.h>

int main()
{

    char bandas[3][1000];
    char integrante[3][5][1500];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("\nDigite a %d° Banda: ", i + 1);
        gets(bandas[i]);

        for (j = 0; j < 5; j++)
        {
            printf("\nDigite o nome do %d°: ", j + 1);
            gets(integrante[i][j]);
        }
    }
     
     printf("\nEXIBINDO OS DADOS...\n");

     for ( i = 0; i < 3; i++)
     {
        printf("%d° Banda: %s \n\n", i+1, bandas[i]);
     for ( j = 0; j < 5; j++)
     {
        printf("%d° integrante: %s \n\n", j+1, integrante[i][j]);
     }
     
     }
     
    
    return 0;
}