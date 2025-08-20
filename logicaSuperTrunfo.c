#include <stdio.h>

#include <stdio.h>

int main() {
    // Carta 1
    char Estado1;
    char Codigo1[10];
    char Nome1[50];
    unsigned long int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;

    // Carta 2
    char Estado2;
    char Codigo2[10];
    char Nome2[50];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;

    // Cadastrar Carta 1
    printf("\n=====Cadastro da Carta 1:=====\n");
    printf("Digite o Estado de (A-H):\n");
    scanf(" %c", &Estado1);

    printf(" Digite o Codigo da carta:\n");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", Nome1);

    printf("Digite o total da Populacao:\n");
    scanf("%lu", &Populacao1);

    printf("Digite o tamanho da Area da cidade e km²:\n");
    scanf("%f", &Area1);

    printf("Digite o PIB em bilhoes:\n");
    scanf("%f", &PIB1);

    printf("Digite o mumero de pontos turisticos:\n");
    scanf("%d", &PontosTuristicos1);

    // Cadastrar Carta 2
    printf("\n ===== Cadastro da Carta 2: ===== \n");
    printf("Digite o Estado de (A-H):\n");
    scanf(" %c", &Estado2);

    printf("Digite o Codigo da carta:\n");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", Nome2);

    printf("Digite o total da Populacao:\n");
    scanf("%lu", &Populacao2);

    printf("Digite o tamanho da Area da cidade e km²:\n");
    scanf("%f", &Area2);

    printf("Digite o PIB em bilhoes:\n");
    scanf("%f", &PIB2);

    printf("Digite o mumero de pontos turisticos\n");
    scanf("%d", &PontosTuristicos2);

    // Calculos
    float Densidade1 = (float) Populacao1 / Area1;
    float Densidade2 = (float) Populacao2 / Area2;

    float PIBpercapita1 = (PIB1 * 1000000000.0) / Populacao1;
    float PIBpercapita2 = (PIB2 * 1000000000.0) / Populacao2;

    float Superpoder1 = Populacao1 + Area1 + PIB1 + PIBpercapita1 + PontosTuristicos1;
    float Superpoder2 = Populacao2 + Area2 + PIB2 + PIBpercapita2 + PontosTuristicos2;

    // Escolha de atributos
    int atributo1, atributo2;

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo para comparar:\n");
    scanf("%d", &atributo2);

    // Evita que o mesmo atributo seja escolhido duas vezes
    if (atributo1 == atributo2) {
        printf("Voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;

    // Primeiro atributo
    switch (atributo1) {
        case 1: {
            valor1_carta1 = Populacao1;
            valor1_carta2 = Populacao2;
            break;
        }
        case 2: {
            valor1_carta1 = Area1;
            valor1_carta2 = Area2;
            break;
        }
        case 3: {
            valor1_carta1 = PIB1;
            valor1_carta2 = PIB2;
            break;
        }
        case 4: {
            valor1_carta1 = PontosTuristicos1;
            valor1_carta2 = PontosTuristicos2;
            break;
        }
        case 5: {
            valor1_carta1 = Densidade1;
            valor1_carta2 = Densidade2;
            break;
        }
        case 6: {
            valor1_carta1 = PIBpercapita1;
            valor1_carta2 = PIBpercapita2;
            break;
        }
        case 7: {
            valor1_carta1 = Superpoder1;
            valor1_carta2 = Superpoder2;
            break;
        }
        default: {
            printf("Opcao invalida!\n");
            return 0;
        }
    }

    // Segundo atributo
    switch (atributo2) {
        case 1: {
            valor2_carta1 = Populacao1;
            valor2_carta2 = Populacao2;
            break;
        }
        case 2: {
            valor2_carta1 = Area1;
            valor2_carta2 = Area2;
            break;
        }
        case 3: {
            valor2_carta1 = PIB1;
            valor2_carta2 = PIB2;
            break;
        }
        case 4: {
            valor2_carta1 = PontosTuristicos1;
            valor2_carta2 = PontosTuristicos2;
            break;
        }
        case 5: {
            valor2_carta1 = Densidade1;
            valor2_carta2 = Densidade2;
            break;
        }
        case 6: {
            valor2_carta1 = PIBpercapita1;
            valor2_carta2 = PIBpercapita2;
            break;
        }
        case 7: {
            valor2_carta1 = Superpoder1;
            valor2_carta2 = Superpoder2;
            break;
        }
        default: {
            printf("Opcao invalida!\n");
            return 0;
        }
    }

    // Resultado
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\nResultado da comparacao:\n");
    printf("Carta 1 (%s): %.2f + %.2f = %.2f\n", Nome1, valor1_carta1, valor2_carta1, soma1);
    printf("Carta 2 (%s): %.2f + %.2f = %.2f\n", Nome2, valor1_carta2, valor2_carta2, soma2);

    if (soma1 > soma2) {
        printf("\nCarta 1 venceu!\n");
    } else if (soma2 > soma1) {
        printf("\nCarta 2 venceu!\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}