#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1;
    int n2;
    int n3;

    int p1, p2, p3; // posições p1: A, p2: B e p3: C
    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    printf("N3: ");
    scanf("%d", &n3);


    
    if (n1 <= n2 && n2 <= n3) {         // A B C
        p1 = n1; p2 = n2; p3 = n3;
    } else if (n1 <= n3 && n3 <= n2) {  // A C B
        p1 = n1; p2 = n3; p3 = n2;
    } else if (n2 <= n1 && n1 <= n3) {  // B A C
        p1 = n2; p2 = n1; p3 = n3;
    } else if (n2 <= n3 && n2 <= n1) {  // B C A
        p1 = n2; p2 = n3; p3 = n1;
    } else if (n3 <= n1 && n1 <= n2) {  // C A B
        p1 = n3; p2 = n1; p3 = n2;
    } else if (n3 <= n2 && n2 <= n1) {  // C B A
        p1 = n3; p2 = n2; p3 = n1;
    } 

    printf("Ordem crescente: %d <= %d <= %d", p1, p2, p3);
    return 0;
}