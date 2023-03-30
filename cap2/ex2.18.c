// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2;
    char e;

    printf("N1: ");
    scanf(" %f", &n1);
    
    printf("N2: ");
    scanf(" %f", &n2);
    
    printf("Escolha uma operacao de acordo com o menu:\n");
    printf("\t+) Adicao;\n");
    printf("\t-) Subtracao;\n");
    printf("\t*) Multiplicacao;\n");
    printf("\t/) Divisao.\n");
    printf("Operacao: ");
    scanf(" %c", &e);

    switch (e) {
        case '+':
            printf("%.2f + %.2f = %.2f", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f", n1, n2, n1 * n2);
            break;
        case '/':
            printf("%.2f / %.2f = %.2f", n1, n2, n1 / n2);
            break;
        default:
            printf("Opcao invalida!");
            break;
    }
    
    return 0;
}