//CONVERSÃO DE MILHAS PARA KMs
#include <stdio.h>

int main() {
    float kms;

    printf("Qual era a distância em km?\n");
    scanf("%f", &kms);
    
    float milhas = kms / 1.61;
    
    printf("%.2f kms é igual a %.2f milhas", kms, milhas);
}
