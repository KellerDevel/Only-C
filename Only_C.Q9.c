/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//temperatura em graus Fahrenheit convertida em graus Celsius.
#include <stdio.h>

int main() {
    float celsius;
    
    printf("Me diga a temperatura em Celsius e transformarei em kelvins:\n");
    scanf("%f", &celsius);

    float kelvin  = celsius + 273.15;

    printf("%.2f kelvins é igual a %.2fCº", celsius, kelvin);
    return 0;
}