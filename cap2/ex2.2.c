// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1;
    int n2;

    printf("Primero numero: ");
    scanf("%d", &n1);

    printf("Oto numero: ");
    scanf("%d", &n2);

    /*
    printf("Ordem crescente: ");
    n1 <= n2 ? printf("%d <= %d", n1, n2) : printf("%d <= %d", n2, n1);
    */


    printf("Ordem crescente: ");
    if (n1<=n2) {
        printf("%d <= %d", n1, n2);
    } else {
        printf("%d <= %d", n2, n1);
    }
    
    return 0;
}