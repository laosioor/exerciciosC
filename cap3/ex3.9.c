// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("N: ");
    scanf(" %d", &n);
    
    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    
    return 0;
}