#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {


    char idCarta[10];
    char estado[3];
    char cidade[50];
    char pais[50];
    double populacao;
    double area;
    double pib;
    short pontosviagens;
    double densidade1 = populacao / area;
    double pibpercapita = pib / populacao;
    double poder = 1 / populacao + area + pib + pontosviagens + densidade1 + pibpercapita;


    //Segunda carta

    char idCarta2[10];
    char estado2[3];
    char cidade2[50];
    char pais2[50];
    double populacao2;
    double area2;
    double pib2;
    short pontosviagens2;
    double densidade2 = populacao2 / area2;
    double pibpercapita2 = pib2 / populacao2;
    double poder2 = 1 / populacao2 + area2 + pib2 + pontosviagens2 + densidade2 + pibpercapita2;

    printf("Bem-vindo ao sistema de cadastro de cartas!\n");

    printf("Digite o ID da Carta1 (máximo 9 caracteres): ");
    scanf("%s", idCarta);

    printf("Digite o estado (sigla de 2 letras): ");
    scanf("%s", estado);

    printf("Digite a cidade: ");
    scanf(" %s", cidade);
    
    printf("Digite o país: ");
    scanf(" %s", pais); 
    
    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área (em km²): ");
    scanf("%d", &area);

    printf("Digite o PIB (em R$): ");
    scanf("%d", &pib);

    printf("Digite os pontos de viagens (score): ");
    scanf("%hd", &pontosviagens);


    printf("\nCadastro realizado com sucesso!\n");

    

    printf("\nAgora, vamos cadastrar a segunda carta.\n");

    printf("Digite o ID da Carta2 (máximo 9 caracteres): ");
    scanf("%s", idCarta2);

    printf("Digite o estado (sigla de 2 letras): ");
    scanf("%s", estado2);

    printf("Digite a cidade: ");
    scanf(" %s", cidade2);
    
    printf("Digite o país: ");
    scanf(" %s", pais2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%d", &area2);

    printf("Digite o PIB (em R$): ");
    scanf("%d", &pib2);

    printf("Digite os pontos de viagens (score): ");
    scanf("%hd", &pontosviagens2);



    printf("\nCadastro realizado com sucesso!\n");



    if(populacao < populacao2){
        printf("A segunda carta tem maior população.\n");
    }else{
        printf("A primeira carta tem maior população.\n");
    }


    if (densidade1 < densidade2)
    {
        printf("A segunda carta tem maior densidade demográfica.\n");
    }
    else
    {
        printf("A primeira carta tem maior densidade demográfica.\n");
    }

    if(pib < pib2){
        printf("A segunda carta tem maior PIB.\n");
    }else{
        printf("A primeira carta tem maior PIB.\n");
    }



    if (pibpercapita < pibpercapita2)
    {
        printf("A segunda carta tem maior PIB per capita.\n");
    }
    else
    {
        printf("A primeira carta tem maior PIB per capita.\n");
    }

    if (pontosviagens < pontosviagens2)
    {
        printf("A segunda carta tem maior pontuação de viagens.\n");
    }
    else
    {
        printf("A primeira carta tem maior pontuação de viagens.\n");
    }

    if (densidade1 < densidade2)
    {
        printf("A segunda carta tem maior densidade demográfica.\n");
    }
    else
    {
        printf("A primeira carta tem maior densidade demográfica.\n");
    }

    if (pibpercapita < pibpercapita2)
    {
        printf("A segunda carta tem maior PIB per capita.\n");
    }
    else
    {
        printf("A primeira carta tem maior PIB per capita.\n");
    }

    if (pontosviagens < pontosviagens2)
    {
        printf("A segunda carta tem maior pontuação de viagens.\n");
    }
    else
    {
        printf("A primeira carta tem maior pontuação de viagens.\n");
    }

    // Comparação de Poder
    if (poder < poder2)
    {
        printf("A segunda carta tem maior poder.\n");
    }
    else
    {
        printf("A primeira carta tem maior poder.\n");
    }

    if(poder == poder2)
    {
        printf("As cartas têm o mesmo poder.\n");
    }

    if(poder < poder2)
    {
        printf("Carta 2 venceu com poder de %d.\n", poder2);
    }else{
        printf("Carta 1 venceu com poder de %d.\n", poder);
    }


    return 0;
}
