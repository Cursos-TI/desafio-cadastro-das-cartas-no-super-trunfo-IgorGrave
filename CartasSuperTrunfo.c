#include <stdio.h>

int main() {
    
    //declaração das variaveis carta 1 e carta 2
    char estado, estado2;
    char codigo, codigo2;
    int numerocod, numerocod2;
    char NomeCidade[20], NomeCidade2[20];
    int populacao, populacao2;
    float areaKm, areaKm2;
    float pib, pib2;
    int pontostur, pontostur2;

    //leitura de entrada da carta 1
    printf("Super Trunfo\n");
    printf("Selecione os dados da sua carta 1\n \n");

    printf("Estado: \n");
    scanf("%c", &estado);

    printf("codigo da carta: \n");
    scanf(" %c%d", &codigo, &numerocod);

    printf("nome da cidade: \n");
    scanf("%s", NomeCidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área (em km2): \n");
    scanf(" %f", &areaKm);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Números de pontos turísticos: \n");
    scanf("%d", &pontostur);

    //leitura de entrada da carta 2
    printf("\nSelecione os dados da sua carta 2\n \nEstado: \n");
    scanf(" %c", &estado2);

    printf("codigo da carta: \n");
    scanf(" %c%d", &codigo2, &numerocod2);

    printf("nome da cidade: \n");
    scanf("%s", NomeCidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área (em km2): \n");
    scanf("%f", &areaKm2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Números de pontos turísticos: \n");
    scanf("%d", &pontostur2);

    //siada carta 1
    printf("carta 1: \n \nEstado: %c \n", estado);
    printf("Codigo da carta: %c%d \n", codigo, numerocod);
    printf("Cidade: %s \n", NomeCidade);
    printf("População: %d \n", populacao);
    printf("Área: %.3fkm² \n", areaKm);
    printf("PIB: %.2f \n", pib);
    printf("Pontos turísticos: %d \n \n", pontostur);

    //saida carta 2
    printf("carta 2: \n \nEstado: %c \n", estado2);
    printf("Codigo da carta: %c%d \n", codigo2, numerocod2);
    printf("Cidade: %s \n", NomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.3fkm² \n", areaKm2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos turísticos: %d ", pontostur);


    return 0;
}
