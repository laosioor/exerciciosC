// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int r;
    int g;
    int b;
} Cor;

Cor novaCor( int vermelho, int verde, int azul );
void setVermelho( Cor *c, int vermelho );
void setVerde( Cor *c, int verde);
void setAzul( Cor *c, int azul );
void imprimirCor( const Cor *c );

int main() {
    int vm;
    int ver;
    int a;
    int nVM;
    int nVER;
    int nA;

    scanf(" %d", &vm);

    scanf(" %d", &ver);
    
    scanf(" %d", &a);

    scanf(" %d", &nVM);

    scanf(" %d", &nVER);
    
    scanf(" %d", &nA);
    
    Cor cor = novaCor(vm, ver, a);
    
    printf("Cor: ");
    imprimirCor(&cor);

    setVermelho(&cor, nVM);
    setVerde(&cor, nVER);
    setAzul(&cor, nA);

    printf("Cor alterada: ");
    imprimirCor(&cor);
 
    return 0;
}

Cor novaCor( int vermelho, int verde, int azul ){
    Cor cor;
    
    if (vermelho <= 0) {
        cor.r = 0;
    } else if (vermelho >= 255) {
        cor.r = 255;
    } else {
        cor.r = vermelho;
    }

    if (verde <= 0) {
        cor.g = 0;
    } else if (verde >= 255) {
        cor.g = 255;
    } else {
        cor.g = verde;
    }

    if (azul <= 0) {
        cor.b = 0;
    } else if (azul >= 255) {
        cor.b = 255;
    } else {
        cor.b = azul;
    }

    return cor;
}

void setVermelho( Cor *c, int vermelho ){
    if (vermelho <= 0) {
        c->r = 0;
    } else if (vermelho >= 255) {
        c->r = 255;
    } else {
        c->r = vermelho;
    }
}

void setVerde( Cor *c, int verde ){
    if (verde <= 0) {
        c->g = 0;
    } else if (verde >= 255) {
        c->g = 255;
    } else {
        c->g = verde;
    }
}

void setAzul( Cor *c, int azul ){
    if (azul <= 0) {
        c->b = 0;
    } else if (azul >= 255) {
        c->b = 255;
    } else {
        c->b = azul;
    }
}

void imprimirCor( const Cor *c ){
    printf("rgb( %d, %d, %d )\n", c->r, c->g, c->b);
}