#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2;

    float som, sub, mul, div;

    printf("1º Numero: ");
    scanf("%f", &n1);

    printf("2º Numero: ");
    scanf("%f", &n2);

    som = n1 + n2;
    sub = n1 - n2;
    mul = n1 * n2;
    div = n1 / n2;

    printf("%.2f + %.2f = %.2f", n1, n2, som);
    printf("\n%.2f - %.2f = %.2f", n1, n2, sub);
    printf("\n%.2f * %.2f = %.2f", n1, n2, mul);
    printf("\n%.2f / %.2f = %.2f", n1, n2, div);

    return 0;
}