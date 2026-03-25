//temperatura em graus Fahrenheit convertida em graus Celsius.
#include <stdio.h>

int main() {
    float n1;
    
    printf("Me diga a temperatura em graus Fahrenheit e transformarei em Celsius:\n");
    scanf("%f", &n1);

    float celsius = (n1 - 32) * 5/9;

    printf("%.2f Fahrenheit é igual a %.2fCº", n1, celsius);
    return 0;
}
