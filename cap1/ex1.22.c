#include <stdio.h>
#include <stdlib.h>

int main() {
    float p;

    printf("Produto: ");
    scanf("%f", &p);


    float d = p*0.91;  //mesma coisa que p - (p * 9/100);

    printf("Preco de venda com 9%% de desconto: %.2f: ", d);

    return 0;
}