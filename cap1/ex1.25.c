#include <stdio.h>
#include <stdlib.h>

int main() {
    float f;
    float c;

    printf("Graus em Fahrenheit: ");
    scanf("%f", &f);

    c = (f-32)/1.8;

    printf("%.2f graus em Fahrenheit correspondem a %.2f graus Celsius", f, c);
    return 0;
}