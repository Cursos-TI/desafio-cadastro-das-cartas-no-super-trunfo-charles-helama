#include <stdio.h>

int main() {
    // Variáveis
    int Populacao;
    float Area;
    float PIB;
    float Densidade_Populacional;
    float PIB_per_Capita;

    // Introdução
    printf("Cadastro de cartas do Super Trunfo\n\n");

    // Carta 1
    printf("Carta 1:\n\n");
    printf("Estado: %c\n", 'A');
    printf("Codigo da carta: A01 \n");
    printf("Nome da cidade: Toritama\n");
    printf("Populacao: %d\n", 75000);
    printf("Area: %.2f km²\n", 1452.11);
    printf("PIB: R$ %.2f bilhões\n", 699.28);
    printf("Numero de pontos turisticos: %d\n\n", 10);

    // Carta 2
    printf("Carta 2:\n\n");
    printf("Estado: %c\n", 'B');
    printf("Codigo da carta: B02 \n");
    printf("Nome da cidade: Caruaru\n");
    printf("Populacao: %d\n", 95000);
    printf("Area: %.2f km²\n", 4587.78);
    printf("PIB: R$ %.2f bilhões\n", 990.88);
    printf("Numero de pontos turisticos: %d\n\n", 30);

    // Cálculos para Toritama
    Populacao = 75000;
    Area = 1452.11;
    PIB = 699.28;
    Densidade_Populacional = Populacao / Area;
    PIB_per_Capita = (PIB * 1e9) / Populacao;

    printf("Densidade Populacional (Toritama): %.2f hab/km²\n", Densidade_Populacional);
    printf("PIB per Capita (Toritama): R$ %.2f\n\n", PIB_per_Capita);

    // Cálculos para Caruaru
    Populacao = 95000;
    Area = 4587.78;
    PIB = 990.88;
    Densidade_Populacional = Populacao / Area;
    PIB_per_Capita = (PIB * 1e9) / Populacao;

    printf("Densidade Populacional (Caruaru): %.2f hab/km²\n", Densidade_Populacional);
    printf("PIB per Capita (Caruaru): R$ %.2f\n", PIB_per_Capita);

    return 0;
}