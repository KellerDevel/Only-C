//temperatura em graus KELVINS convertida em graus CELSIUS.
#include <stdio.h>

int main() {
    float kelvin;
    
    printf("Me diga a temperatura em kelvin e transformarei em Celsius:\n");
    scanf("%f", &kelvin);

    float celsius = kelvin - 273.15;

    printf("%.2f kelvins é igual a %.2fCº", kelvin, celsius);
    return 0;
}
