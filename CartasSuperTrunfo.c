#include <stdio.h>

void moverTorre(int casas) {   // Mover Torre 5 casas para a direita
    if (casas > 0) 
    {
        printf("Direita\n");
        moverTorre(casas - 1);
        
    }

}

void moverBispo(int casas) {    // mover Bispo 5 casas para cima e à direita
    if (casas > 0) 
    {
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
        
    }

}

void moverRainha(int casas) {    // Mover a rainha 8 casas para esquerda
    if (casas > 0) 
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
        
    }

}

int main () {

    int movimentoCavalo = 1; // Flag para controlar o movimento em 'L'

    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

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