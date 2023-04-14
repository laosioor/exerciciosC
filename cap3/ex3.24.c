// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0, j = 1;
    int senil = 0, jovem = 0;
    
    while (i >= 0) 
    {
        printf("Idade da pessoa %02d: ", j);
        scanf(" %d", &i);

        if (i > 50) {
            senil += 1;
        } else if (i < 21 && i >= 0) {
            jovem += 1;
        }

        j++;
    }

    printf("Total de pessoas menores de 21 anos: %d\n", jovem);

    printf("Total de pessoas com mais de 50 anos: %d", senil);
    
    return 0;
}