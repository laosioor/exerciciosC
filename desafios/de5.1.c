// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int l1, l2, c1, c2;

    printf("Linhas M1: ");
    scanf(" %d", &l1);
    
    printf("Colunas M1: ");
    scanf(" %d", &c1);
    
    printf("Linhas M2: ");
    scanf(" %d", &l2);
    
    printf("Colunas M2: ");
    scanf(" %d", &c2);
    
    // o número de colunas da primeira matriz tem que ser igual ao número de linhas da segunda matriz. 
    if (c1 != l2 || c1 < 1 || c1 > 10 || l1 < 1 || l1 > 10 || c2 < 1 || c2 > 10 || l2 < 1 || l2 > 10) {
        printf("As matrizes nao podem ser multiplicadas");
    } else {
        int m1[l1][c1];
        int m2[l2][c2];

        for (int i = 0; i < l1; i++) {
            for (int j = 0; j < c1; j++) {
                int n;
                printf("M1[%d][%d]: ", i, j);
                scanf(" %d", &n);

                m1[i][j] = n;
            }
        }

        for (int i = 0; i < l2; i++) {
            for (int j = 0; j < c2; j++) {
                int n;
                printf("M2[%d][%d]: ", i, j);
                scanf(" %d", &n);

                m2[i][j] = n;
            }
        }

        int m3[l1][c2];

        
        for (int i = 0; i < l1; i++) {
            for (int j = 0; j < c2; j++) {
                int v = 0;
                    for (int l = 0; l < c1; l++) { // for feito pra realizar as contas, pega a linha n de M1 e multiplica pela coluna n de M2
                        v += m1[i][l] * m2[l][j];
                        printf("(%d x %d) ", m1[i][l], m2[l][j]);

                        if (l != c1 - 1) {
                            printf("+ ");
                        }
                    }
                
                m3[i][j] = v;
                printf("\nM3[%d][%d]: %d\n", i, j, m3[i][j]);
            }
        }
    }   
    return 0;
}