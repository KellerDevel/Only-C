#include <stdio.h>

int main() {
    int n1;
    
    printf("Escreva um número inteiro de 0 a 10: ");
    scanf("%d", &n1);
    
    while (n1 > 10 || n1 < 0) {
        printf("Escreva apenas números entre 0 e 10: ");
        scanf("%d", &n1);
    }
        
    int quadrado = n1 * n1;
    int cubo = n1 * n1 * n1;
    
    printf("O quadrado desse número é %d\n", quadrado);
    printf("O cubo desse número é %d\n", cubo);
    return 0;
}