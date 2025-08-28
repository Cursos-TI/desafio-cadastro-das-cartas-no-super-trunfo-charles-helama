#include <stdio.h>

int main() {
    // Variáveis
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Pontos1, Pontos2;

    float Densidade1, Densidade2;
    float PIB_per_Capita1, PIB_per_Capita2;
    float SuperPoder1, SuperPoder2;

    // Introdução
    printf("Cadastro de cartas do Super Trunfo\n\n");

    // Entrada de dados - Carta 1
    printf("Carta 1:\n");
    printf("Populacao: ");
    scanf("%lu", &Populacao1);
    printf("Area (km²): ");
    scanf("%f", &Area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &PIB1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &Pontos1);

    // Entrada de dados - Carta 2
    printf("\nCarta 2:\n");
    printf("Populacao: ");
    scanf("%lu", &Populacao2);
    printf("Area (km²): ");
    scanf("%f", &Area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &PIB2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &Pontos2);

    // Cálculos - Carta 1
    Densidade1 = Populacao1 / Area1;
    PIB_per_Capita1 = (PIB1 * 1e9) / Populacao1;
    SuperPoder1 = Populacao1 + Area1 + PIB1 + Pontos1 + PIB_per_Capita1 + (1.0 / Densidade1);

    // Cálculos - Carta 2
    Densidade2 = Populacao2 / Area2;
    PIB_per_Capita2 = (PIB2 * 1e9) / Populacao2;
    SuperPoder2 = Populacao2 + Area2 + PIB2 + Pontos2 + PIB_per_Capita2 + (1.0 / Densidade2);

    // Exibição dos cálculos
    printf("\n--- Resultados ---\n");
    printf("Densidade Populacional (Carta 1): %.2f\n", Densidade1);
    printf("PIB per Capita (Carta 1): %.2f\n", PIB_per_Capita1);
    printf("Super Poder (Carta 1): %.2f\n\n", SuperPoder1);

    printf("Densidade Populacional (Carta 2): %.2f\n", Densidade2);
    printf("PIB per Capita (Carta 2): %.2f\n", PIB_per_Capita2);
    printf("Super Poder (Carta 2): %.2f\n\n", SuperPoder2);

    // Comparações
    printf("--- Comparacoes (1 = Carta 1 vence, 0 = Carta 2 vence) ---\n");
    printf("Populacao: %d\n", Populacao1 > Populacao2);
    printf("Area: %d\n", Area1 > Area2);
    printf("PIB: %d\n", PIB1 > PIB2);
    printf("Pontos Turisticos: %d\n", Pontos1 > Pontos2);
    printf("PIB per Capita: %d\n", PIB_per_Capita1 > PIB_per_Capita2);
    printf("Densidade Populacional (menor vence): %d\n", Densidade1 < Densidade2);
    printf("Super Poder: %d\n", SuperPoder1 > SuperPoder2);

    return 0;
}
