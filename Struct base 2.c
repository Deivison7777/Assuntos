#include <stdio.h>
#include <stdlib.h>

struct dados_endereco{
    char nome[200];
    int idade;
    char rua[200] ;
    int cep;
    
};

int main(){
    
    struct dados_endereco endereco;
    
    printf("\nColetando Dados...\n");
    printf("Informe o seu nome:");
    gets(endereco.nome);
    
    printf("Informe a sua idade: ");
    scanf("%d", &endereco.idade);
    setbuf(stdin,0);
    
    printf("Informe o nome da sua rua: ");
    gets(endereco.rua);
    setbuf(stdin,0);
    
    printf("Informe o CEP: ");
    scanf("%d", &endereco.cep);
    
//exibindo dados...

printf("\nExibindo dados...\n");
    printf("Nome: %s \n", endereco.nome);
    printf("Idade: %d \n", endereco.idade);
    printf("Nome: %s \n", endereco.rua);
    printf("Nome: %d \n", endereco.cep);
    

    return 0;
}
