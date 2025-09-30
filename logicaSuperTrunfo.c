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

    
          // Menu de seleção de atributos
    int atributo1, atributo2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("\nErro: Você escolheu o mesmo atributo duas vezes.\n");
        return 1;
    }

    // Seleciona valores do atributo 1
    switch (atributo1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontosTuristicos1; valor1_c2 = pontosTuristicos2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
        case 6: valor1_c1 = pibPerCapita1; valor1_c2 = pibPerCapita2; break;
        default: printf("Atributo inválido.\n"); return 1;
    }

    // Seleciona valores do atributo 2
    switch (atributo2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontosTuristicos1; valor2_c2 = pontosTuristicos2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
        case 6: valor2_c1 = pibPerCapita1; valor2_c2 = pibPerCapita2; break;
        default: printf("Atributo inválido.\n"); return 1;
    }

    // Exibição da comparação
    printf("\n--- Comparação das Cartas ---\n");

    printf("\nAtributo 1:\n");
    printf("%s: %.2f\n", nomeCidade1, valor1_c1);
    printf("%s: %.2f\n", nomeCidade2, valor1_c2);

    if (atributo1 == 5) {
        if (valor1_c1 < valor1_c2)
            printf("Resultado: %s venceu o atributo 1\n", nomeCidade1);
        else if (valor1_c2 < valor1_c1)
            printf("Resultado: %s venceu o atributo 1\n", nomeCidade2);
        else
            printf("Resultado: Empate no atributo 1\n");
    } else {
        if (valor1_c1 > valor1_c2)
            printf("Resultado: %s venceu o atributo 1\n", nomeCidade1);
        else if (valor1_c2 > valor1_c1)
            printf("Resultado: %s venceu o atributo 1\n", nomeCidade2);
        else
            printf("Resultado: Empate no atributo 1\n");
    }
    printf("\nAtributo 2:\n");
printf("%s: %.2f\n", nomeCidade1, valor2_c1);
printf("%s: %.2f\n", nomeCidade2, valor2_c2);

if (atributo2 == 5) {
    if (valor2_c1 < valor2_c2)
        printf("Resultado: %s venceu o atributo 2\n", nomeCidade1);
    else if (valor2_c2 < valor2_c1)
        printf("Resultado: %s venceu o atributo 2\n", nomeCidade2);
    else
        printf("Resultado: Empate no atributo 2\n");
} else {
    if (valor2_c1 > valor2_c2)
        printf("Resultado: %s venceu o atributo 2\n", nomeCidade1);
    else if (valor2_c2 > valor2_c1)
        printf("Resultado: %s venceu o atributo 2\n", nomeCidade2);
    else
        printf("Resultado: Empate no atributo 2\n");
}

// Soma total dos atributos
float soma1 = valor1_c1 + valor2_c1;
float soma2 = valor1_c2 + valor2_c2;

printf("\n--- Resultado Final ---\n");
printf("Soma dos atributos:\n");
printf("%s: %.2f\n", nomeCidade1, soma1);
printf("%s: %.2f\n", nomeCidade2, soma2);

if (soma1 > soma2)
    printf("Vencedor: %s\n", nomeCidade1);
else if (soma2 > soma1)
    printf("Vencedor: %s\n", nomeCidade2);
else
    printf("Empate!\n");

    return 0;
}
