#include <stdio.h>

// Desafio Super Trunfo - Países

// Tema 1 - Cadastro das cartas

// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
    int carta1, carta2;
    char estado[10];
    char codigo[5]; 
    char cidade[20];
    int populacao;
    float area;
    float pib;
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
    scanf("%d", &populacao);

    printf("Digite a área (em km²) \n");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões) \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos \n");
    scanf("%d", &pontos_turisticos);


  // Área para exibição dos dados da cidade

    printf("Carta 1: %d\n", carta1);

    printf("Estado: %s\n", estado);

    printf("Código: %s\n", codigo);

    printf("Cidade: %s\n", cidade);

    printf("População: %d Habitantes\n", populacao);

    printf("Área: %.2f km²\n", area);

    printf("PIB: %.2f bilhões\n", pib);

    printf("Pontos Turísticos: %d\n\n", pontos_turisticos);

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
    scanf("%d", &populacao);

    printf("Digite a área (em km²) \n");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões) \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos \n");
    scanf("%d", &pontos_turisticos);

    // Área para exibição dos dados da cidade

    printf("Carta 2: %d\n", carta2);

    printf("Estado: %s\n", estado);

    printf("Código: %s\n", codigo);

    printf("Cidade: %s\n", cidade);

    printf("População: %d Habitantes\n", populacao);

    printf("Área: %.2f km²\n", area);

    printf("PIB: %.2f bilhões\n", pib);

    printf("Pontos Turísticos: %d\n", pontos_turisticos);

return 0;

} 
