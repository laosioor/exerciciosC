// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

float mod(float x) { // função que retorna o módulo de algum float
    if (x >= 0) { return x; }
    else {
        return -x;
    }
}

int main() {
    float a, b, c;

    printf("a: ");
    scanf(" %f", &a);
    
    printf("b: ");
    scanf(" %f", &b);
    
    printf("c: ");
    scanf(" %f", &c);


    if ( (a + b > c && c > mod(a-b)) && (a + c > b && b > mod(a-c)) && (b + c > a && a > mod(b-c)) ) {
        if (a == b && b == c) {
            printf("EQUILATERO");
        } else if (a == b || b == c || a == c) {
            printf("ISOCELES");
        } else {
            printf("ESCALENO");
        }
    } else {
        printf("As medidas fornecidas dos lados na representam um triangulo valido!");
    }

    return 0;
}