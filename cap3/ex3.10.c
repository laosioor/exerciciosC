// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    for(int i = 45; i <= 60; i++) {
        printf("%d: ", i);
        if (i % 4 == 0) {
            printf("divisivel\n");
        } else {
            printf("indivisivel\n");
        }
    }
    return 0;
}