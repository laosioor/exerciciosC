// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int r;
    int g;
    int b;
} Cor;

Cor novaCor( int vermelho, int verde, int azul );
Cor clarear( const Cor *c );
void imprimirCor( const Cor *c );

int main() {
    int vm;
    int ver;
    int a;

    scanf(" %d", &vm);

    scanf(" %d", &ver);
    
    scanf(" %d", &a);
    
    Cor cor = novaCor(vm, ver, a);
    Cor corCla = clarear(&cor);
    
    printf("Cor base: ");
    imprimirCor(&cor);

    printf("Cor clareada: ");
    imprimirCor(&corCla);

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

Cor clarear( const Cor *c ) {
    Cor cor = {c->r, c->g, c->b};

    if (cor.r == 0 && cor.g == 0 && cor.b == 0) {
        cor.r = 3;
        cor.g = 3;
        cor.b = 3;
        return cor;
    }
    if (cor.r <= 3 && cor.r >= 0) {
        cor.r = 3;
    }
    if (cor.g <= 3 && cor.g >= 0) {
        cor.g = 3;
    }
    if (cor.b <= 3 && cor.b >= 0) {
        cor.b = 3;
    }

    if (cor.r / 0.7 <= 0) {
        cor.r = 0;
    } else if (cor.r / 0.7 >= 255) {
        cor.r = 255;
    } else {
        cor.r = cor.r / 0.7;
    }

    if (cor.g / 0.7 <= 0) {
        cor.g = 0;
    } else if (cor.g / 0.7 >= 255) {
        cor.g = 255;
    } else {
        cor.g = cor.g / 0.7;
    }

    if (cor.b / 0.7 <= 0) {
        cor.b = 0;
    } else if (cor.b / 0.7 >= 255) {
        cor.b = 255;
    } else {
        cor.b = cor.b / 0.7;
    }

    return cor;
}

void imprimirCor( const Cor *c ){
    printf("rgb( %d, %d, %d )\n", c->r, c->g, c->b);
}