// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int r;
    int g;
    int b;
} Cor;

Cor novaCor( int vermelho, int verde, int azul );
int getVermelho( const Cor *c );
int getVerde( const Cor *c );
int getAzul( const Cor *c );
void imprimirCor( const Cor *c );

int main() {
    int vm;
    int ver;
    int a;

    scanf(" %d", &vm);

    scanf(" %d", &ver);
    
    scanf(" %d", &a);
    
    Cor cor = novaCor(vm, ver, a);
    
    imprimirCor(&cor);

    int getvm = getVermelho(&cor);
    int getver = getVerde(&cor);
    int getaz = getAzul(&cor);

    printf("getVermelho(): %d\n", getvm);
    printf("getVerde(): %d\n", getver);
    printf("getAzul(): %d", getaz);

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

int getVermelho( const Cor *c ){
    return c->r;
}

int getVerde( const Cor *c ){
    return c->g;
}

int getAzul( const Cor *c ){
    return c->b;
}

void imprimirCor( const Cor *c ){
    printf("Cor: rgb( %d, %d, %d )\n", c->r, c->g, c->b);
}