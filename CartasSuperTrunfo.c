#include <stdio.h>

int main() {

//desafio nivel novato e aventureiro
//estado, código da cidade, nome, população, área, PIB, número de pontos turísticos, densidade populaciona, pib per capita
//variaveis
char estado1[3], estado2[3];  
char cidade1[30], cidade2[30];
char carta1[4], carta2[4];
int populacao1, populacao2;
int pturisticos1, pturisticos2;
float area1, area2;
float pib1, pib2;
float densidadepop1, densidadepop2;
float pibcapita1, pibcapita2;

// Entrada dos dados carta1
printf("Entre com a sigla do estado: \n");
scanf(" %2s", estado1);  // Limitando entrada para evitar buffer overflow

printf("Entre com o codigo da carta: \n");
scanf(" %2s", carta1);

printf("Entre com o nome da cidade: \n");
scanf(" %s[^\n]", cidade1); // Permite espaços no nome da cidade

printf("Entre com a populacao da carta: \n");
scanf(" %d", &populacao1);

printf("Entre com a area da carta: \n");
scanf(" %f", &area1);

printf("Entre com o PIB: \n");
scanf(" %f", &pib1);

printf("Quantidade de pontos turisticos: \n");
scanf(" %d", &pturisticos1);


//entrada dos dados carta2
printf("Entre com a sigla do estado: \n");
scanf(" %2s", &estado2);

printf("Entre com o codigo da carta; \n");
scanf(" %2s", &carta2);

printf("Entre com o nome da cidade: \n");
scanf(" %s[^\n]", &cidade2);

printf("Entre com a população da carta: \n");
scanf(" %d", &populacao2);

printf("Entre com a area da carta: \n");
scanf(" %f", &area2);

printf("Entre com o PIB: \n");
scanf(" %f", &pib2);

printf("Qunatidade de pontos turisticos: \n");
scanf(" %d", &pturisticos2);

//calculando densidade populacional das cartas
densidadepop1 = (float) populacao1 / area1;
densidadepop2 = (float) populacao2 / area2;

//calculando pib per capita das cartas
pibcapita1 = (float) pib1 / populacao1;
pibcapita2 = (float) pib2 / populacao2;

// Exibição dos dados carta1
printf("---- Super Trunfo ----\n\n");
printf("** Carta 1 **\n");
printf("Estado: %s\n", estado1);
printf("Codigo da carta: %s\n", carta1);
printf("Cidade: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Área em Km²: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Quantidade de pontos turisticos: %d\n", pturisticos1);
printf("Densidade populacional: %f\n", densidadepop1);
printf("PIB per capita: %f\n", pibcapita1);


//Exibição dos dados carta2
printf("---- Super Trunfo ----\n\n");
printf("** Carta 2 **\n");
printf("Estado: %s\n", estado2);
printf("Codigo da carta: %s\n", carta2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área em Km²: %f\n", area2);
printf("PIB: %f\n", pib2);
printf("Quantidade de pontos turisticos: %d\n", pturisticos2);
printf("Densidade populacional: %f\n", densidadepop2);
printf("PIB per capita: %f\n", pibcapita2);



return 0;
}