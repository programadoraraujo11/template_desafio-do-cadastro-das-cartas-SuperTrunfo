#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível Mestre

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
    
    int resultado1 = 0, resultado2 = 0;
    int primeiroAtributo, segundoAtributo;



     // EXIBIÇÃO

     printf("***  Jogo Super Trunfo  ***\n");

     printf("=====  CARTA 1  =====\n");
     printf("Estado: %s\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Cidade: %s\n", cidade1);
     printf("População: %lu\n", populacao1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB: %.2f bilhões de reais\n", pib1);
     printf("Pontos turísticos: %d\n", pontos1);
     printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
     printf("PIB per Capita: %.11f reias\n", pibpercapita1);
     printf("Super Poder: %.2f\n", superpoder1);

     printf("=====  CARTA 2  =====\n");
     printf("Estado: %s\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Cidade: %s\n", cidade2);
     printf("População: %lu\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f bilhões de reais\n", pib2);
     printf("Pontos turísticos: %d\n", pontos2);
     printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
     printf("PIB per Capita: %.11f reias\n", pibpercapita2);
     printf("Super Poder: %.2f\n", superpoder2);


    // MENU


     printf("***  Jogo Super Trunfo  ***\n");

     printf("Escolha o primeiro atributo: \n");
     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("Escolha a comparação: ");
     scanf("%d", &primeiroAtributo);
     


     switch (primeiroAtributo)
     {
     case 1:
        printf("Atributo escolhido: População\n");
        printf("%s: %lu\n", cidade1,populacao1);
        printf("%s: %lu\n", cidade2, populacao2);
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;

        case 2:
        printf("Atributo escolhido: Área\n");
        printf("%s: %.2f\n", cidade1, area1);
        printf("%s: %.2f\n", cidade2, area2);
        resultado1 = area1 > area2 ? 1 : 0;
        break;

        case 3:
        printf("Atributo escolhido: PIB\n");
        printf("%s: %.2f\n", cidade1, pib1);
        printf("%s: %.2f\n", cidade2, pib2);
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;

        default:
          printf("Opção de jogo inválida.\n");
          break;
          return 0;

     }

     printf("Escolha o segundo atributo: \n");
     printf("ATENÇÃO: VOCÊ DEVE ESCOLHER UM ATRIBUTO DIFERENTE DO PRIMEIRO.\n");
     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("Escolha a comparação: ");
     scanf("%d", &segundoAtributo);
     

     if (primeiroAtributo == segundoAtributo)
     {
        printf("Você escolheu o mesmo atributo!\n");
        return 0;
    } 

     switch (segundoAtributo)
     {
      case 1:
        printf("Atributo escolhido: População\n");
        printf("%s: %lu\n", cidade1,populacao1);
        printf("%s: %lu\n", cidade2, populacao2);
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;

        case 2:
        printf("Atributo escolhido: Área\n");
        printf("%s: %.2f\n", cidade1, area1);
        printf("%s: %.2f\n", cidade2, area2);
        resultado2 = area1 > area2 ? 1 : 0;
        break;

        case 3:
        printf("Atributo escolhido: PIB\n");
        printf("%s: %.2f\n", cidade1, pib1);
        printf("%s: %.2f\n", cidade2, pib2);
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;

        default:
          printf("Opção de jogo inválida.\n");
          return 0;

     }
     
     if (resultado1 && resultado2)
        {
           printf("Parabéns você venceu!\n");
        } else if (resultado1 != resultado2)
        {
            printf("Empatou!\n");
        } else {
            printf("Infelizmente, você perdeu!\n");
        }
    

    
    return 0;
  }