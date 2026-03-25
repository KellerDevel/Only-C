//temperatura em graus CELSIUS convertida em graus KELVINS.
#include <stdio.h>

int main() {
    float celsius;
    
    printf("Me diga a temperatura em Celsius e transformarei em kelvins:\n");
    scanf("%f", &celsius);

    float kelvin  = celsius + 273.15;

    printf("%.2f kelvins é igual a %.2fCº", celsius, kelvin);
    return 0;
}
