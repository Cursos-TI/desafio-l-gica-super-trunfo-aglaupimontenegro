#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado1, Estado2;
    char Codigo1[4], Codigo2[4];
    char NomedaCidade1[50], NomedaCidade2[50];
    int Populacao1, Populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIBperCapita1, PIBperCapita2;
    float Superpoder1, Superpoder2;

// Área para entrada de dados
    printf("\n***CARTA 1***\n");
    printf("Estado (A-H): ");
    scanf(" %c", &Estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%3s", Codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", NomedaCidade1);
    printf("Populacao: ");
    scanf("%d", &Populacao1);
    printf("Area (em km2): ");
    scanf("%f", &area1);
    printf("PIB (em milhoes): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    DensidadePopulacional1 = (float) Populacao1 / area1;
    PIBperCapita1 = pib1 / (float) Populacao1;
    Superpoder1 = Populacao1 + area1 + pib1 + pontosTuristicos1 + PIBperCapita1 + (1 / DensidadePopulacional1);

    printf("\n***CARTA 2***\n");
    printf("Estado (A-H): ");
    scanf(" %c", &Estado2);
    printf("Codigo da Carta (ex: B01): ");
    scanf("%3s", Codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", NomedaCidade2);
    printf("Populacao: ");
    scanf("%d", &Populacao2);
    printf("Area (em km2): ");
    scanf("%f", &area2);
    printf("PIB (em milhoes): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
 
    DensidadePopulacional2 = (float) Populacao2 / area2;
    PIBperCapita2 = pib2 / (float) Populacao2;
    Superpoder2 = Populacao2 + area2 + pib2 + pontosTuristicos2 + PIBperCapita2 + (1 / DensidadePopulacional2);

// Área para exibição dos dados da cidade
    printf("\n***CARTA 1***\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo da Carta: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", NomedaCidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f milhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f\n", PIBperCapita1);
    printf("Super Poder: %.2f\n", Superpoder1);

    printf("\n***CARTA 2***\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo da Carta: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomedaCidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f milhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f\n", PIBperCapita2);
    printf("Super Poder: %.2f\n", Superpoder2);

// Para cálculo do resultado (todos os atributos)
    /*int pontos1 = 0;
    int pontos2 = 0;

// Área para comparação de cartas
    printf("\n***COMPARAÇÃO DE CARTAS***\n");

    printf("\nPopulacao:\n");
    printf("Carta 1 - %s (%c): %d\n", NomedaCidade1, Estado1, Populacao1);
    printf("Carta 2 - %s (%c): %d\n", NomedaCidade2, Estado2, Populacao2);

    if (Populacao1 > Populacao2) {
        pontos1++;
    } else if (Populacao2 > Populacao1) {
        pontos2++;
    } 

    printf("\nArea:\n");
    printf("Carta 1 - %s (%c): %.2f\n", NomedaCidade1, Estado1, area1);
    printf("Carta 2 - %s (%c): %.2f\n", NomedaCidade2, Estado2, area2);
    
    if (area1 > area2) {
        pontos1++;
    } else if (area2 > area1) {
        pontos2++;
    }

    printf("\nPIB:\n");
    printf("Carta 1 - %s (%c): %.2f\n", NomedaCidade1, Estado1, pib1);
    printf("Carta 2 - %s (%c): %.2f\n", NomedaCidade2, Estado2, pib2);

    if (pib1 > pib2) {
        pontos1++;
    } else if (pib2 > pib1) {
        pontos2++;
    }

    printf("\nPIB per Capita:\n");
    printf("Carta 1 - %s (%c): %.2f\n", NomedaCidade1, Estado1, PIBperCapita1);
    printf("Carta 2 - %s (%c): %.2f\n", NomedaCidade2, Estado2, PIBperCapita2);

    if (PIBperCapita1 > PIBperCapita2) {
        pontos1++;
    } else if (PIBperCapita2 > PIBperCapita1) {
        pontos2++;
    }

    printf("\nDensidade Populacional:\n");
    printf("Carta 1 - %s (%c): %.2f\n", NomedaCidade1, Estado1, DensidadePopulacional1);
    printf("Carta 2 - %s (%c): %.2f\n", NomedaCidade2, Estado2, DensidadePopulacional2);

    if (DensidadePopulacional1 < DensidadePopulacional2) {
        pontos1++;
    } else if (DensidadePopulacional2 < DensidadePopulacional1) {
        pontos2++;
    }

// Exibição dos Resultados
    printf("\n***RESULTADO FINAL***\n");

    printf("Carta 1 - %s (%c): %d pontos\n", NomedaCidade1, Estado1, pontos1);
    printf("Carta 2 - %s (%c): %d pontos\n", NomedaCidade2, Estado2, pontos2);

    if (pontos1 > pontos2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", NomedaCidade1);
    } else if (pontos2 > pontos1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", NomedaCidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }*/
    
// Menu interativo
        int opcao;

        printf("\nEscolha o atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

            switch (opcao)
            {
            case 1:
                printf("\nComparando População:\n");
                printf("%s: %d\n", NomedaCidade1, Populacao1);
                printf("%s: %d\n", NomedaCidade2, Populacao2);

                    if (Populacao1 > Populacao2) {
                        printf("Vencedor: %s\n", NomedaCidade1);
                    } else if (Populacao2 > Populacao1) {
                        printf("Vencedor: %s\n", NomedaCidade2);
                    } else {
                        printf("Empate!\n");
                    }
                break;

            case 2:
                printf("\nComparando Área:\n");
                printf("%s: %.2f km2\n", NomedaCidade1, area1);
                printf("%s: %.2f km2\n", NomedaCidade2, area2);

                    if (area1 > area2) {
                        printf("Vencedor: %s\n", NomedaCidade1);
                    } else if (area2 > area1) {
                        printf("Vencedor: %s\n", NomedaCidade2);
                    } else {
                        printf("Empate!\n");
                    }
                break;
            case 3:
                printf("\nComparando PIB:\n");
                printf("%s: %.2f milhoes\n", NomedaCidade1, pib1);
                printf("%s: %.2f milhoes\n", NomedaCidade2, pib2);

                    if (pib1 > pib2) {
                        printf("Vencedor: %s\n", NomedaCidade1);
                    } else if (pib2 > pib1) {
                        printf("Vencedor: %s\n", NomedaCidade2);
                    } else {
                        printf("Empate!\n");
                    }
                break;

            case 4:
                printf("\nComparando Pontos Turísticos:\n");
                printf("%s: %d\n", NomedaCidade1, pontosTuristicos1);
                printf("%s: %d\n", NomedaCidade2, pontosTuristicos2);

                    if (pontosTuristicos1 > pontosTuristicos2) {
                        printf("Vencedor: %s\n", NomedaCidade1);
                    } else if (pontosTuristicos2 > pontosTuristicos1) {
                        printf("Vencedor: %s\n", NomedaCidade2);
                    } else {
                        printf("Empate!\n");
                    }
                break;

            case 5:
                printf("\nComparando Densidade Demografica:\n");
                printf("%s: %.2f\n", NomedaCidade1, DensidadePopulacional1);
                printf("%s: %.2f\n", NomedaCidade2, DensidadePopulacional2);

                    if (DensidadePopulacional1 < DensidadePopulacional2) {
                        printf("Vencedor: %s\n", NomedaCidade1);
                    } else if (DensidadePopulacional2 < DensidadePopulacional1) {
                        printf("Vencedor: %s\n", NomedaCidade2);
                    } else {
                        printf("Empate!\n");
                    }
                break;
            
            default:
                printf("Opcao invalida!\n");
                break;
            }

    return 0;
}
