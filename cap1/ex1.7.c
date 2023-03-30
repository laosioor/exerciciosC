#include <stdio.h>
#include <stdlib.h>

int main(){
    int l;
    int a;
    int p;


    printf("digita ai o lado dum quadrado: ");
    scanf("%d", &l);

    p = 4*l;

    a = l * l;

    printf("Perimetro = %d\n", p);
    printf("Area = %d", a);

    return 0;
}