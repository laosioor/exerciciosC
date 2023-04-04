// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 0, b = 1, c = 0, t = 0;

    printf("1 ");
    for (int i = 0; i <= 18; i++) {
    t = a + b; 
    a = b;
    b = t;
    printf("%d ", t);
    }
    return 0;
}