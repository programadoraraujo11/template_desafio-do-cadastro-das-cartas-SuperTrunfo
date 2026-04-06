#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível intermediário

      // Área para definição das variáveis para armazenar as propriedades das cidades
  int main(){   
     //Carta 1
    char estado1[50] = "São Paulo";
    char codigo1[10] = "A01"; 
    char cidade1[50] = "São Paulo";
    
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;

    float densidadepopulacional1 = (float) populacao1 / area1;
    float pibpercapita1 = pib1 / populacao1;

    

     //Carta 2
    char estado2[50] = "Rio de Janeiro";
    char codigo2[10] = "B02"; 
    char cidade2[50] = "Rio de Janeiro";

    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos2 = 30;

    float densidadepopulacional2 = (float) populacao2/ area2;
    float pibpercapita2 = pib2 / populacao2;

    // SUPER PODER
    float superpoder1 = populacao1 + area1 + pib1 + pontos1 + pibpercapita1 + (1.0 / densidadepopulacional1);
    float superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibpercapita2 + (1.0 / densidadepopulacional2);
    
    int opcao;

    // MENU


     printf("***  Jogo Super Trunfo  ***\n");

     printf("Escolha o atributo para comparar: \n");
     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("4. Pontos Turísticos\n");
     printf("5. Densidade Populacional\n");
     printf("Opção: ");
     scanf("%d", &opcao);
     

     printf("\n=====  Resultado  =====\n");
     printf("Carta 1: %s\n", estado1);
     printf("Carta 2: %s\n", estado2);

     switch (opcao)
     {
     case 1:
        printf("Atributo escolhido: População\n");
        printf("%s: %lu\n", estado1, populacao1);
        printf("%s: %lu\n", estado2, populacao2);

        if (populacao1 > populacao2)
        {
           printf("Vencedor: %s\n", estado1);
        } else if (populacao2 > populacao1)
        {
            printf("Vencedor: %s\n", estado2);
        } else {
            printf("Empate!\n");
        }
        break;

        case 2:
        printf("Atributo escolhido: Área\n");
        printf("%s: %.2f\n", estado1, area1);
        printf("%s: %.2f\n", estado2, area2);

        if (area1 > area2)
        {
           printf("Vencedor: %s\n", estado1);
        } else if (area2 > area1)
        {
            printf("Vencedor: %s\n", estado2);
        } else {
            printf("Empate!\n");
        }
        break;

        case 3:
        printf("Atributo escolhido: PIB\n");
        printf("%s: %.2f\n", estado1, pib1);
        printf("%s: %.2f\n", estado2, pib2);

        if (pib1 > pib2)
        {
           printf("Vencedor: %s\n", estado1);
        } else if (pib2 > pib1)
        {
            printf("Vencedor: %s\n", estado2);
        } else {
            printf("Empate!\n");
        }
        break;
     
        case 4:
        printf("Atributo escolhido: Pontos Turísticos\n");
        printf("%s: %d\n", estado1, pontos1);
        printf("%s: %d\n", estado2, pontos2);

        if (pontos1 > pontos2)
        {
           printf("Vencedor: %s\n", estado1);
        } else if (pontos2 > pontos1)
        {
            printf("Vencedor: %s\n", estado2);
        } else {
            printf("Empate!\n");
        }
        break;

        case 5:
        printf("Atributo escolhido: Densidade populacional\n");
        printf("%s: %.2f\n", estado1, densidadepopulacional1);
        printf("%s: %.2f\n", estado2, densidadepopulacional2);

        if (densidadepopulacional1 < densidadepopulacional2)
        {
           printf("Vencedor: %s\n", estado1);
        } else if (densidadepopulacional2 < densidadepopulacional1)
        {
            printf("Vencedor: %s\n", estado2);
        } else {
            printf("Empate!\n");
        }
        break;

     default:

       printf("Opção inválida!\n");
        break;
     }

    
    return 0;
  }