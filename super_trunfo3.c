#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];  // 3 caracteres + '\0'
    char nomeCidade1[50];
    unsigned long int populacao1;  // Alterado para unsigned long int
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;  // Nova variável para Super Poder

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];  // 3 caracteres + '\0'
    char nomeCidade2[50];
    unsigned long int populacao2;  // Alterado para unsigned long int
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;  // Nova variável para Super Poder

    // Cadastro das Cartas:
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
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + 
                  pibPerCapita1 + (1.0f / densidadePopulacional1);

    // Cálculos para Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + 
                  pibPerCapita2 + (1.0f / densidadePopulacional2);

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
    printf("Super Poder: %.2f\n", superPoder1);

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
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação das Cartas
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", 
           populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2 ? 1 : 0);
    printf("Area: Carta %d venceu (%d)\n", 
           area1 > area2 ? 1 : 2, area1 > area2 ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", 
           pib1 > pib2 ? 1 : 2, pib1 > pib2 ? 1 : 0);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", 
           pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           densidadePopulacional1 < densidadePopulacional2 ? 1 : 2, densidadePopulacional1 < densidadePopulacional2 ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           pibPerCapita1 > pibPerCapita2 ? 1 : 2, pibPerCapita1 > pibPerCapita2 ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", 
           superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2 ? 1 : 0);
    
    return 0;
}
