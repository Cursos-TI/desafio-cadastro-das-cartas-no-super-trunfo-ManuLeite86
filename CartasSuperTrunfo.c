#include <stdio.h>

typedef struct {
    char estado;
    char codigo[6];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

void lerDadosCarta(Carta *carta) {
    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &carta->estado);
    printf("\n");
    printf("Digite o código da carta (XXYY): ");
    scanf(" %5s", carta->codigo);
    printf("\n");
    printf("Digite o nome da cidade da carta: ");
    scanf(" %49s", carta->nomeCidade);
    printf("\n");
    printf("Digite a população da cidade da carta: ");
    scanf(" %d", &carta->populacao);
    printf("\n");
    printf("Digite a área da cidade da carta (em km²): ");
    scanf(" %f", &carta->area);
    printf("\n");
    printf("Digite o PIB da cidade da carta (em bilhões de reais): ");
    scanf(" %f", &carta->pib);
    printf("\n");
    printf("Digite o número de pontos turísticos da cidade da carta: ");
    scanf(" %d", &carta->pontosTuristicos);
    printf("\n");
}

void exibirDadosCarta(Carta carta) {
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", (float)carta.populacao / carta.area);
    printf("PIB per Capita: %.2f reais\n", carta.pib / (float)carta.populacao);
}

int main() {
    Carta carta1, carta2;

    printf("----- Carta 1 -----\n");
    lerDadosCarta(&carta1);

    printf("\n----- Carta 2 -----\n");
    lerDadosCarta(&carta2);

    printf("\n----- Resultados -----\n");
    printf("\nCarta 1:\n");
    exibirDadosCarta(carta1);

    printf("\nCarta 2:\n");
    exibirDadosCarta(carta2);

    return 0;
}
