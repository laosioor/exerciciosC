#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int a, s;
    printf("Numero inteiro: ");
    scanf("%d", &n);

    a = n-1;
    s = n+1;

    printf("Sucessor de %d: %d", n, s);
    printf("\nAntecessor de %d: %d", n, a);
    return 0;
}