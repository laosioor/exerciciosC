// Código feito por Aloísio M. Lingo Filho BV3032558
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1[5], n2[5];
    int s[5];

    for (int i = 0; i < 10; i++) {
        if (i < 5) {
            printf("array1[%d]: ", i);
            scanf(" %d", &n1[i]);
        } else {
            printf("array2[%d]: ", i-5);
            scanf(" %d", &n2[i-5]); 
        }
    } 

    for (int i = 0; i < 5; i++) {
        s[i] = n1[i] + n2[i]; 
        printf("arraySoma[%d] = %d\n", i, s[i]);
    }
    return 0;
}