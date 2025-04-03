#include <stdio.h>

int main() {
    
    //declaração das variaveis carta 1 e carta 2
    char estado, estado1;
    char codigo, codigo1;
    int numerocod, numerocod1;
    char NomeCidade[20], NomeCidade1[20];
    int populacao, populacao1;
    float areaKm, areaKm1;
    float pib, pib1;
    int pontostur, pontostur1;

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
    scanf(" %c", &estado1);

    printf("codigo da carta: \n");
    scanf(" %c%d", &codigo1, &numerocod1);

    printf("nome da cidade: \n");
    scanf("%s", NomeCidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área (em km2): \n");
    scanf("%f", &areaKm1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Números de pontos turísticos: \n");
    scanf("%d", &pontostur1);

    //siada carta 1
    printf("carta 1: \n \nEstado: %c \n", estado);
    printf("Codigo da carta: %c%d \n", codigo, numerocod);
    printf("Cidade: %s \n", NomeCidade);
    printf("População: %d \n", populacao);
    printf("Área: %.3fkm² \n", areaKm);
    printf("PIB: %.2f \n", pib);
    printf("Pontos turísticos: %d \n \n", pontostur);

    //saida carta 2
    printf("carta 2: \n \nEstado: %c \n", estado1);
    printf("Codigo da carta: %c%d \n", codigo1, numerocod1);
    printf("Cidade: %s \n", NomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.3fkm² \n", areaKm1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos turísticos: %d ", pontostur);


    return 0;
}
