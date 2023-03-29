// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int h1, h2;
    int m1, m2;
    int t;

    printf("Homi 1: ");
    scanf(" %d", &h1);

    printf("Homi 2: ");
    scanf(" %d", &h2);

    printf("Moca 1: ");
    scanf(" %d", &m1); 

    printf("Moca 2: ");
    scanf(" %d", &m2);
    
    if (h2 < h1) {
        t = h1;
        h1 = h2;
        h2 = t;
    } 

    if (m2 < m1) {
        t = m1;
        m1 = m2;
        m2 = t;
    }
    
    printf("Idade homem mais velho + idade mulher mais nova: %d\n", h2+m1);

    printf("Idade homem mais novo * idade mulher mais velha: %d", h1*m2);

    return 0;
}