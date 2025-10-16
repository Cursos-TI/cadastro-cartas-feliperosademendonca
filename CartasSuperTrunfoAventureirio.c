#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
struct Carta {
    char estado;               // Letra do estado (A-H)
    char codigo[5];            // Código da carta (ex: A01)
    char nomeCidade[50];       // Nome da cidade
    int populacao;             // Número de habitantes
    float area;                // Área em km²
    float pib;                 // PIB em bilhões de reais
    int pontosTuristicos;      // Número de pontos turísticos
    float densidade;           // Densidade demográfica (habitantes/km²)
};

int main() {
    struct Carta carta1, carta2;

    // ---- Cadastro da Carta 1 ----
    printf("Cadastro da Carta 1:\n");
    printf("Informe o estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Informe o codigo da carta (ex: A01): ");
    scanf("%4s", carta1.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Informe a populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Informe a area (em km²): ");
    scanf("%f", &carta1.area);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pib);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    carta1.densidade = carta1.populacao / carta1.area;

    printf("\n");

    // ---- Cadastro da Carta 2 ----
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

    carta2.densidade = carta2.populacao / carta2.area;

    printf("\n=== Cartas cadastradas com sucesso! ===\n\n");

    // ---- Menu interativo ----
    int opcao;
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n----------------------------------\n");

    // ---- Lógica de comparação ----
    switch (opcao) {
        case 1: // População
            printf("Comparando População:\n");
            printf("%s: %d habitantes\n", carta1.nomeCidade, carta1.populacao);
            printf("%s: %d habitantes\n", carta2.nomeCidade, carta2.populacao);

            if (carta1.populacao > carta2.populacao)
                printf("🏆 Vencedor: %s\n", carta1.nomeCidade);
            else if (carta2.populacao > carta1.populacao)
                printf("🏆 Vencedor: %s\n", carta2.nomeCidade);
            else
                printf("🤝 Empate!\n");
            break;

        case 2: // Área
            printf("Comparando Área:\n");
            printf("%s: %.2f km²\n", carta1.nomeCidade, carta1.area);
            printf("%s: %.2f km²\n", carta2.nomeCidade, carta2.area);

            if (carta1.area > carta2.area)
                printf("🏆 Vencedor: %s\n", carta1.nomeCidade);
            else if (carta2.area > carta1.area)
                printf("🏆 Vencedor: %s\n", carta2.nomeCidade);
            else
                printf("🤝 Empate!\n");
            break;

        case 3: // PIB
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhões\n", carta1.nomeCidade, carta1.pib);
            printf("%s: %.2f bilhões\n", carta2.nomeCidade, carta2.pib);

            if (carta1.pib > carta2.pib)
                printf("🏆 Vencedor: %s\n", carta1.nomeCidade);
            else if (carta2.pib > carta1.pib)
                printf("🏆 Vencedor: %s\n", carta2.nomeCidade);
            else
                printf("🤝 Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d pontos\n", carta1.nomeCidade, carta1.pontosTuristicos);
            printf("%s: %d pontos\n", carta2.nomeCidade, carta2.pontosTuristicos);

            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("🏆 Vencedor: %s\n", carta1.nomeCidade);
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
                printf("🏆 Vencedor: %s\n", carta2.nomeCidade);
            else
                printf("🤝 Empate!\n");
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("Comparando Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", carta1.nomeCidade, carta1.densidade);
            printf("%s: %.2f hab/km²\n", carta2.nomeCidade, carta2.densidade);

            if (carta1.densidade < carta2.densidade)
                printf("🏆 Vencedor: %s (menor densidade)\n", carta1.nomeCidade);
            else if (carta2.densidade < carta1.densidade)
                printf("🏆 Vencedor: %s (menor densidade)\n", carta2.nomeCidade);
            else
                printf("🤝 Empate!\n");
            break;

        default:
            printf("⚠️ Opção inválida! Reinicie o programa e tente novamente.\n");
            break;
    }

    printf("----------------------------------\n");

    return 0;
}
