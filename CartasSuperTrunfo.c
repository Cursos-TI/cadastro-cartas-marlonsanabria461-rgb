#include <stdio.h>

// Desafio Super Trunfo - cidades

// Tema 1 - Cadastro das cartas

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
    int carta1, carta2;
    char estado[10];
    char codigo[5]; 
    char cidade[20];
    float populacao1, populacao2;
    float area1, area2;
    long double pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    long double pib_per_capita1;
    long double pib_per_capita2;


  // Área para entrada de dados

    printf("Digite o numero da carta 1 \n");
    scanf("%d", &carta1);

    printf("Digite o estado \n");
    scanf("%s", estado);

    printf("Digite o codigo \n");
    scanf("%s", codigo);

    printf("Digite a cidade \n");
    scanf("%s", cidade);

    printf("Digite a população \n");
    scanf("%f", &populacao1);

    printf("Digite a área (em km²) \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões) \n");
    scanf("%ld", &pib1);

    printf("Digite o número de pontos turísticos \n");
    scanf("%d", &pontos_turisticos1);

    densidade_populacional1 = populacao1 / area1;

    pib_per_capita1 = pib1 / populacao1;


  // Área para exibição dos dados da cidade

    printf("Carta 1: %d\n", carta1);

    printf("Estado: %s\n", estado);

    printf("Código: %s\n", codigo);

    printf("Cidade: %s\n", cidade);

    printf("População: %.2f Habitantes\n", populacao1);

    printf("Área: %.2f km²\n", area1);

    printf("PIB: %.2f bilhões\n", pib1);

    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional1);

    printf("PIB per Capita: %.20ld bilhões\n\n", pib_per_capita1);



   // Área para entrada de dados da segunda carta

    printf("Digite o numero da carta 2 \n");
    scanf("%d", &carta2);

    printf("Digite o estado \n");
    scanf("%s", estado);

    printf("Digite o codigo \n");
    scanf("%s", codigo);

    printf("Digite a cidade \n");
    scanf("%s", cidade);

    printf("Digite a população \n");
    scanf("%f", &populacao2);

    printf("Digite a área (em km²) \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões) \n");
    scanf("%.20ld", &pib2);

    printf("Digite o número de pontos turísticos \n");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;

    pib_per_capita2 = pib2 / populacao2;


    // Área para exibição dos dados da cidade

    printf("Carta 2: %d\n", carta2);

    printf("Estado: %s\n", estado);

    printf("Código: %s\n", codigo);

    printf("Cidade: %s\n", cidade);

    printf("População: %.2f Habitantes\n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: %.2f bilhões\n", pib2);

    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional2);

    printf("PIB per Capita: %.20ld bilhões\n\n", pib_per_capita2);

    printf("*******Comparação das Cartas*******\n\n");

    if (populacao1 > populacao2) {
        printf("Carta 1 Venceu!\n");
    } else {
        printf("Carta 2 Venceu!\n");
    }
    if (area1 > area2) {
        printf("Carta 1 tem maior área.\n");
    } else {
        printf("Carta 2 tem maior área.\n");
    }
    if (pib1 > pib2) {
        printf("Carta 1 tem maior PIB.\n");
    } else {
        printf("Carta 2 tem maior PIB.\n");
    }
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Carta 1 tem mais pontos turísticos.\n");
    } else {
        printf("Carta 2 tem mais pontos turísticos.\n");
    }
    if (densidade_populacional1 > densidade_populacional2) {
        printf("Carta 1 tem maior densidade populacional.\n");
    } else {
        printf("Carta 2 tem maior densidade populacional.\n");
    }
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Carta 1 tem maior PIB per capita.\n");
    } else {
        printf("Carta 2 tem maior PIB per capita.\n");
    }
    
return 0;

} 
