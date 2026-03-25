/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//temperatura em graus Celsius convertida em graus Fahrenheit.
#include <stdio.h>

int main() {
    float n1;
    
    printf("Me diga a temperatura em graus celsius e transformarei em Fahrenheit:\n");
    scanf("%f", &n1);

    float fahrenheit = (n1 * 1.8) + 32;

    printf("%.2fCº é igual a %.2f Fahrenheit", n1, fahrenheit);
    return 0;
}