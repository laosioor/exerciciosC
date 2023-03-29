// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    float p, a;
    float imc;

    printf("Peso: ");
    scanf(" %f", &p);
    
    printf("Altura: ");
    scanf(" %f", &a);
    
    imc = p/(a*a);

    printf("%.2f\n", imc);
    
    if (imc < 17.0) {printf("Voce esta muito abaixo do peso ideal!");}
    else if (17.0 <= imc && imc < 18.5) {printf("Voce esta abaixo do peso ideal!");}
    else if( 18.5 <= imc && imc < 25.0) {printf("Parabens! Voce esta em seu peso normal!");}
    else if (25.0 <= imc && imc < 30.0) {printf("Atencao, voce esta acima de seu peso (sobrepeso)!");}
    else if (30.0 <= imc && imc < 35.0) {printf("Cuidado! Obesidade grau I!");}
    else if (35.0 <= imc && imc < 40.0) {printf("Cuidado! Obesidade grau II!");}
    else {printf("Muito cuidado!!! Obesidade grau III!");}
    

    return 0;
}