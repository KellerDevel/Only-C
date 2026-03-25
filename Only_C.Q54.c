//Programa que receba dois números e mostre qual deles é o maior

#include <stdio.h>

int main() {
    int n1, n2;
    
    printf("Me diga dois números e te direi qual deles é maior:\n");
    scanf("%d %d", &n1, &n2);
    
    if (n1 == n2) {
        printf("Os números são iguais");
    }
    else if (n1 > n2) {
        printf("O maior número é o %d\n", n1);
    }
    else {
        printf("O maior número é o %d\n", n2);
    }
    return 0;
}