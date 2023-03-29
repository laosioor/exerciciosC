// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    printf("Idade: ");
    scanf(" %d", &i);

    if (i < 16) {printf("Nao eleitor");}
    else if (i >= 18 && i <= 65)
    {printf("Eleitor obrigatorio");}
    else {printf("Eleitor facultativo");}
    
    return 0;
}