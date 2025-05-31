#include <stdio.h>

int main() { 
    printf("Super trunfo!\n");

    char letra = 'A';
    char codigo[8];
    char nome[20] = "Gramado";
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
    printf("Código do Estado: %s\n",codigo);
    printf("Nome da cidade: %s\npopulação: %d\n", nome, populacao);
    printf("Área da cidade: %.fkm²\nPIB: %f\n", area, PIB);
    printf("Pontos turísticos: %d\n",pontos);

    

    

    





   













    return 0;
}
