#include <stdio.h>

int main() {
    int pontosTuristicos;
    int populacao;
    char estado;
    char codigo[5];
    char nomeDAcidade[20];
    float area;
    float pib;

    int pontosTuristicos2;
    int populacao2;
    char estado2;
    char codigo2[5];
    char nomeDAcidade2[20];
    float area2;
    float pib2;
// *Informação da Primeira e Segunda Carta "Celandia" e "Samambaia"

    printf("Desafio SUPER TRUNFO: \n");
    printf("Escolha um ESTADO: \n");
    scanf("%s", &estado);
    
    printf("Coloque um Codigo de carta ex A01: ");
    scanf("%s", &codigo);
    
    printf("Coloque uma Cidade: ");
    scanf("%s", nomeDAcidade);
    
    printf("Qual a População de sua Cidade? ");
    scanf("%d", &populacao);
    
    printf("Qual a Área em Km2 da sua Cidade? ");
    scanf("%f", &area);
    
    printf("Coloque o PIB: ");
    scanf("%f", &pib );
    
    printf("Números de Pontos Turistícos: ");
    scanf("%d", &pontosTuristicos );
// Informações da Primeira Carta

    printf("\nAgora vamos para a segunda carta: \n");
    printf("Escolha um ESTADO: \n");
    scanf("%s", &estado2);
    
    printf("Coloque um Codigo de carta ex A01: ");
    scanf("%s", &codigo2);
    
    printf("Coloque uma Cidade: ");
    scanf("%s", nomeDAcidade2);
    
    printf("Qual a População de sua Cidade? ");
    scanf("%d", &populacao2);
    
    printf("Qual a Área em Km2 da sua Cidade? ");
    scanf("%f", &area2);
    
    printf("Coloque o PIB: ");
    scanf("%f", &pib2);
    
    printf("Números de Pontos Turistícos: ");
    scanf("%d", &pontosTuristicos2);
// Informações da Primeira Carta

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeDAcidade);
    printf("Área: %2.f em km2", area);
    printf("PIB: %.2f Bilhões \n", pib);
    printf("Número de Pontos Turísticos: %d\n",pontosTuristicos);
    
// Informações da Segunda Carta
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeDAcidade2);
    printf("Área: %2.f em km2", area2);
    printf("PIB: %.2f Bilhões \n", pib2);
    printf("Número de Pontos Turísticos: %d\n",pontosTuristicos2);
// Informações das cartas


return 0;

}