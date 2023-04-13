// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int l;
    int e;

    printf("Altura: ");
    scanf(" %d", &a);


    if (a > 0) {
        e = a - 1; // espaços
        for (int i = 1; i <= a; i++)
        {
            l = i + (i-1);
            
            for (int j = 1; j <= e; j++) {
                printf(" ");
            }
            
            for (int k = 1; k <= l; k++) {
                printf("*");
            }

            printf("\n");
            e--;
        }
    } else {
        e = 0;// espaços
        for (int i = a * -1; i >= 0; i--)
        {
            l = i * 2 - 1;
            for (int j = 1; j <= e; j++) {
                printf(" ");
            }
            
            for (int k = 1; k <= l; k++) {
                printf("*");
            }

            printf("\n");
            e++;
        }
    }
    
    return 0;
}