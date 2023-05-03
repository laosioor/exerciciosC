// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float base, exp;

    printf("Base: ");
    scanf(" %f", &base);
    
    printf("Expoente: ");
    scanf(" %f", &exp);
    
    printf("%.2f ^ %.2f = %.2f", base, exp, pow(base, exp));
    return 0;
}