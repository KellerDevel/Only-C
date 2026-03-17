#include <stdio.h>

int main()
{
    float pi = 3.14159, raio;
    
    printf("Qual o valor do seu raio?\n");
    scanf("%f", &raio);
    
    float area = pi * (raio * raio);
    float circunferencia = 2 * pi * raio;
    float diametro = raio * 2;
    
    printf("Seu diâmetro é %.2f\n", diametro);
    printf("Sua circunferência é %.2f\n", circunferencia);
    printf("Sua área é %.2f\n", area);
    return 0;
}