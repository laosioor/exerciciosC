// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void decompoeData( int, int, int *, int * );
bool ehBissexto( int );

int main() {
    int diaDoAno;
    int ano;
    int mes;
    int dia;

    printf("Dia do ano: ");
    scanf(" %d", &diaDoAno);
    
    printf("Ano: ");
    scanf(" %d", &ano);
    
    decompoeData(diaDoAno, ano, &mes, &dia);

    printf("O dia %d do ano %d cai no dia %d do mes %d.", diaDoAno, ano, dia, mes);

    return 0;
}

void decompoeData( int diaDoAno, int ano, int *mes, int *dia ) {
    // 30 dias - abril, junho, setembro e novembro ou (4, 6, 9, 11)
    // 31 dias - jan, mar, mai, jul, ago, out, dez ou (1, 3, 5, 7, 8, 10, 12)
    // 28 ou 29 dias - fev (2)
    *dia = diaDoAno;
    int meses[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (ehBissexto(ano)) {
        meses[1] = 29;    
    } else {
        meses[1] = 28;
    }

    for (int i = 0; i < 12; i++) {
        if (*dia >= 29) {
            *dia -= meses[i];
        } else {
            *mes = i + 1;
            break;
        }
    }
}

bool ehBissexto( int ano ) {
    if ( (ano % 400 == 0 || ano % 4 == 0) && (ano % 100 != 0) ) {
        return true;
    } else {
        return false;
    }
}