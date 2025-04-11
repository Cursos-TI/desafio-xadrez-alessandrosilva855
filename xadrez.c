#include <stdio.h>
//função para mover a torre
void moverTorre(int casas) {
    if (casas > 0){
        printf("Direita -> \n");
        moverTorre(casas - 1);
    }
}
//função para mover o bispo

#include <stdio.h>

// Função para mover Bispo que contém os DOIS FOR aninhados 
void moverBispo(int vertical, int horizontal) {
    for (int v = 0; v < vertical; v++) {      // For externo (Cima)
        printf("Cima, ");
        for (int h = 0; h < horizontal; h++) { // For interno (Direita)
            printf("Direita!\n");
        }
    }
}

//função para mover a rainha
void moverRainha(int casas){
    if(casas > 0){
        printf("<- Esquerda!\n");
        moverRainha(casas - 1);
    }
}
//função para mover o cavalo
void moverCavalo(int movimentos){
    printf("Cavalo: \n");

    for (int cima = 0; cima < 2; cima++){
        printf("Cima!\n");

        if (cima == 1){ // Após o segundo movimento para cima
            break; //sai do loopo de cima
        }
    }
    printf("Direita!\n");
    


}


int main(){

    printf("Torre: \n");
    moverTorre(5);
    printf("---------------\n");
    printf("Bispo: \n");
    moverBispo(5, 1);
    printf("---------------\n");
    printf("Rainha: \n");
    moverRainha(8);
    printf("---------------\n");
    moverCavalo(3);
    printf("---------------\n");
    return 0;


}
