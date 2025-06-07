#include <stdio.h>

int main() { 
    printf("Super trunfo!\n");

    printf("Carta 1\n");

    char letra= 'A';
    char codigo[5]= "0A";
    char nome[20]= "Gramado";
    int populacao;
    float area;
    float PIB;
    int pontos;

    printf("Digite a Letra do seu Estado: \n");
    scanf("%c", &letra);

    printf("Digite o Código do seu Estado: \n");
    scanf("%s", codigo);

    printf("Digite o Nome da sua cidade: \n");
    scanf("%s", nome);

    printf("Digite a sua População: \n");
    scanf("%d", &populacao);

    printf("Digite a sua Área: \n");
    scanf("%f", &area);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &PIB);

    printf("Digite a sua Pontos: \n");
    scanf("%d", &pontos);

    printf("Letra do Estado: %c\n", letra);
    printf("Código do Estado: %s\n", codigo);
    printf("Nome da cidade: %s\npopulação: %d\n", nome, populacao);
    printf("Área da cidade: %.fkm²\nPIB: %f\n", area, PIB);
    printf("Pontos turísticos: %d\n", pontos);

    printf("Carta 2\n");

    char letra2= 'B';
    char codigo2[6]= "0B";
    char nome2[21]= "Santos";
    int populacao2;
    float area2;
    float PIB2;
    int pontos2;

    printf("Digite a Letra do seu Estado: \n");
    scanf("%c", &letra2);

    printf("Digite o Código do seu Estado: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da sua cidade: \n");
    scanf("%s", nome2);

    printf("Digite a sua População: \n");
    scanf("%d", &populacao2);

    printf("Digite a sua Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite a sua Pontos: \n");
    scanf("%d", &pontos2);

    printf("Letra do Estado: %c\n", letra2);
    printf("Código do Estado: %s\n", codigo2);
    printf("Nome da cidade: %s\npopulação: %d\n", nome2, populacao2);
    printf("Área da cidade: %.fkm²\nPIB: %f\n", area2, PIB2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0;



























}
  