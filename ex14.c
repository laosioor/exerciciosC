#include <stdio.h>
#include <stdlib.h>

int main(){
    float l;

    float p, a;

    printf("Lado: ");
    scanf("%f", &l);

    p = 4*l;

    a = l*l;

    printf("Perimetro = %.2f", p);
    printf("\nArea = %.2f", a);

    return 0;
}