#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
struct Carta {
    char estado; // Letra do estado (A-H)
    char codigo[5]; // Código da carta (ex: A01)
    char nomeCidade[50]; // Nome da cidade
    int populacao; // Número de habitantes
    float area; // Área em km²
    float pib; // PIB em bilhões de reais
    int pontosTuristicos; // Número de pontos turísticos
};

int main() {
    // Declaração das duas cartas
    struct Carta carta1;
    struct Carta carta2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o  estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Informe o codigo da carta (ex: A01): ");
    scanf("%4s", carta1.codigo);

    printf("Informe o nome da cidade : ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Informe a populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Informe a area (em km²): ");
    scanf("%f", &carta1.area);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pib);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n");

    // Cadastro da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Informe o estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Informe o codigo da carta (ex: B02): ");
    scanf("%4s", carta2.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Informe a populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Informe a area (em km²): ");
    scanf("%f", &carta2.area);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &carta2.pib);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n");

    // Exibicao das cartas cadastradas
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
}