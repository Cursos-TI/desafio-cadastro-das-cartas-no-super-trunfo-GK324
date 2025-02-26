#include <stdio.h>

int main() {
    int pontosTuristicos, populacao;
    char estado[3], codigo[10], nomeDAcidade[20];
    float area, pib;

    int pontosTuristicos2, populacao2;
    char estado2[3], codigo2[10], nomeDAcidade2[20];
    float area2, pib2;

    printf("Desafio SUPER TRUNFO: \n");

    // Informações da Primeira Carta
    printf("Digite os dados da primeira carta:\n");

    printf("Ponha a SIGLA de um Estado: ");
    scanf("%s", estado);

    printf("Coloque um Código de carta - ex A01: ");
    scanf("%s", codigo);

    printf("Coloque uma Cidade: ");
    scanf("%s", nomeDAcidade);

    printf("Qual a População de sua Cidade? ");
    scanf("%d", &populacao);

    printf("Qual a Área em Km2 da sua Cidade? ");
    scanf("%f", &area);

    printf("Coloque o PIB: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Informações da Segunda Carta
    printf("\nAgora vamos para a segunda carta:\n");

    printf("Ponha a SIGLA de um Estado: ");
    scanf("%s", estado2);

    printf("Coloque um Código de carta - ex A01: ");
    scanf("%s", codigo2);

    printf("Coloque uma Cidade: ");
    scanf("%s", nomeDAcidade2);

    printf("Qual a População de sua Cidade? ");
    scanf("%d", &populacao2);

    printf("Qual a Área em Km2 da sua Cidade? ");
    scanf("%f", &area2);

    printf("Coloque o PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Duelo das cartas
    printf("DUELO DE CARTAS SUPER TRUNFO\n");

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeDAcidade);
    printf("População: %d Habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeDAcidade2);
    printf("População: %d Habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
    
}