#include <stdio.h>

void cabecalho() {
    printf("\n===================================\n");
    printf("\tSENAI");
    printf("\n===================================\n");
}

void mostrarDados(char nome[], int idade){
    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);
}

int main (){
    
    char nome[200];
    int idade;
    
   
    cabecalho();
    printf("Digite um nome: ");
    gets(nome);
    
    printf("Digite uma idade: ");
    scanf("%d", &idade);
    
    cabecalho();
    
    mostrarDados(nome, idade);
    
    
    return 0;
}
