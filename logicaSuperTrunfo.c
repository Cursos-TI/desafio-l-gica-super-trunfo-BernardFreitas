#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada da Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe a Populacao: ");
    scanf("%lu", &populacao1);

    printf("Informe a Area (km2): ");
    scanf("%f", &area1);

    printf("Informe o PIB (bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    //Cálculos da Carta 1
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Exibição da Carta 1 com cálculo
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("Pib per Capita: %.2f reais\n", pibPerCapita1);

    // Entrada da Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a Populacao: ");
    scanf("%lu", &populacao2);

    printf("Informe a Area (km2): ");
    scanf("%f", &area2);

    printf("Informe o PIB (bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //Cálculos da Carta 2
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição da Carta 2 com cálculo
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    //Menu de comparação
    int opcao;

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica (menor vence)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n--- Comparação das Cartas ---\n");
    printf("Carta 1: %s (%c)\n", nomeCidade1, estado1);
    printf("Carta 2: %s (%c)\n", nomeCidade2, estado2);

    switch(opcao) {
        case 1: //População
        printf("Atributo escolhido: Poulacao\n");
        printf("%s: %lu\n", nomeCidade1, populacao1);
        printf("%s: %lu\n", nomeCidade2, populacao2);
        if (populacao1 > populacao2)
        printf("Resultado: %s venceu!\n", nomeCidade1);
        else if (populacao2 > populacao1)
        printf("Resultado: %s venceu!\n", nomeCidade2);
        else
        printf("Resultado: Empate!\n");
        break;

        case 2: // Área
        printf("Atributo escolhido: Area\n");
        printf("%s: %.2f km2\n", nomeCidade1, area1);
        printf("%s: %.2f km2\n", nomeCidade2, area2);
        if (area1 > area2)
        printf("Resultado: %s venceu!\n", nomeCidade1);
        else if (area2 > area1)
        printf("Resultado: %s venceu!\n", nomeCidade2);
        else
        printf("Resultado: Empate!\n");
        break;

        case 3: // PIB
        printf("Atributo escolhido: PIB\n");
        printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
        printf("%s: %.2f bilhões\n", nomeCidade2, pib2);
        if (pib1 > pib2)
        printf("Resultado: %s venceu!\n", nomeCidade1);
        else if (pib2 > pib1)
        printf("Resultado: %s venceu!\n", nomeCidade2);
        else
        printf("Resultado: Empate!\n");
        break;

        case 4: // Pontos Turísticos
        printf("Atributo escolhido: Pontos Turísticos\n");
        printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
        printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2)
        printf("Resultado: %s venceu!\n", nomeCidade1);
        else if (pontosTuristicos2 > pontosTuristicos1)
        printf("Resultado: %s venceu!\n", nomeCidade2);
        else
        printf("Resultado: Empate!\n");
        break;

        case 5: // Densidade Demográfica (menor vence)
        printf("Atributo escolhido: Densidade Demográfica (menor vence)\n");
        printf("%s: %.2f hab/km2\n", nomeCidade1, densidade1);
        printf("%s: %.2f hab/km2\n", nomeCidade2, densidade2);
        if (densidade1 < densidade2)
        printf("Resultado: %s venceu!\n", nomeCidade1);
        else if (densidade2 < densidade1)
        printf("Resultado: %s venceu!\n", nomeCidade2);
        else
        printf("Resultado: Empate!\n");
        break;

        default:
        printf("Opção inválida. Por favor, escolha um número de 1 a 5.\n");
        break;
    }
            
    return 0;
}
