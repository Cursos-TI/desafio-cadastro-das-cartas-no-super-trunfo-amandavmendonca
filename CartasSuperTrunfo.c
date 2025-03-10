#include <stdio.h>

int main()
{

    // Variáveis

    char codCarta[3], codCarta2[3];
    int populacao, numPonTuris, populacao2, numPonTuris2;
    float area, pib, area2, pib2, densiPop, densiPop2, pibPerC, pibPerC2;

    // Coleta de dados carta 1

    printf("Super Trunfo - Países\n");
    printf("Digite o código da carta 1: ");
    scanf("%s", codCarta);
    printf("Digite o número da população: ");
    scanf("%i", &populacao);
    printf("Digite o número de pontos turísticos: ");
    scanf("%i", &numPonTuris);
    printf("Digite a área da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    // Coleta de dados carta 2

    printf("\nDigite o código da carta 2: ");
    scanf("%s", codCarta2);
    printf("Digite o número da população: ");
    scanf("%i", &populacao2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%i", &numPonTuris2);
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    densiPop = populacao / area;
    densiPop2 = populacao2 / area2;

    pibPerC = pib / populacao;
    pibPerC2 = pib2 / populacao2;

    // Saída de dados carta 1

    printf("\nCódigo Carta 1: %s\nNúmero da População: %i\nPontos turísticos: %i\nÁrea: %f\nPIB: %f\n",
           codCarta, populacao, numPonTuris, area, pib);
    printf("Densidade populacional: %f\nPIB Per Capita: %f\n", densiPop, pibPerC);

    // Saída de dados carta 2

    printf("\nCódigo Carta 2: %s\nNúmero da População: %i\nPontos turísticos: %i\nÁrea: %f\nPIB: %f\n",
           codCarta2, populacao2, numPonTuris2, area2, pib2);
    printf("Densidade populacional: %f\nPIB Per Capita: %f\n", densiPop2, pibPerC2);
    return 0;
}
