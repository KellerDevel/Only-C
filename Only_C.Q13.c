//CONVERSÃO DE MILHAS PARA KMs
#include <stdio.h>

int main() {
    float milhas;

    printf("Qual era a distância em milhas?\n");
    scanf("%f", &milhas);
    
    float kms = milhas * 1.61;
    
    printf("%.2f milhas é igual a %.2f km", milhas, kms);
}
