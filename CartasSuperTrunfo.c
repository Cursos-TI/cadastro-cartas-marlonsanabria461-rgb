#include <stdio.h>

// Desafio Super Trunfo - cidades

// Tema 1 - Cadastro das cartas

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
    int carta1, carta2;
    char estado[10];
    char codigo[5]; 
    char cidade[20];
    float populacao;
    float area;
    long double pib;
    int pontos_turisticos;
    
   

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
    scanf("%f", &populacao);

    printf("Digite a área (em km²) \n");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões) \n");
    scanf("%ld", &pib);

    printf("Digite o número de pontos turísticos \n");
    scanf("%d", &pontos_turisticos);

    
    float populacao1 = 10000000;
    float area1 = 1000;
    long double pib1 = 5000000000000.0;
    float densidade_populacional1 = populacao1 / area1;
    long double pib_per_capita1 = (long double)(pib1 / populacao1);
    int pontos_turisticos1 = 50;
    long double super_poder1 = (populacao1 + area1 + pib1 + pontos_turisticos1 + densidade_populacional1 + pib_per_capita1);




  // Área para exibição dos dados da cidade

    printf("Carta 1: %d\n", carta1);

    printf("Estado: %s\n", estado);

    printf("Código: %s\n", codigo);

    printf("Cidade: %s\n", cidade);

    printf("População: %.2f Habitantes\n", populacao);

    printf("Área: %.2f km²\n", area);

    printf("PIB: %.2f bilhões\n", pib);

    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional1);

    printf("PIB per Capita: %.15ld bilhões\n\n", pib_per_capita1);



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
    scanf("%f", &populacao);

    printf("Digite a área (em km²) \n");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões) \n");
    scanf("%ld", &pib);

    printf("Digite o número de pontos turísticos \n");
    scanf("%d", &pontos_turisticos);

    long double populacao2 = 5000000;
    float area2 = 500;
    long double pib2 = 2500000000000.0;
    float densidade_populacional2 = populacao2 / area2;
    long double pib_per_capita2 = (long double)(pib2 / populacao2);
    int pontos_turisticos2 = 30;
    long double super_poder2 = (populacao2 + area2 + pib2 + pontos_turisticos2 + densidade_populacional2 + pib_per_capita2);

    

    // Área para exibição dos dados da cidade

    printf("Carta 2: %d\n", carta2);

    printf("Estado: %s\n", estado);

    printf("Código: %s\n", codigo);

    printf("Cidade: %s\n", cidade);

    printf("População: %.2f Habitantes\n", populacao);

    printf("Área: %.2f km²\n", area);

    printf("PIB: %.2f bilhões\n", pib);

    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional2);

    printf("PIB per Capita: %.15ld bilhões\n\n", pib_per_capita2);

    printf("*******Comparação das Cartas*******\n\n");

    const char *comparacao_populacao = (populacao1 > populacao2) ? "Carta 1 é maior" : "Carta 2 é maior";
    const char *comparacao_area = (area1 > area2) ? "Carta 1 é maior" : "Carta 2 é maior";
    const char *comparacao_pib = (pib1 > pib2) ? "Carta 1 é maior" : "Carta 2 é maior";
    const char *comparacao_pontos_turisticos = (pontos_turisticos1 > pontos_turisticos2) ? "Carta 1 é maior" : "Carta 2 é maior";
    const char *comparacao_densidade_populacional = (densidade_populacional1 > densidade_populacional2) ? "Carta 1 é maior" : "Carta 2 é maior";
    const char *comparacao_pib_per_capita = (pib_per_capita1 > pib_per_capita2) ? "Carta 1 é maior" : "Carta 2 é maior";
    const char *comparacao_super_poder = (super_poder1 > super_poder2) ? "Carta 1 é maior" : "Carta 2 é maior\n\n";

    printf("Comparação de População: %s\n", comparacao_populacao);
    printf("Comparação de Área: %s\n", comparacao_area);
    printf("Comparação de PIB: %s\n", comparacao_pib);
    printf("Comparação de Pontos Turísticos: %s\n", comparacao_pontos_turisticos);
    printf("Comparação de Densidade Populacional: %s\n", comparacao_densidade_populacional);
    printf("Comparação de PIB per Capita: %s\n", comparacao_pib_per_capita);
    printf("Comparação de Super Poder: %s\n", comparacao_super_poder);




return 0;

} 
