#include <stdio.h>

int main(){

    char letra[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int numtabuleiro[10][10] = {0};


    printf("\n------SEJA BEM VINDO AO JOGO BATALHA NAVAL DO NOVAES!!!------\n");   
   

        printf("    ");
        for (int i = 0; i < 10; i++){
        printf("%c   ", letra[i]);
       
            
        }
        printf("\n");

        numtabuleiro[6][6] = 3;
        numtabuleiro[7][6] = 3;
        numtabuleiro[8][6] = 3;

        numtabuleiro[4][3] = 3;
        numtabuleiro[4][4] = 3;
        numtabuleiro[4][5] = 3;


        for (int i = 0; i < 10; i++) {
            printf("%2d-|", i + 1);
            for (int j = 0; j < 10; j++){
                printf("%2d |", numtabuleiro[i][j]);
            }
            printf("\n");
        }   

    printf("\n");     

    return 0;
}