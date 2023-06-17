// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int diaDoAno( const Data *data );
bool ehBissexto( int ano );

int main() {
    Data data;

    scanf(" %d", &data.dia);
    
    scanf(" %d", &data.mes);
    
    scanf(" %d", &data.ano);
    
    printf("O dia do ano da data %02d/%02d/%d eh %d.", data.dia,data.mes,data.ano, diaDoAno(&data));
    return 0;
}

int diaDoAno( const Data *data ){
    int totalDia = 0;
    int meses[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (ehBissexto(data->ano)) {
        meses[1] = 29;
    } else {
        meses[1] = 28;
    }

    for (int i = 0; i < data->mes-1; i++) {
        totalDia += meses[i];
    }

    return totalDia + data->dia;
}

bool ehBissexto( int ano ) {
    if ( (ano % 400 == 0 || ano % 4 == 0) && (ano % 100 != 0) ) {
        return true;
    } else {
        return false;
    }
}