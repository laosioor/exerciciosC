// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculaDigito(int n);

int main() {
    int n;

    printf("Numero: ");
    scanf(" %d", &n);
    
    if (n > 0 && n < 9999) {
        printf("Digito verificador de %d: %d\n", n, calculaDigito(n));
    }
    return 0;
}

int calculaDigito(int n) {
    int alg[4];
    int soma = 0;
    int dgtVer = 0;

    for (int i = 3; i >= 0; i--) {
        alg[i] = n / pow(10, i);

        soma+= alg[i] * (i + 2);

        n -= alg[i] * pow(10, i);
    }

    soma %= 11;

    soma = 11 - soma;

    if (soma == 10 || soma == 11) {
        dgtVer = 0;
    } else {
        dgtVer = soma;
    }

    return dgtVer;
}