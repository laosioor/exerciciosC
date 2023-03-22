#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1;
    int n2;

    int som, sub, mul, div;

    printf("Vamo faze umas continha braba fiii: \n");

    printf("Manda o primeiro número aí pá nois vê um negócio: ");
    scanf("%d", &n1);

    printf("BOAAAA ZÉ! Agora passa o segundao pa nois: ");
    scanf("%d", &n2);

    som = n1 + n2;
    sub = n1 - n2;
    mul = n1 * n2;
    div = n1 / n2;

    printf("%d + %d = %d\n", n1, n2, som);
    printf("%d - %d = %d\n", n1, n2, sub);
    printf("%d * %d = %d\n", n1, n2, mul);
    printf("%d / %d = %d", n1, n2, div);

    return 0;
}