// Código feito pelo *coitado* Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Numero entre 1 e 3999: ");
    scanf(" %d", &n);
    
    if (n > 3999) {
        printf("INVALIDO");
    }

    printf("%d = ", n);
    
    if (n >= 3000 && n <= 3999) {
        printf("MMM");
        n -= 3000;
    }

    if (n >= 2000 && n < 3000) {
        printf("MM");
        n -= 2000;
    }

    if (n >= 1000 && n < 2000) {
        printf("M");
        n -= 1000;
    }
    
    if (n >= 900 && n < 1000) {
        printf("CM");
        n-= 900;
    }

    if (n >= 500 && n < 900) {
        printf("D");
        n -= 500;
    }

    if (n >= 400 && n < 500) {
        printf("CD");
        n -= 400;
    }

    if (n >= 300 && n < 400) {
        printf("CCC");
        n -= 300;
    }

    if (n >= 200 && n < 300) {
        printf("CC");
        n -= 200;
    }

    if (n >= 100 && n < 200) {
        printf("C");
        n -= 100;
    }
    
    if (n >= 90 && n < 100) {
        printf("XC");
        n -= 90;
    }

    if (n >= 50 && n < 90) {
        printf("L");
        n -= 50;
    }

    if (n >= 40 && n < 50) {
        printf("XL");
        n -= 40;
    }

    if (n >= 30 && n < 40) {
        printf("XXX");
        n -= 30;
    }

    if (n >= 20 && n < 30) {
        printf("XX");
        n -= 20;
    }

    if (n >= 10 && n < 20) {
        printf("X");
        n -= 10;
    }

    if (n == 9) {
        printf("IX");
    }

    if (n == 8) {
        printf("VIII");
    }

    if (n == 7) {
        printf("VII");
    }

    if (n == 6) {
        printf("VI");
    }

    if (n == 5) {
        printf("V");
    }

    if (n == 4) {
        printf("IV");
    }

    if (n == 3) {
        printf("III");
    }

    if (n == 2) {
        printf("II");
    }

    if (n == 1) {
        printf("I");
    }

    return 0;
}