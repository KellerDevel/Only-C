/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//CONVERSÃO DE MILHAS PARA KMs
#include <stdio.h>

int main() {
    float milhas;

    printf("Qual era a distância em milhas?\n");
    scanf("%f", &milhas);
    
    float kms = milhas * 1.61;
    
    printf("%.2f milhas é igual a %.2f km", milhas, kms);
}