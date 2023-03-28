#include <stdio.h>
#include <stdlib.h>

int main() {
    float n;

    printf("Valor decimal qualquer: ");
    scanf("%f", &n);

    printf("%f\n%.2f\n%.3f", n, n, n);
    
    return 0;
}