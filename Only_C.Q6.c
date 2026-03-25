//temperatura em graus Celsius convertida em graus Fahrenheit.
#include <stdio.h>

int main() {
    float n1;
    
    printf("Me diga a temperatura em graus celsius e transformarei em Fahrenheit:\n");
    scanf("%f", &n1);

    float fahrenheit = (n1 * 1.8) + 32;

    printf("%.2fCº é igual a %.2f Fahrenheit", n1, fahrenheit);
    return 0;
}
