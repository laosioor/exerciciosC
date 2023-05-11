// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int obtemDigito(int n) {
    int dgt = 0;
    int alg[5];

    for (int i = 4; i >= 0; i--) {
        alg[i] = n / pow(10, i);

        n -= alg[i] * pow(10, i);
    }

    dgt = alg[0];

    return dgt;
}

int obtemNumero(int n) {
    int nmr = 0;
    int alg[5];

    for (int i = 4; i >= 0; i--) {
        alg[i] = n / pow(10, i);

        if (i > 0) {
            nmr += alg[i] * pow(10, i);
        }
        n -= alg[i] * pow(10, i);
    }
    nmr /= 10;

    return nmr;
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

int numeroCorreto(int n) {
    int r = 0;

    int nmr = obtemNumero(n);

    int dgt = obtemDigito(n);

    if (calculaDigito(nmr) == dgt) {
        r = 1;
    } else {
        r = 0;
    }

    return r;
}

int main() {
    int n;

    scanf(" %d", &n);

    if (n >= 10 && n <= 99999) {
        printf("Numero completo: %d\n", n);
        printf("Numero: %d\n", obtemNumero(n));
        printf("Digito: %d\n", obtemDigito(n));
        printf("Digito calculado: %d\n", calculaDigito(obtemNumero(n)));
        printf("O numero fornecido esta ");
        if (numeroCorreto(n)) {
            printf("correto!");
        } else {
            printf("incorreto!");
        }
    }
    
    return 0;
}