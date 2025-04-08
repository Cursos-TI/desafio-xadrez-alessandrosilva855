
#include <stdio.h>

int main(){
    int bispo = 1;
    int rainha = 1;

    //mover a torre 5 casas para a direita
    for (int i = 0; i < 5; i++){
        printf("Direita! ->\n");
    }

    //mover o Bispo 5 casas na diagonal 

    while (bispo <= 5)
    {
        printf("Cima, Direita!\n");
        bispo++;
    }

    //Mover a rainha 8 Casas para a esquerda
    do
    {
        printf("<- Esquerda!\n");
        rainha++;
    } while (rainha <= 8);
    

    return 0;
}
