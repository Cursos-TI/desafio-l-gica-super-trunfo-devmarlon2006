#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta
    char idCarta1[10];
    char estado1[3];
    char cidade1[50];
    char pais1[50];
    double populacao1;
    double area1;
    double pib1;
    short pontosviagens1;
    double densidade1;
    double pibpercapita1;

    // Declaração de variáveis para a segunda carta
    char idCarta2[10];
    char estado2[3];
    char cidade2[50];
    char pais2[50];
    double populacao2;
    double area2;
    double pib2;
    short pontosviagens2;
    double densidade2;
    double pibpercapita2;

    printf("Bem-vindo ao sistema de cadastro e comparacao de cartas!\n\n");

    // --- CADASTRO DA PRIMEIRA CARTA ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o ID da Carta 1 (maximo 9 caracteres): ");
    scanf("%s", idCarta1);
    printf("Digite o estado (sigla de 2 letras): ");
    scanf("%s", estado1);
    printf("Digite a cidade: ");
    scanf(" %s", cidade1);
    printf("Digite o pais: ");
    scanf(" %s", pais1);
    printf("Digite a populacao: ");
    scanf("%lf", &populacao1);
    printf("Digite a area (em km²): ");
    scanf("%lf", &area1);
    printf("Digite o PIB (em R$): ");
    scanf("%lf", &pib1);
    printf("Digite os pontos de viagens (score): ");
    scanf("%hd", &pontosviagens1);

    // Cálculos para a Carta 1
    if (area1 > 0) {
        densidade1 = populacao1 / area1;
    } else {
        densidade1 = 0; // Evita divisão por zero
    }
    if (populacao1 > 0) {
        pibpercapita1 = pib1 / populacao1;
    } else {
        pibpercapita1 = 0; // Evita divisão por zero
    }
    printf("\nCadastro da Carta 1 realizado com sucesso!\n\n");
    
    // Pressione qualquer tecla para continuar...
    printf("Pressione qualquer tecla para continuar para a proxima carta...\n");
    char press[2]; // Use um array um pouco maior para evitar overflow
    scanf("%s", press);
    
    // --- CADASTRO DA SEGUNDA CARTA ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o ID da Carta 2 (maximo 9 caracteres): ");
    scanf("%s", idCarta2);
    printf("Digite o estado (sigla de 2 letras): ");
    scanf("%s", estado2);
    printf("Digite a cidade: ");
    scanf(" %s", cidade2);
    printf("Digite o pais: ");
    scanf(" %s", pais2);
    printf("Digite a populacao: ");
    scanf("%lf", &populacao2);
    printf("Digite a area (em km²): ");
    scanf("%lf", &area2);
    printf("Digite o PIB (em R$): ");
    scanf("%lf", &pib2);
    printf("Digite os pontos de viagens (score): ");
    scanf("%hd", &pontosviagens2);

    // Cálculos para a Carta 2
    if (area2 > 0) {
        densidade2 = populacao2 / area2;
    } else {
        densidade2 = 0; // Evita divisão por zero
    }
    if (populacao2 > 0) {
        pibpercapita2 = pib2 / populacao2;
    } else {
        pibpercapita2 = 0; // Evita divisão por zero
    }
    printf("\nCadastro da Carta 2 realizado com sucesso!\n\n");
    
    // --- EXIBIÇÃO DOS DADOS ---
    printf("--- Dados das Cartas ---\n\n");

    printf("Carta 1: %s\n", idCarta1);
    printf("Cidade: %s, %s - %s\n", cidade1, estado1, pais1);
    printf("Populacao: %.0f\n", populacao1);
    printf("Area: %.0f km²\n", area1);
    printf("PIB: %.0f\n", pib1);
    printf("Pontos de Viagens: %hd\n", pontosviagens1);
    printf("Densidade Demografica: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n\n", pibpercapita1);

    printf("Carta 2: %s\n", idCarta2);
    printf("Cidade: %s, %s - %s\n", cidade2, estado2, pais2);
    printf("Populacao: %.0f\n", populacao2);
    printf("Area: %.0f km²\n", area2);
    printf("PIB: %.0f\n", pib2);
    printf("Pontos de Viagens: %hd\n", pontosviagens2);
    printf("Densidade Demografica: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n\n", pibpercapita2);

    // --- COMPARAÇÕES (LÓGICA DO JOGO) ---
    printf("--- Resultado das Comparacoes ---\n\n");
    
    // População
    if (populacao1 > populacao2) {
        printf("A Carta 1 tem maior populacao.\n");
    } else if (populacao2 > populacao1) {
        printf("A Carta 2 tem maior populacao.\n");
    } else {
        printf("As cartas tem a mesma populacao.\n");
    }

    // Área
    if (area1 > area2) {
        printf("A Carta 1 tem maior area.\n");
    } else if (area2 > area1) {
        printf("A Carta 2 tem maior area.\n");
    } else {
        printf("As cartas tem a mesma area.\n");
    }
    
    // PIB
    if (pib1 > pib2) {
        printf("A Carta 1 tem maior PIB.\n");
    } else if (pib2 > pib1) {
        printf("A Carta 2 tem maior PIB.\n");
    } else {
        printf("As cartas tem o mesmo PIB.\n");
    }

    // Densidade Demográfica
    if (densidade1 > densidade2) {
        printf("A Carta 1 tem maior densidade demografica.\n");
    } else if (densidade2 > densidade1) {
        printf("A Carta 2 tem maior densidade demografica.\n");
    } else {
        printf("As cartas tem a mesma densidade demografica.\n");
    }

    // PIB per Capita
    if (pibpercapita1 > pibpercapita2) {
        printf("A Carta 1 tem maior PIB per capita.\n");
    } else if (pibpercapita2 > pibpercapita1) {
        printf("A Carta 2 tem maior PIB per capita.\n");
    } else {
        printf("As cartas tem o mesmo PIB per capita.\n");
    }

    // Pontos de Viagens
    if (pontosviagens1 > pontosviagens2) {
        printf("A Carta 1 tem maior pontuacao de viagens.\n");
    } else if (pontosviagens2 > pontosviagens1) {
        printf("A Carta 2 tem maior pontuacao de viagens.\n");
    } else {
        printf("As cartas tem a mesma pontuacao de viagens.\n");
    }

    return 0;
}
