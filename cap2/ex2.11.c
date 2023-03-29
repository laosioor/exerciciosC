// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, y;

    printf("Primeiro angulo: ");
    scanf(" %f", &a);
    
    printf("Segundo angulo: ");
    scanf(" %f", &b);

    printf("Terceiro angulo: ");
    scanf(" %f", &y);

    if (a + b + y != 180) {
        printf("As medidas fornecidas dos angulos nao representam um triangulo valido!");
    } else {    
        printf("Triangulo");
        if (a == 90 || b == 90 || y == 90) {
            printf(" RETANGULO");
        }

        else if (a > 90 || b > 90 || y > 90) {
            printf(" OBTUSANGULO");
        }

        else if (a < 90 && b < 90 && y < 90) {
            printf(" ACUTANGULO");
        }
    }
    
    
    return 0;
}