/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//CONVERSÃO DE MILHAS PARA KMs
#include <stdio.h>

int main() {
    float kms;

    printf("Qual era a distância em km?\n");
    scanf("%f", &kms);
    
    float milhas = kms / 1.61;
    
    printf("%.2f kms é igual a %.2f milhas", kms, milhas);
}