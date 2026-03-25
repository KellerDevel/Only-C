/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//CONVERSÃO DE KM/H PARA M/s.
#include <stdio.h>

int main() {
    float kmH;

    printf("Qual era a velocidade em km/h?\n");
    scanf("%f", &kmH);
    
    float mS = kmH / 3.6;
    
    printf("%.2f km/h é igual a %.2f m/s", kmH, mS);
}