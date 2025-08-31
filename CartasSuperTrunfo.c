#include <stdio.h>

int main (){

    // Variáveis para a carta 1
    char estado1, cod_carta1[4], cidade1[50];
    float area1, pib1;
    int populacao1, turismo1;

    // Variáveis para a carta 2
    char estado2, cod_carta2[4], cidade2[50];
    float area2, pib2;
    int populacao2, turismo2;

    // Solicita dados da primeira carta
    printf("+-------------------+\n");
    printf("|      Carta 1      |\n");
    printf("+-------------------+\n");
    printf("Digite o Estado (ex: A-H): \n");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (uma letra e dois numeros, ex: A01): \n");
    scanf(" %3s", &cod_carta1);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade1);
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    printf("Digite a area em km²: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &turismo1);

    // Solicita dados da segunda carta
    printf("+-------------------+\n");
    printf("|      Carta 2      |\n");
    printf("+-------------------+\n");
    printf("Digite o Estado (ex: A-H): \n");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (uma letra e dois numeros, ex: A01): \n");
    scanf(" %3s", &cod_carta2);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade2);
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a area em km²: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &turismo2);

    // Apresenta os dados da primeira carta
    printf("+-------------------+\n");
    printf("|      Carta 1      |\n");
    printf("+-------------------+\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", cod_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area (km²): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", turismo1);

    printf("====================================\n\n");

    // Apresenta os dados da segunda carta
    printf("+-------------------+\n");
    printf("|      Carta 2      |\n");
    printf("+-------------------+\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", cod_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area (km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);

    return 0;
}
