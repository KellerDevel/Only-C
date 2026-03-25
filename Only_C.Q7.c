/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//temperatura em graus Fahrenheit convertida em graus Celsius.
#include <stdio.h>

int main() {
    float n1;
    
    printf("Me diga a temperatura em graus Fahrenheit e transformarei em Celsius:\n");
    scanf("%f", &n1);

    float celsius = (n1 - 32) * 5/9;

    printf("%.2f Fahrenheit é igual a %.2fCº", n1, celsius);
    return 0;
}