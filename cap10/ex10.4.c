// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float real;
    float imaginario;
} Complexo;

Complexo somar( const Complexo *c1, const Complexo *c2 );
void imprimirComplexo( const Complexo *c );

int main() {
    Complexo c1;
    Complexo c2;

    scanf(" %f", &c1.real);
    scanf(" %f", &c1.imaginario);
    
    scanf(" %f", &c2.real);
    scanf(" %f", &c2.imaginario);
    
    Complexo soma = somar(&c1, &c2);

    imprimirComplexo(&c1);
    printf("+ ");
    imprimirComplexo(&c2);
    printf("= ");
    imprimirComplexo(&soma);

    return 0;
}

Complexo somar( const Complexo *c1, const Complexo *c2 ){
    Complexo soma = {c1->real + c2->real, c1->imaginario + c2->imaginario};
    return soma;
}
void imprimirComplexo( const Complexo *c ){
    printf("(%.2f", c->real);
    printf(" + ");
    printf("%.2fi) ", c->imaginario);
}