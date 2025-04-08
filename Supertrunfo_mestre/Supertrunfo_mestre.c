#include <stdio.h>

int main() {
    
    //declaração das variaveis carta 1 e carta 2
    char estado, estado2;
    char codigo, codigo2;
    int numerocod, numerocod2;
    char NomeCidade[20], NomeCidade2[20];
    long int populacao, populacao2;
    float areaKm, areaKm2;
    float pib, pib2;
    int pontostur, pontostur2;
    float denpopul, pibpercapita, denpopul2, pibpercapita2; //denpopul(densidade populacional) declaração
    float resDensidadePibPer = denpopul + pibpercapita; //calculo da densidade populacional + pib percapta, carta 1
    float resDensidadePibPer2 = denpopul2 + pibpercapita2; //calculo da densidade populacional + pib percapta, carta 2
    float superPoder = (float) populacao + areaKm + pib + pontostur + pibpercapita + (1/denpopul);
    float superPoder2 = (float) populacao2 + areaKm2 + pib2 + pontostur2 + pibpercapita2 + (1/denpopul2);
    int resultadopopulacao, resultadoarea, resultadopib, resultadopontostur, 
    resultadodensidadepopul, resultadopibpercapita, resultadosuperpoder; //comparações armazenadas


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
    scanf("%ld", &populacao);

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
    scanf("%ld", &populacao2);

    printf("Área (em km2): \n");
    scanf("%f", &areaKm2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Números de pontos turísticos: \n");
    scanf("%d", &pontostur2);

    //calculo de densidade populacional e pib percapta, carta 2
    denpopul2 = (float) populacao2 / areaKm2;
    pibpercapita2 = pib2 / (float) populacao2;

    //comparações armazenadas
    resultadopopulacao = populacao > populacao2;
    resultadoarea = areaKm > areaKm2;
    resultadopib = pib > pib2;
    resultadopontostur = pontostur > pontostur2;
    resultadodensidadepopul = denpopul < denpopul2;
    resultadopibpercapita = pibpercapita > pibpercapita2;
    resultadosuperpoder = superPoder > superPoder2;

    
    //saída carta 1
    printf("carta 1: \n \nEstado: %c \n", estado);
    printf("Codigo da carta: %c%d \n", codigo, numerocod);
    printf("Cidade: %s \n", NomeCidade);
    printf("População: %ld \n", populacao);
    printf("Área: %.3fkm² \n", areaKm);
    printf("PIB: %.2f \n", pib);
    printf("Pontos turísticos: %d \n", pontostur);
    printf("Densidade Populacional: %.2fhab/km² \n", denpopul);// saída densidade populacional carta 1
    printf("PIB per capita: %.2f reais \n \n", pibpercapita);//saída PIB percapita carta 1

    //saida carta 2
    printf("carta 2: \n \nEstado: %c \n", estado2);
    printf("Codigo da carta: %c%d \n", codigo2, numerocod2);
    printf("Cidade: %s \n", NomeCidade2);
    printf("População: %ld \n", populacao2);
    printf("Área: %.3fkm² \n", areaKm2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos turísticos: %d \n", pontostur);
    printf("Densidade Populacional: %.2fhab/km² \n", denpopul2);// saída densidade populacional carta 2
    printf("PIB per capita: %.2f reais\n \n", pibpercapita2);//saída PIB percapita carta 2

    //saída das comparações 
    printf("Comparação de cartas:\n");
    printf("(1) carta 1 Win!\n(0) carta 2 Win! \n\n");
    printf("População: %d\n", resultadopopulacao);
    printf("Área: %d\n", resultadoarea);
    printf("PIB: %d\n", resultadopib);
    printf("Pontos turísticos: %d\n", resultadopontostur);
    printf("Densidade Populacional: %d\n", resultadodensidadepopul);
    printf("PIB per capita: %d\n", resultadopibpercapita);
    printf("Super Poder: %d", resultadosuperpoder);

    return 0;
}