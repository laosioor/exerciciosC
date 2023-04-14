// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    printf("\n");

    for (int i = 5; i > 0; i--) {
        
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    printf("\n");

    for (int i = 5; i > 0; i--) {
        
        for (int j = 0; j < i - 1; j++)
        {
            printf(" ");
        }

        for (int k = i; k < 6; k++) {
            printf("*");
        }
        
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (int k = i; k < 5; k++) {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}