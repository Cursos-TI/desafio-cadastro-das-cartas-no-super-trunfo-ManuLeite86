#include <stdio.h>

int main() {
    char estado1, estado2;
    char nomeCidade1[50], nomeCidade2[50];
    char codigoCarta1[6], codigoCarta2[6];
    int populacao1, populacao2;
    float areaCidade1, areaCidade2;
    float pibCidade1, pibCidade2;
    int pontosTuristicos1, pontosTuristicos2;

    // Leitura dos dados para a primeira carta

    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);
    printf("\n");
    printf("Digite o código da primeira carta (XXYY): ");
    scanf(" %5s", codigoCarta1);
    printf("\n");
    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %49s", nomeCidade1);
    printf("\n");
    printf("Digite a população da cidade da primeira carta: ");
    scanf(" %d", &populacao1);
    printf("\n");
    printf("Digite a área da cidade da primeira carta (em km²): ");
    scanf(" %f", &areaCidade1);
    printf("\n");
    printf("Digite o PIB da cidade da primeira carta (em bilhões de reais): ");
    scanf(" %f", &pibCidade1);
    printf("\n");
    printf("Digite o número de pontos turísticos da cidade da primeira carta: ");
    scanf(" %d", &pontosTuristicos1);
    printf("\n");

    // Leitura dos dados para a segunda carta

    printf("Digite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);
    printf("\n");
    printf("Digite o código da segunda carta (XXYY): ");
    scanf(" %5s", codigoCarta2);
    printf("\n");
    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %49s", nomeCidade2);
    printf("\n");
    printf("Digite a população da cidade da segunda carta: ");
    scanf(" %d", &populacao2);
    printf("\n");
    printf("Digite a área da cidade da segunda carta (em km²): ");
    scanf(" %f", &areaCidade2);
    printf("\n");
    printf("Digite o PIB da cidade da segunda carta (em bilhões de reais): ");
    scanf(" %f", &pibCidade2);
    printf("\n");
    printf("Digite o número de pontos turísticos da cidade da segunda carta: ");
    scanf(" %d", &pontosTuristicos2);
    printf("\n");

    // Exibição dos dados das cartas
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areaCidade1);
    printf("PIB: %.2f bilhões de reais\n", pibCidade1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f bilhões de reais\n", pibCidade2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
