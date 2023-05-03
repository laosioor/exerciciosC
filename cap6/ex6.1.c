// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta;
    float raizes[2];

    printf("a: ");
    scanf(" %f", &a);
    
    printf("b: ");
    scanf(" %f", &b);
    
    printf("c: ");
    scanf(" %f", &c);
    
    if (a == 0)
    {
        printf("Nao existe equacao do segundo grau!");
    } else {
        delta = pow(b, 2) - (4 * a * c);

        printf("Delta: %.2f\n", delta);
        if (delta >= 0)
        {
            raizes[0] = (-b + sqrt(delta)) / 2 * a;
            raizes[1] = (-b - sqrt(delta)) / 2 * a; 

            if (raizes[0] > raizes[1])
            {
                int t = raizes[1];
                raizes[1] = raizes[0];
                raizes[0] = t;
            }
            
            if (raizes[0] == raizes[1])
            {
                printf("S = {%.2f}", raizes[0]);
            } else
            {
                printf("S = {%.2f, %.2f}", raizes[0], raizes[1]);
            }
            
        } else
        {
            printf("S = {}");
        }
        
    }

    return 0;
}