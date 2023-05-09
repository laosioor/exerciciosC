// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            s++;
        }

        if (s > 2) {
            break;
        }
    }
    if (s > 2) {
        return 0;
    } else {
        return 1;
    }
}
int main() {
    printf("%d %d", 4, ehPrimo(4));
    return 0;
}