//CONVERSÃO DE KM/H PARA M/s.
#include <stdio.h>

int main() {
    float kmH;

    printf("Qual era a velocidade em km/h?\n");
    scanf("%f", &kmH);
    
    float mS = kmH / 3.6;
    
    printf("%.2f km/h é igual a %.2f m/s", kmH, mS);
}
