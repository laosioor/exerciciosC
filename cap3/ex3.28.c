// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    float si;

    printf("Saldo inicial: ");
    scanf(" %f", &si);
    
    printf("Operacoes: \n");
        printf("\t1) Deposito;\n");
        printf("\t2) Saque;\n");
        printf("\t3) Fim.\n");
    while (1)
    {
        int e;

        printf("Operacao desejada: ");
        scanf(" %d", &e);

        if (e == 3) {
            break;
        }

        switch(e) {
            float v;
            case 1:
                printf("Valor a depositar: ");
                scanf(" %f", &v);
                
                si += v;

                break;

            case 2:
                printf("Valor a sacar: ");
                scanf(" %f", &v);

                si -= v;

                break;

            default:
                printf("Operacao invalida.\n"); 
                break;
        }
    }

    
    
    if (si > 0) {
        printf("Saldo final: R$%.2f\n", si);
        printf("Conta preferencial.");
    } else if (si < 0) {
        printf("Saldo final: -R$%.2f\n", si*-1);
        printf("Conta devedora.");
    } else {
        printf("Saldo final: R$%.2f\n", si);
        printf("Sem saldo.");
    }
    
    return 0;
}