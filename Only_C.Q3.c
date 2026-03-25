/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float n1, n2, n3;
    
    printf("Me diga três números:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    float soma = n1 + n2 + n3;

    printf("A soma dele é %.2f", soma);
    return 0;

}