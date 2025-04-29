#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int casoLosango(int x){
    return (x < 0) ? -x : x;
}


int main() {

    char linha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    int tabuleiro[LINHA][COLUNA];        
        for (int i = 0; i < LINHA; i++){                    
            for (int j = 0; j < COLUNA; j++) {             
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

    int tamanhoCone = 3;
    int linhaInicialCone = 5;
    int colunaInicialCone = 8;

    for (int i = 0; i < tamanhoCone; i++) {
        int numeroLinhaCone = 2 * i + 1; 
        int deslocamentoColunaCone = (colunaInicialCone - 1) + numeroLinhaCone / 2;
        for (int j = 0; j < numeroLinhaCone; j++) {            
            tabuleiro[linhaInicialCone + i][deslocamentoColunaCone - j] = 5;
        }
    }

    int tamanhoCruz = 5;
    int linhaInicialCruz = 1;
    int colunaInicialCruz = 5;

    for (int i = 0; i < tamanhoCruz; i++) {
        tabuleiro[i + 1][colunaInicialCruz] = 5;
        for (int j = 0; j < tamanhoCruz; j++) {
            tabuleiro[linhaInicialCruz + 2][j + 3] = 5;
        }        
    }
    
    int centroLosangoLinha = 7;
    int centroLosangoColuna = 2;
    int tamanhoLosango = 5;

    for (int i = -tamanhoLosango / 2; i <= tamanhoLosango / 2; i++) {
        for (int j = -tamanhoLosango / 2; j <= tamanhoLosango / 2; j++) {
            if (casoLosango(i) + casoLosango(j) <= tamanhoLosango / 2) {
                tabuleiro[centroLosangoLinha + i][centroLosangoColuna + j] = 5;
            }
        }
    } 
  
    printf("    **Jogo de Batalha Naval**\n");
        printf("   ");
        for (int l = 0; l < LINHA; l++) {
            printf(" %c ", linha[l]);                                       
        }
        printf("\n");
        
        for (int i = 0; i < LINHA; i++) {
            printf("%2d ", i + 1);
            for (int j = 0; j < COLUNA; j++) {
                printf(" %d ", tabuleiro[i][j]);
            }
            printf("\n");        
        }     

        return 0;    
        
    }

    


    
