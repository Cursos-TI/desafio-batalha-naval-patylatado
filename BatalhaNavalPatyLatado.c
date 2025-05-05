#include <stdio.h>

int main()
{
    int tabuleiro[10][10], i=0, j=0;
    for (i=0; i<10; i++) {
        for (j=0; j<10; j++){
            tabuleiro[i][j] = 0; //casas vazias do tabuleiro
        }
    }
    for (j=4; j<7; j++){
        tabuleiro[2][j]=3; //um navio na horizontal com 3 casas
    }
    for(i=2; i<5; i++){
        tabuleiro[i][8]=3; //um navio na vertical com 4 casas
    }
    for (i=4, j=0; i<8, j<4; i++, j++){
        tabuleiro[i][j]=3; //um navio na diagonal para baixo e à direita com 5 casas
    }
    for (i=9, j=5; i>6, j<9; i--, j++){
        tabuleiro[i][j]=3; //um navio na diagonal para cima e à direita com 3 casas
    }
    for(i=0; i<10; i++){
    for (j=0; j<10; j++){
    printf("%d ", tabuleiro[i][j]);
    if (j==9){
        printf("\n");
    }
    }
    }
}
