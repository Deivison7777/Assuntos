#include <stdio.h>
#include <stdlib.h>

struct dados_informacao{
    char nome [200];
    int nascimento;
    int rg;
    int cpf;
};
int main(){
    struct dados_informacao dados[5];
    int i;
    
     for(i = 0; i < 5; i++){
         setbuf(stdin,0);
         printf("\n%d° informacao.\n", i+1);
         printf("Informe o seu nome: ");
         gets(dados[i].nome);
         
         printf("Informe sua data de nascimento: ");
         scanf("%d", &dados[i].nascimento);
    
         printf("Informe seu RG: ");
         scanf("%d", &dados[i].rg);
    
         printf("Informe o seu CPF: ");
         scanf("%d", &dados[i].cpf);
     }
     
     for (i = 0; i< 5; i++){
         
        printf("\n%d° informacao.\n",  i+ 1);
         printf("Nome: %s \n", dados[i].nome);
         printf("Data de nascimento: %d\n", dados[i].nascimento);
         printf("RG: %d\n", dados[i].rg);
         printf("CPF: %d\n", dados[i].cpf);
         
     }
     
    return 0;
}
    
