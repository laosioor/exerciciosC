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
    if (s > 2 || s == 1) {
        return 0;
    } else {
        return 1;
    }
}
int main() {
    for (int i = 1; i <= 20; i++) {
        printf("%d: ", i);

        if (ehPrimo(i)) {
            printf("eh primo\n");
        } else {
            printf("nao eh primo\n");
        }
    }
    return 0;
}