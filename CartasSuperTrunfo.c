#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

      // Área para definição das variáveis para armazenar as propriedades das cidades
  int main(){ 
    char estado[50];
    char código[10]; 
    char nomedaCidade[50];
    int população;
    float área;
    float Pib;
    int pontos;
    

       // Área para entrada de dados
     printf("Digite o Estado: \n");
     scanf("%s", &estado);

     printf("Digite o código: \n");
     scanf("%s", &código);

     printf("Digite o nome da Cidade: \n");
     scanf("%s", &nomedaCidade);

     printf("Digite a população: \n");
     scanf("%d", &população);

     printf("Digite a área: \n");
     scanf("%f", &área);

     printf("Digite o Pib: \n");
     scanf("%f", &Pib);

     printf("Digite o número de pontos turísticos: \n");
     scanf("%d", &pontos);

       // Área para exibição dos dados da cidade
     printf("Nome do Estado: %s\n", estado);
     printf("Número do Código: %s\n", código);
     printf("Nome da Cidade: %s\n", nomedaCidade);
     printf("População: %d\n", população);
     printf("Área em km²: %f\n", área);
     printf("PIB: %f\n", Pib);
     printf("Pontos turísticos: %d\n", pontos);

      return 0;
} 
