#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

//varaiveis
    char cidade[20];
    char estado[2];
    char codcarta[3];
    int populacao;
    int pntturistico;
    float area;
    float pib;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

//Coletando dados
    printf("Sigla do estado: \n", estado);
    scanf("%s", &estado);

    printf("Nome da cidade: \n", cidade);
    scanf("%s", &cidade);

    printf("Codigo da carta: \n", codcarta);
    scanf("%s", &codcarta);

    printf("População: \n", populacao);
    scanf("%d", &populacao);

    printf("Área por Km²: \n", area);
    scanf("%f", &area);

    printf("PIB: \n", pib);
    scanf("%f", &pib);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//exibição dos dados
    printf("\n\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Codigo da carta: %s\n", codcarta);
    printf("População: %d\n", populacao);
    printf("Área por Km²: %f\n", area);
    printf("PIB: %f\n", pib);

    return 0;
}
