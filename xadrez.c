#include <stdio.h>

int main(){
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;

    //Movendo o cavalo 'L'
    printf("Cavalo: \n");
    while (cavalo--)
    {
        for(int i = 0; i <2; i++){
            printf("Cima \n"); //imprime Cima 2x
        }
        printf("Direita\n"); //imprime direita 1x
    }
    printf("---------------\n");

    //mover a torre 5 casas para a direita
    printf("Torre: \n");
    for (int i = 0; i < 5; i++){
        printf("Direita! ->\n");
    }
    printf("---------------\n");

    //mover o Bispo 5 casas na diagonal 
    printf("Bispo: \n");
    while (bispo <= 5)
    {
        printf("Cima, Direita!\n");
        bispo++;
    }
    printf("---------------\n");

    //Mover a rainha 8 Casas para a esquerda
    printf("Rainha: \n");
    do
    {
        printf("<- Esquerda!\n");
        rainha++;
    } while (rainha <= 8);
    printf("---------------\n");

    return 0;
    
}
