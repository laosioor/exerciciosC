// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float numerador;
    float denominador;
} Fracao;

Fracao somar( const Fracao *f1, const Fracao *f2 );
Fracao subtrair( const Fracao *f1, const Fracao *f2 );
Fracao multiplicar( const Fracao *f1, const Fracao *f2 );
Fracao dividir( const Fracao *f1, const Fracao *f2 );
void imprimirFracao( const Fracao *f );

int main() {
    Fracao f1;
    Fracao f2;

    scanf(" %f", &f1.numerador);
    scanf(" %f", &f1.denominador);
    
    scanf(" %f", &f2.numerador);
    scanf(" %f", &f2.denominador);
    
    Fracao soma = somar(&f1, &f2);
    Fracao subtrai = subtrair(&f1, &f2);
    Fracao multiplica = multiplicar(&f1, &f2);
    Fracao divi = dividir(&f1, &f2);

    imprimirFracao(&f1);
    printf(" + ");
    imprimirFracao(&f2);
    printf(" = ");
    imprimirFracao(&soma);

    printf("\n");

    imprimirFracao(&f1);
    printf(" - ");
    imprimirFracao(&f2);
    printf(" = ");
    imprimirFracao(&subtrai);

    printf("\n");

    imprimirFracao(&f1);
    printf(" * ");
    imprimirFracao(&f2);
    printf(" = ");
    imprimirFracao(&multiplica);

    printf("\n");

    imprimirFracao(&f1);
    printf(" / ");
    imprimirFracao(&f2);
    printf(" = ");
    imprimirFracao(&divi);

    return 0;
}

Fracao somar( const Fracao *f1, const Fracao *f2 ){
    int denoComum;
    Fracao soma;

    if (f1->denominador != f2->denominador){
        soma.numerador = f1->numerador * f2->denominador + f1->denominador * f2->numerador; 
        denoComum = f1->denominador * f2->denominador;
    } else {
        soma.numerador = f1->numerador + f2->numerador;
        denoComum = f1->denominador;
    }

    soma.denominador = denoComum;

    return soma;
}
Fracao subtrair( const Fracao *f1, const Fracao *f2 ){
    int denoComum;
    Fracao subtrai;
    
    if (f1->denominador != f2->denominador){
        subtrai.numerador = f1->numerador * f2->denominador - f1->denominador * f2->numerador; 
        denoComum = f1->denominador * f2->denominador;
    } else {
        subtrai.numerador = f1->numerador - f2->numerador;
        denoComum = f1->denominador;
    }

    subtrai.denominador = denoComum;

    return subtrai;
}
Fracao multiplicar( const Fracao *f1, const Fracao *f2 ){
    Fracao mult = {f1->numerador * f2->numerador, f1->denominador * f2->denominador};
    return mult;
}
Fracao dividir( const Fracao *f1, const Fracao *f2 ){
    Fracao divi = {f1->numerador * f2->denominador, f1->denominador * f2->numerador};
    return divi;
}
void imprimirFracao( const Fracao *f ){
    printf("%.2f/%.2f", f->numerador, f->denominador);
}