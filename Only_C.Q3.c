//soma de números
#include <stdio.h>

int main() {
    float n1, n2, n3;
    
    printf("Me diga três números:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    float soma = n1 + n2 + n3;

    printf("A soma dele é %.2f", soma);
    return 0;

}
