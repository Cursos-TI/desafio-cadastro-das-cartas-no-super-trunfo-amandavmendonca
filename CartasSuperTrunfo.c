#include <stdio.h>

int main()
{

    // Variáveis

    char codCarta[3], codCarta2[3];
    int numPonTuris, numPonTuris2;
    float area, pib, area2, pib2, densiPop, densiPop2, pibPerC, pibPerC2, superpoder, superpoder2;
    unsigned long int populacao, populacao2;
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
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

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
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    setbuf(stdin, 0);
    // Calculo Densidade Populacional

    densiPop = populacao / area;
    densiPop2 = populacao2 / area2;

    // Calculo PIB Per Capita

    pibPerC = pib / populacao;
    pibPerC2 = pib2 / populacao2;

    // Calculo Super Poder

    superpoder = populacao + area + pib + pibPerC + (1 / densiPop);
    superpoder2 = populacao2 + area2 + pib2 + pibPerC2 + (1 / densiPop2);
    /*
        // Saída de dados carta 1

        printf("\nCódigo Carta 1: %s\nNúmero da População: %i\nPontos turísticos: %i\nÁrea: %f\nPIB: %f\n",
               codCarta, populacao, numPonTuris, area, pib);
        printf("Densidade populacional: %f\nPIB Per Capita: %f\n", densiPop, pibPerC);
        printf("Super Poder: %f", superpoder);

        // Saída de dados carta 2

        printf("\nCódigo Carta 2: %s\nNúmero da População: %i\nPontos turísticos: %i\nÁrea: %f\nPIB: %f\n",
               codCarta2, populacao2, numPonTuris2, area2, pib2);
        printf("Densidade populacional: %f\nPIB Per Capita: %f\n", densiPop2, pibPerC2);
        printf("Super Poder: %f", superpoder2);
    */
    if (superpoder > superpoder2)
    {
        printf("\nCódigo Carta 1:\nNúmero da População: %i\nPontos turísticos: %i\nÁrea: %f\nPIB: %f\n",
               codCarta, populacao, numPonTuris, area, pib);
        printf("Densidade populacional: %f\nPIB Per Capita: %f\n", densiPop, pibPerC);
        printf("Super Poder: %f\n", superpoder);
        printf("\nCódigo Carta 2:\nNúmero da População: %i\nPontos turísticos: %i\nÁrea: %f\nPIB: %f\n",
               codCarta2, populacao2, numPonTuris2, area2, pib2);
        printf("Densidade populacional: %f\nPIB Per Capita: %f\n", densiPop2, pibPerC2);
        printf("Super Poder: %f\n", superpoder2);
        printf("1 - Carta 1 venceu!");
    }
    else if (superpoder < superpoder2)
    {
        printf("\nCódigo Carta 1:\nNúmero da População: %i\nPontos turísticos: %i\nÁrea: %f\nPIB: %f\n",
               codCarta, populacao, numPonTuris, area, pib);
        printf("Densidade populacional: %f\nPIB Per Capita: %f\n", densiPop, pibPerC);
        printf("Super Poder: %f\n", superpoder);
        printf("\nCódigo Carta 2:\nNúmero da População: %i\nPontos turísticos: %i\nÁrea: %f\nPIB: %f\n",
               codCarta2, populacao2, numPonTuris2, area2, pib2);
        printf("Densidade populacional: %f\nPIB Per Capita: %f\n", densiPop2, pibPerC2);
        printf("Super Poder: %f\n", superpoder2);
        printf("0 - Carta 2 venceu!");
    }
    else if (superpoder == superpoder2)
    {
        printf("Empate!");
    }

    return 0;
}
