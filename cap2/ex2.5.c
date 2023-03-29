// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1;
    int n2;
    int n3;

    int t; // variavel temporaria para guardar um numero antes de declara-lo em outra variavel

    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    printf("N3: ");
    scanf("%d", &n3);


    // os dois primeiros ifs caso sejam falsos significam que N3 é o maior número digitado

    if (n3 <= n1) { 
        t = n3; // guarda n3 em t para ser declarado depois em n1
        n3 = n1; // n3 (ou, o maior numero) recebe n1 que foi provado como sendo maior que o n3 (o terceiro numero digitado)
        n1 = t; // n1 (ou, o menor numero) recebe t que recebeu n3
    }

    // caso o if acima tenha sido executado, já temos valores do maior e menor número por enquanto
    if (n3 <= n2) {
        t = n3; 
        n3 = n2;
        n2 = t;
    } //este if é quase identico ao anterior, apenas serve para saber se os segundo numero digitado é maior que o terceiro digitado

    // caso os dois primeiros ifs sejam falsos, basta apenas saber entre n1 e n2 qual é o menor
    if (n2 <= n1) {
        t = n2;
        n2 = n1;
        n1 = t;
    }

    printf("%d >= %d >= %d", n3, n2, n1);
    return 0;
}