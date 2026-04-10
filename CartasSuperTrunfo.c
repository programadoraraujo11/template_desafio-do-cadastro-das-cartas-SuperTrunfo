#include <stdio.h>

int main () {

    int i;

    // Mover a torre 5 casas para a direita

    printf("Movimento da Torre:\n");
for (i = 1; i <= 5; i++)
{
    printf("Direita\n");    // Imprime a direção do movimento
}

// Mover o Bispo 5 casas para cima e à direita
printf("Movimento do Bispo:\n");

i = 1;
while (i <= 5)
{
   printf("Cima e à direita\n");
   i++;
}

// Mover a Rainha 8 casas para a esquerda

printf("Movimento da Rainha:\n");

i = 1;
do
{
    printf("Esquerda\n");
    i++;
} while (i <= 8);


return 0;

}