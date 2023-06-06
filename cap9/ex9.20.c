// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool contem( const char *fonte, const char *aPesquisar );

int main() {
    char string[40];
    char pesq[40];

    printf("String fonte: ");
    fgets(string, 40, stdin);
    string[strlen(string)-1] = '\0';

    printf("String a pesquisar: ");
    fgets(pesq, 40, stdin);
    pesq[strlen(pesq)-1] = '\0';

    printf("\"%s\" %s contida em \"%s\"", pesq, contem(string, pesq) ? "esta" : "nao esta", string);
    
    return 0;
}

bool contem( const char *fonte, const char *aPesquisar ) {
    int tamPesq = strlen(aPesquisar);

    for (int i = 0; i < strlen(fonte); i++) { // loop na string fonte
        if (fonte[i] == aPesquisar[0]) { // se a letra atual for igual a letra inicial da string pesquisa
            int t = i; // salva a posição de i para que caso o for seguinte dê falso, conseguir retornar a posição i
            for (int j = 0; j < tamPesq; j++) { // loop na string pesq
                if (fonte[i] != aPesquisar[j]) { // se a letra atual de fonte for diferente da letra atual de pesq 
                    i = t; // i volta a ter o valor do loop anterior
                    break; // volta ao loop anterior
                }

                if (j == tamPesq-1) { // se conseguir chegar ao fim do loop
                    return 1; // retorna 1
                }
                i++; // aumenta i para o loop de dentro (esse)
            }
        }
    }

    return 0;
}