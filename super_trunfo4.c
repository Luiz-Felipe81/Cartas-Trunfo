#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação de Cartas
// Este código reaproveita o cadastro de cartas e adiciona a lógica de comparação entre duas cartas.

int main() {
    // Declaração de variáveis para os atributos das cartas
    // Carta 1
    char estado1;
    char codigo1[4];  // 3 caracteres + '\0'
    char nomeCidade1[50];
    unsigned long int populacao1;  // Para suportar populações grandes
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;  // Calculada: População / Área
    float pibPerCapita1;           // Calculada: PIB / População

    // Carta 2
    char estado2;
    char codigo2[4];  // 3 caracteres + '\0'
    char nomeCidade2[50];
    unsigned long int populacao2;  // Para suportar populações grandes
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;  // Calculada: População / Área
    float pibPerCapita2;           // Calculada: PIB / População

    // Cadastro das Cartas
    // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("1. Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    getchar();  
    printf("\n");

    printf("2. Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    getchar();  
    printf("\n");

    printf("3. Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    getchar();  
    printf("\n");

    printf("4. Digite a Populacao: ");
    scanf("%lu", &populacao1);
    getchar();  
    printf("\n");

    printf("5. Digite a Area (em km²): ");
    scanf("%f", &area1);
    getchar();  
    printf("\n");

    printf("6. Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    getchar();  
    printf("\n");

    printf("7. Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    getchar();  
    printf("\n");

    // Entrada de dados da Carta 2
    printf("=== Cadastro da Carta 2 ===\n");
    printf("1. Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    getchar();  
    printf("\n");

    printf("2. Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);
    getchar();  
    printf("\n");

    printf("3. Digite o Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    getchar();  
    printf("\n");

    printf("4. Digite a Populacao: ");
    scanf("%lu", &populacao2);
    getchar();  
    printf("\n");

    printf("5. Digite a Area (em km²): ");
    scanf("%f", &area2);
    getchar();  
    printf("\n");

    printf("6. Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    getchar();  
    printf("\n");

    printf("7. Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    getchar();  
    printf("\n");

    // Cálculos para Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;  // Densidade Populacional
    pibPerCapita1 = pib1 * 1000000000 / (float)populacao1;  // PIB per Capita em reais

    // Cálculos para Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;  // Densidade Populacional
    pibPerCapita2 = pib2 * 1000000000 / (float)populacao2;  // PIB per Capita em reais

    // Exibição dos Dados das Cartas
    printf("\n=== Dados Cadastrados ===\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Comparação das Cartas (Atributo escolhido: População)
    printf("\n=== Comparacao de Cartas (Atributo: Populacao) ===\n");
    printf("Carta 1 - %s (%c): %lu\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu\n", nomeCidade2, estado2, populacao2);

    // Lógica de decisão para determinar a vencedora
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao1 < populacao2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}