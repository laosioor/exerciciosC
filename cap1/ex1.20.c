#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;

    int m;

    printf("1º Numero: ");
    scanf("%d", &n1);

    printf("2º Numero: ");
    scanf("%d", &n2);

    m = (n1 + n2) / 2;

    printf("Media aritmetica: %d", m);

    return 0;
}