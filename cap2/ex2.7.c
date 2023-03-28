// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2;
    
    printf("N1: ");
    scanf(" %f", &n1);

    printf("N2: ");
    scanf(" %f", &n2);
    
    if ((n1 + n2) > 10) {
        printf("Os numeros fornecidos foram %.2f e %.2f", n1, n2);
    } else {
        printf("A subtracao entre %.2f e %.2f = %.2f", n1, n2, n1-n2);
    }
    
    return 0;
}