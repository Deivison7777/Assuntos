#include <stdio.h>
#include <stdlib.h>

struct dados_informacoes{
    char nome[200];
    int idade;
    float notas[2];
    
};

int main (){
    struct dados_informacoes informacao[3];
    int i, j; 
    
    for (i = 0; i < 3; i++){
        
        printf("Informe o seu nome: ");
        gets(informacao[i].nome);
        printf("Informe a sua idade: ");
        scanf("%d", &informacao[i].idade);
        
        for (j = 0; j < 2; j++){
            printf("Informe a %d° nota: ", j + 1);
            scanf("%f", &informacao[i].notas[j]);
            
        }
        setbuf(stdin,0);
    }
    
    for (i = 0; i < 3; i++){
        printf("\n%d° informacao\n", i+1);
        printf("Nome: %s\n", informacao[i].nome);
        printf("Nome: %d\n", informacao[i].idade);
        
        for(j = 0; j < 2; j++){
        printf("%d° nota: %.2f\n", j + 1, informacao[i].notas[j]);
            
        }
    }
    
    
    
    
    
    return 0; 
}
