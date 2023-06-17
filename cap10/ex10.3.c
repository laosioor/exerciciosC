// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int hora;
    int minuto;
    int segundo;
} Hora;

Hora gerarHora( int quantidadeSegundos );
void imprimirHora( const Hora *hora );

int main() {
    int seg;
    Hora hora;
    scanf(" %d", &seg);
    
    hora = gerarHora(seg);

    printf("Hora correspondente: ");
    imprimirHora(&hora);
    return 0;
}

Hora gerarHora( int quantidadeSegundos ){
    int minutos = quantidadeSegundos / 60;
    int horas = minutos / 60;
    minutos -= (horas * 60);

    int segundos = horas * 60;
    segundos += minutos;
    segundos *= 60;

    segundos = quantidadeSegundos - segundos;

    Hora hora = {horas, minutos, segundos};

    return hora;
}
void imprimirHora( const Hora *hora ){
    printf("%02d:%02d:%02d", hora->hora, hora->minuto, hora->segundo);
}