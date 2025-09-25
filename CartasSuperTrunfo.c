#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Carta 1
  char estado1; // Letras de A a H
  char codigo1[4]; //  Exemplo: A01, B01, C01
  char nomeCidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  // Carta 2
  char estado2; // Letras de A a H
  char codigo2[4]; // Exemplo: A02, B02, C02
  char nomeCidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  
  // Área para entrada de dados
  
  // Dados da Carta 1
  printf("CADASTRO DE CARTA 1\n");
  printf("Digite a letra do estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Digite o código da carta (ex: A01): ");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: ");
  scanf(" %s[^\n]", nomeCidade1); 

  printf("Digite a população: ");
  scanf("%d", &populacao1);

  printf("Digite a área em km²: ");
  scanf("%f", &area1);

  printf("Digite o PIB em bilhões de reais: ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos1);

  // Dados da Carta 2
  printf("\n CADASTRO DE CARTA 2 \n");
  printf("Digite a letra do estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta (ex: A02): ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf(" %s[^\n]", nomeCidade2);

  printf("Digite a população: ");
  scanf("%d", &populacao2);

  printf("Digite a área em km²: ");
  scanf("%f", &area2);

  printf("Digite o PIB em bilhões de reais: ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);
  
  // Área para exibição dos dados da cidade

  printf("\n CARTA 1 \n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

  printf("\n CARTA 2 \n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

  if(populacao1 > populacao2){
        printf("CARTA 1 VENCEU \n");
    } else {
        printf("CARTA 2 VENCEU \n");
    }

    if(area1 > area2){
        printf("CARTA 1 VENCEU \n");
    } else {
        printf("CARTA 2 VENCEU \n");
    }

return 0;
} 
