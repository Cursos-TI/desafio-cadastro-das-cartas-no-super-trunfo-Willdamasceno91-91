#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Declaração de variáveis para a segunda carta
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // --- Cadastro da Primeira Carta ---
    printf("--- Cadastro da Primeira Carta ---\n");
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    // --- Cadastro da Segunda Carta ---
    printf("--- Cadastro da Segunda Carta ---\n");
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    // --- Exibição das Cartas Cadastradas ---
    printf("--- Cartas Cadastradas ---\n");

    // Exibição da Primeira Carta
    printf("\nCarta 1:\n");
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    // Exibição da Segunda Carta
    printf("\nCarta 2:\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}
