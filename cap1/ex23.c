#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, a;

    printf("Ano de Nascimento: ");
    scanf("%d", &n);

    printf("Ano atual: ");
    scanf("%d", &a);

    int i = a - n;

    printf("Idade aproximada: %d anos", i);

    return 0;
}