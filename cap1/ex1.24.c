#include <stdio.h>
#include <stdlib.h>

int main() {
    float ha; // valor hora aula
    int qtd; // quantidade 
    float pd; // porcentagem desconto
    float sl; // salario liquido

    printf("Valor hora/aula: ");
    scanf("%f", &ha);

    printf("Quandiade de aulas: ");
    scanf("%d", &qtd);

    printf("Porcentagem de desconto do INSS: ");
    scanf("%f", &pd);

    sl = (qtd * ha);

    sl = sl - (sl * (pd/100));

    printf("Salario Liquido: %.2f", sl); 
}