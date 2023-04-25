// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1[3][3];
    int n2[3][3];
    int s[3][3];

    for (int a = 0; a < 2; a++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("array%d[%d][%d]: ", a+1, i, j);
                if (a == 0) {
                    scanf(" %d", &n1[i][j]);
                } else {
                    scanf(" %d", &n2[i][j]);

                    s[i][j] = n1[i][j] + n2[i][j];
                }
            }
        }
    }
    
    printf("\narray1:       array2:       arraySoma:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int a = 0; a < 3; a++)
        {
            for (int j = 0; j < 3; j++)
            {
                int n;
                if (a == 0) {
                    n = n1[i][j];
                } else if (a == 1) {
                    n = n2[i][j];
                } else{
                    n = s[i][j];
                }
                printf("%03d", n);

                if (j != 2) {
                    printf(" ");
                }
                if (i == 1)
                {
                    if (a == 0 && j == 2) {
                        printf(" + ");
                    }  else if (a == 1 && j == 2) {
                        printf(" = ");
                    }
                }

                if (i != 1 && j == 2 && a != 2)
                {
                    printf("   ");
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}