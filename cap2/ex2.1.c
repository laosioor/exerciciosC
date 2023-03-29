// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    //n % 2 == 0 ? printf("%d e par", n) : printf("%d e impar", n); um dos meios de fazer foda a coisa aí

    if (n % 2 == 0) {
        printf("O numero %d e par.", n);
    } else {
        printf("O numero %d e impar.", n);
    }

    return 0;
}