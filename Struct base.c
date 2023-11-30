#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_aluno{
    char nome[200];
    int idade;
};

int main(){

struct dados_aluno aluno;
//char nome[200];
//int idade; 

printf("\n Solicitando os dados do aluno...\n");
printf("Nome do aluno: ");
gets(aluno.nome);

printf("Idade do aluno: ");
scanf("%d", &aluno.idade);

printf("\n Exibindo os dados do aluno...\n");
printf("Nome: %s \n", aluno.nome);
printf("Idade: %d \n", aluno.idade);

return 0;
}
