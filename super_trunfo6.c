#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 4 - Comparação Avançada com Dois Atributos
// Este código integra menus dinâmicos, comparação de dois atributos e soma para determinar o vencedor.

int main() {
    // Declaração de variáveis para os atributos das cartas
    // Carta 1
    char estado1;
    char codigo1[4];  // 3 caracteres + '\0'
    char nomeCidade1[50];  // Nome do país/cidade
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;  // Calculada: População / Área
    float pibPerCapita1;           // Calculada: PIB / População

    // Carta 2
    char estado2;
    char codigo2[4];  // 3 caracteres + '\0'
    char nomeCidade2[50];  // Nome do país/cidade
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;  // Calculada: População / Área
    float pibPerCapita2;           // Calculada: PIB / População

    // Variáveis para escolhas de atributos e soma
    int opcao1, opcao2;
    float somaAtributos1 = 0.0, somaAtributos2 = 0.0;

    // Cadastro das Cartas
    printf("=== Cadastro da Carta 1 ===\n");
    printf("1. Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    getchar();  
    printf("\n");

    printf("2. Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    getchar();  
    printf("\n");

    printf("3. Digite o Nome da Cidade/Pais: ");
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

    printf("=== Cadastro da Carta 2 ===\n");
    printf("1. Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    getchar();  
    printf("\n");

    printf("2. Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);
    getchar();  
    printf("\n");

    printf("3. Digite o Nome da Cidade/Pais: ");
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
    printf("Nome: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Menu Interativo para o Primeiro Atributo
    printf("\n=== Escolha o Primeiro Atributo ===\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("Digite sua opcao (1-5): ");
    scanf("%d", &opcao1);

    // Validação do primeiro atributo
    if (opcao1 < 1 || opcao1 > 5) {
        printf("Opcao invalida! Encerrando programa.\n");
        printf("\nPressione Enter para encerrar o programa...");
        getchar();
        getchar();
        return 1;
    }

    // Menu Dinâmico para o Segundo Atributo
    printf("\n=== Escolha o Segundo Atributo ===\n");
    printf("Atributos disponiveis (exceto o ja escolhido):\n");
    if (opcao1 != 1) printf("1. Populacao\n");
    if (opcao1 != 2) printf("2. Area\n");
    if (opcao1 != 3) printf("3. PIB\n");
    if (opcao1 != 4) printf("4. Numero de Pontos Turisticos\n");
    if (opcao1 != 5) printf("5. Densidade Populacional\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao2);

    // Validação do segundo atributo (não pode ser igual ao primeiro)
    if (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1) {
        printf("Opcao invalida ou repetida! Encerrando programa.\n");
        printf("\nPressione Enter para encerrar o programa...");
        getchar();
        getchar();
        return 1;
    }

    // Comparação das Cartas com base nos dois atributos escolhidos
    printf("\n=== Comparacao de Cartas ===\n");
    printf("Carta 1 - %s (%c)\n", nomeCidade1, estado1);
    printf("Carta 2 - %s (%c)\n", nomeCidade2, estado2);

    // Exibição e soma do primeiro atributo
    printf("\nPrimeiro Atributo:\n");
    switch (opcao1) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("Carta 1: %lu\n", populacao1);
            printf("Carta 2: %lu\n", populacao2);
            somaAtributos1 += populacao1;
            somaAtributos2 += populacao2;
            break;
        case 2:
            printf("Atributo: Area\n");
            printf("Carta 1: %.2f km²\n", area1);
            printf("Carta 2: %.2f km²\n", area2);
            somaAtributos1 += area1;
            somaAtributos2 += area2;
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("Carta 1: %.2f bilhoes de reais\n", pib1);
            printf("Carta 2: %.2f bilhoes de reais\n", pib2);
            somaAtributos1 += pib1;
            somaAtributos2 += pib2;
            break;
        case 4:
            printf("Atributo: Numero de Pontos Turisticos\n");
            printf("Carta 1: %d\n", pontosTuristicos1);
            printf("Carta 2: %d\n", pontosTuristicos2);
            somaAtributos1 += pontosTuristicos1;
            somaAtributos2 += pontosTuristicos2;
            break;
        case 5:
            printf("Atributo: Densidade Populacional\n");
            printf("Carta 1: %.2f hab/km²\n", densidadePopulacional1);
            printf("Carta 2: %.2f hab/km²\n", densidadePopulacional2);
            somaAtributos1 += (densidadePopulacional1 < 0 ? 0 : 10000 / densidadePopulacional1); // Menor densidade ganha mais pontos
            somaAtributos2 += (densidadePopulacional2 < 0 ? 0 : 10000 / densidadePopulacional2);
            break;
    }

    // Exibição e soma do segundo atributo
    printf("\nSegundo Atributo:\n");
    switch (opcao2) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("Carta 1: %lu\n", populacao1);
            printf("Carta 2: %lu\n", populacao2);
            somaAtributos1 += populacao1;
            somaAtributos2 += populacao2;
            break;
        case 2:
            printf("Atributo: Area\n");
            printf("Carta 1: %.2f km²\n", area1);
            printf("Carta 2: %.2f km²\n", area2);
            somaAtributos1 += area1;
            somaAtributos2 += area2;
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("Carta 1: %.2f bilhoes de reais\n", pib1);
            printf("Carta 2: %.2f bilhoes de reais\n", pib2);
            somaAtributos1 += pib1;
            somaAtributos2 += pib2;
            break;
        case 4:
            printf("Atributo: Numero de Pontos Turisticos\n");
            printf("Carta 1: %d\n", pontosTuristicos1);
            printf("Carta 2: %d\n", pontosTuristicos2);
            somaAtributos1 += pontosTuristicos1;
            somaAtributos2 += pontosTuristicos2;
            break;
        case 5:
            printf("Atributo: Densidade Populacional\n");
            printf("Carta 1: %.2f hab/km²\n", densidadePopulacional1);
            printf("Carta 2: %.2f hab/km²\n", densidadePopulacional2);
            somaAtributos1 += (densidadePopulacional1 < 0 ? 0 : 10000 / densidadePopulacional1); // Menor densidade ganha mais pontos
            somaAtributos2 += (densidadePopulacional2 < 0 ? 0 : 10000 / densidadePopulacional2);
            break;
    }

    // Exibição das somas e resultado final
    printf("\nSoma dos Atributos:\n");
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, somaAtributos1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, somaAtributos2);

    // Determinação do vencedor com operador ternário
    printf("\nResultado: %s\n", 
           somaAtributos1 > somaAtributos2 ? "Carta 1 venceu!" :
           somaAtributos1 < somaAtributos2 ? "Carta 2 venceu!" : "Empate!");

    // Solicitação para o usuário encerrar o programa
    printf("\nPressione Enter para encerrar o programa...");
    getchar();
    getchar();

    return 0;
}