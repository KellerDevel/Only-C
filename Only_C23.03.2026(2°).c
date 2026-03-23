#include <stdio.h>

int main() {
    int num;
    
    printf("Escreva um número de 5 dígitos positivos:\n");
    scanf("%d", &num);
        
    while (num > 99999 || num < 10000) {
        printf("Escreva apenas um número de 5 dígitos positivos:\n");
        scanf("%d", &num);
    }
    
    int n1 = num / 10000;
    int n2 = (num / 1000) %10;
    int n3 = (num / 100) %10;
    int n4 = (num / 10) %10;
    int n5 = num % 10;
    
    printf("%d   %d   %d   %d   %d\n", n1, n2, n3, n4, n5);
    return 0;
    
}