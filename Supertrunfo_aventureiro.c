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
    float denpopul, pibpercapita, denpopul2, pibpercapita2; //denpopul(densidade populacional) declaração


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

    //calculos pib per capita e densidade populacional, carta 1
    denpopul = (float) populacao / areaKm;
    pibpercapita = (float) pib / populacao;

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

    //calculo de densidade populacional e pib percapta, carta 2
    denpopul2 = (float) populacao2 / areaKm2;
    pibpercapita2 = (float) pib2 / populacao2;

    //siada carta 1
    printf("carta 1: \n \nEstado: %c \n", estado);
    printf("Codigo da carta: %c%d \n", codigo, numerocod);
    printf("Cidade: %s \n", NomeCidade);
    printf("População: %d \n", populacao);
    printf("Área: %.3fkm² \n", areaKm);
    printf("PIB: %.2f \n", pib);
    printf("Pontos turísticos: %d \n", pontostur);
    printf("Densidade Populacional: %.2fhab/km² \n", denpopul);// saída densidade populacional carta 1
    printf("PIB per capita: %.2f reais \n \n", pibpercapita);//saída PIB percapita carta 1

    //saida carta 2
    printf("carta 2: \n \nEstado: %c \n", estado2);
    printf("Codigo da carta: %c%d \n", codigo2, numerocod2);
    printf("Cidade: %s \n", NomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.3fkm² \n", areaKm2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos turísticos: %d \n", pontostur);
    printf("Densidade Populacional: %.2fhab/km² \n", denpopul2);// saída densidade populacional carta 2
    printf("PIB per capita: %.2f reais \n", pibpercapita2);//saída PIB percapita carta 2

    return 0;
}