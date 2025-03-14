#include <stdio.h>

int main(){
    int idade, matricula;
    char nome[50];

        printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite a sua matricula: \n");
    scanf("%d", &matricula);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Nome do aluno: %s\n", nome);
    printf("Matrícula: %d\n", matricula);
    printf("Idade: %d\n", idade);

    return 0;

}