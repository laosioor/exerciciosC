// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Numero foda: ");
    scanf(" %d", &n);
    
    switch(n) {
        case 2:
            printf("O valor fornecido foi 2.");
            break;
        case 4:
            printf("O valor fornecido foi 4.");
            break;
        case 6:
            printf("O valor fornecido foi 6.");
            break;
        case 8:
            printf("O valor fornecido foi 8.");
            break;
        default:
            printf("Valor invalido.");
    }
    return 0;
}