// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int compararData( const Data *d1, const Data *d2 );
void imprimirData( const Data *data );

int main() {
    Data d1;
    Data d2;

    // printf("Data 1\n");
    // printf("\tdia: ");
    scanf(" %d", &d1.dia);

    // printf("\tmes: ");
    scanf(" %d", &d1.mes);
    
    // printf("\tano: ");
    scanf(" %d", &d1.ano);

    // printf("Data 2\n");
    // printf("\tdia: ");
    scanf(" %d", &d2.dia);

    // printf("\tmes: ");
    scanf(" %d", &d2.mes);
    
    // printf("\tano: ");
    scanf(" %d", &d2.ano);

    if (compararData(&d1, &d2) < 0) {
        imprimirData(&d1);
        printf("<= ");
        imprimirData(&d2);
    } else 
    {
        imprimirData(&d2);
        printf("<= ");
        imprimirData(&d1);
    }
    

    return 0;
}

int compararData( const Data *d1, const Data *d2 ) {
    /*if (d1->ano == d2->ano && d1->mes == d2->mes && d1->dia == d2->dia) {
        return 0;
    }*/

    if (d1->ano > d2->ano) {
        return 1;
    }

    if (d1->ano < d2->ano) {
        return -1;
    }

    if (d1->mes > d2->mes) {
        return 1;
    }

    if (d1->mes < d2->mes) {
        return -1;
    }

    if (d1->dia > d2->dia) {
        return 1;
    }

    if (d1->dia < d2->dia) {
        return -1;
    }

    return 0;
}

void imprimirData( const Data *data ) {
    if (data->dia < 10) {
        printf("%02d/", data->dia);
    } else {
        printf("%d/", data->dia);
    }

    if (data->mes < 10) {
        printf("%02d/", data->mes);
    } else {
        printf("%d/", data->mes);
    }

    printf("%d ", data->ano);
}