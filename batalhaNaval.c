#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char linha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro[10][10];        
        for (int i = 0; i < 10; i++){                    
            for (int j = 0; j < 10; j++) {             
                tabuleiro[i][j] = 0;
            }        
        } 

    for (int j = 5; j < 8; j++) {
        for (int i = 8; i < 9; i++) {
            tabuleiro[i][j] = 3;
        }         
    }

    for (int i = 2; i < 5; i++) {
        for (int j = 2; j < 3; j++) {
            tabuleiro[i][j] = 3;
        }          
    }

    for (int i = 1; i < 4; i++) {
        tabuleiro[i][i + 5] = 3;
        }          
    
    
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][2 - i] = 3;              
    }
  
    printf("    **Jogo de Batalha Naval**\n");
        printf("   ");
        for (int l = 0; l < 10; l++) {
            printf(" %c ", linha[l]);                                       
        }
        printf("\n");
        
        for (int i = 0; i < 10; i++) {
            printf("%2d ", i + 1);
            for (int j = 0; j < 10; j++) {
                printf(" %d ", tabuleiro[i][j]);
            }
            printf("\n");        
        }     

        return 0;    
        
    }

    
    


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    
