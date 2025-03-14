#include <stdio.h>

int main(){
    char estado, codigo[50], cidade[50];
    int populacao, pontosturismo;
    float area, pib;

    printf("Carta 1\n");

    printf("Digite o Estado: ");
    scanf("%s", estado);
    printf("Estado: %s\n", estado);

    printf("Digite o Código: ");
    scanf("%s", codigo);
    printf("Código: %s\n", codigo);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade);
    printf("Cidade: %s\n", cidade);

    printf("Digite a População: ");
    scanf("%d", &populacao);
    printf("População: %d\n", populacao);

    printf("Digite a Área (km2): ");
    scanf("%f\n", area);
    printf("Área (km2): %f", area);

    printf("Digite o PIB: ");
    scanf("%f\n", pib);
    printf("PIB: %f", pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d\n", pontosturismo);
    printf("PIB: %d", pontosturismo);

    return 0;

}