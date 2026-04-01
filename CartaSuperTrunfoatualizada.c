#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

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

     // COMPARAÇÃO

     printf("\n=====  COMPARAÇÃO  =====\n");
      
     if (populacao1 > populacao2) {
    
        printf("População: Carta 1 - São Paulo(SP): %lu \n", populacao1);
        printf("População: Carta 2 - Rio de Janeiro(RJ): %lu \n", populacao2);
        printf("Resultado: Carta 1 venceu!\n");
     
      } else { 
         printf("População: Carta 1 - São Paulo(SP): %lu \n", populacao1);
        printf("População: Carta 2 - Rio de Janeiro(RJ): %lu \n", populacao2);
        printf("Resultado: Carta 2 venceu!\n");
      } 

         if (area1 > area2) {
    
        printf("Área: Carta 1 - São Paulo(SP): %.2f km² \n", area1);
        printf("Área: Carta 2 - Rio de Janeiro(RJ): %.2f km² \n", area2);
        printf("Resultado: Carta 1 venceu!\n");
     
      } else { 
         printf("Área: Carta 1 - São Paulo(SP): %.2f km² \n", area1);
        printf("Área: Carta 2 - Rio de Janeiro(RJ): %.2f km² \n", area2);
        printf("Resultado: Carta 2 venceu!\n");

      } 
        
          if (pib1 > pib2) {
    
        printf("PIB: Carta 1 - São Paulo(SP): %.2f bilhões de reais \n", pib1);
        printf("PIB: Carta 2 - Rio de Janeiro(RJ): %.2f bilhões de reais\n", pib2);
        printf("Resultado: Carta 1 venceu!\n");
     
      } else { 
         printf("PIB: Carta 1 - São Paulo(SP): %.2f bilhões de reais \n", pib1);
        printf("PIB: Carta 2 - Rio de Janeiro(RJ): %.2f bilhões de reais \n", pib2);
        printf("Resultado: Carta 2 venceu!\n");
        
      } 

      if (pontos1 > pontos2) {
    
        printf("Pontos turísticos: Carta 1 - São Paulo(SP): %d \n", pontos1);
        printf("Pontos turísticos: Carta 2 - Rio de Janeiro(RJ): %d \n", pontos2);
        printf("Resultado: Carta 1 venceu!\n");
     
      } else { 
         printf("Pontos turísticos: Carta 1 - São Paulo(SP): %d \n",pontos1);
        printf("Pontos turísticos: Carta 2 - Rio de Janeiro(RJ): %d \n", pontos2);
        printf("Resultado: Carta 2 venceu!\n");
      } 

      if (densidadepopulacional1 < densidadepopulacional2) {
    
        printf("Densidade populacional: Carta 1 - São Paulo(SP): %.2f \n", densidadepopulacional1);
        printf("Densidade populacional: Carta 2 - Rio de Janeiro(RJ): %.2f \n", densidadepopulacional2);
        printf("Resultado: Carta 1 venceu!\n");
     
      } else { 
         printf("Densidade populacional: Carta 1 - São Paulo(SP): %.2f \n", densidadepopulacional1);
        printf("Densidade populacional: Carta 2 - Rio de Janeiro(RJ): %.2f \n", densidadepopulacional2);
        printf("Resultado: Carta 2 venceu!\n");

      } 

      if (pibpercapita1 > pibpercapita2) {
    
        printf("PIB per capita: Carta 1 - São Paulo(SP): %.11f reais \n", pibpercapita1);
        printf("PIB per capita: Carta 2 - Rio de Janeiro(RJ): %.11f reais\n", pibpercapita2);
        printf("Resultado: Carta 1 venceu!\n");
     
      } else { 
         printf("PIB per capita: Carta 1 - São Paulo(SP): %.11f reais \n", pibpercapita1);
        printf("PIB per capita: Carta 2 - Rio de Janeiro(RJ): %.11f reais \n", pibpercapita2);
        printf("Resultado: Carta 2 venceu!\n");
        
      } 

       if (superpoder1 > superpoder2) {
    
        printf("Super poder: Carta 1 - São Paulo(SP): %.2f \n", superpoder1);
        printf("Super poder: Carta 2 - Rio de Janeiro(RJ): %.2f \n", superpoder2);
        printf("Resultado: Carta 1 venceu!\n");
     
      } else { 
         printf("Super poder: Carta 1 - São Paulo(SP): %.2f \n", superpoder1);
        printf("Super poder: Carta 2 - Rio de Janeiro(RJ): %.2f \n", superpoder2);
        printf("Resultado: Carta 2 venceu!\n");

      } 


   

    return 0;
  }