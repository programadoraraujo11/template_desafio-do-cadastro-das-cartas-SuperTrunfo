#include <stdio.h>

int main () {

    int i;
    int movimentoCavalo = 1; // Flag para controlar o movimento em 'L'

    // Mover a torre 5 casas para a direita

    printf("Movimento da Torre:\n");
for (i = 1; i <= 5; i++)
{
    printf("Direita\n");    // Imprime a direção do movimento
}

// Mover o Bispo 5 casas para cima e à direita
printf("\nMovimento do Bispo:\n");

i = 1;
while (i <= 5)
{
   printf("Cima e à direita\n");
   i++;
}

// Mover a Rainha 8 casas para a esquerda

printf("\nMovimento da Rainha:\n");

i = 1;
do
{
    printf("Esquerda\n");
    i++;
} while (i <= 8);

    printf("\n");

    while (movimentoCavalo--)
    {
        printf("Movimento do Cavalo:\n");
       for (int i = 0; i < 2; i++)
       {
        printf("Cima\n"); // Imprime "Cima" duas vezes

       }
        printf("Direita\n"); // Imprime "Direita" uma vez
    }
    
return 0;

}