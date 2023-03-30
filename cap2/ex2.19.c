// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    float t, tf;
    char e;

    printf("Escolha uma operacao de acordo com o menu:\n");
    printf("\tC Celsius -> Fahrenheit;");
    printf("\tF Fahrenheit -> Celsius.");

    printf("Opcao: ");
    scanf(" %c", &e);

    switch (e)
    {
    case 'C':
        printf("Celsius: ");
        scanf(" %f", &t);

        tf = 1.8 * t + 32;

        printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", t, tf);
        break;
    case 'F':
        printf("Fahrenheit: ");
        scanf(" %f", &t);

        tf = (t - 32)/1.8;

        printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", t, tf);
        break;
    default:
        printf("Opcao invalida!");
        break;
    }
    
    return 0;
}