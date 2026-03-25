//CONVERSÃO DE KM/H PARA M/s.
#include <stdio.h>
 
int main() {
    float mS;

    printf("Qual era a velocidade em m/s?\n");
    scanf("%f", &mS);
    
    float kmH = mS / 3.6;
    
    printf("%.2f m/s é igual a %.2f km/h", kmH, mS);
}
