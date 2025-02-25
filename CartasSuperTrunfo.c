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



return 0;

}