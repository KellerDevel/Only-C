/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float n1;
    
    printf("Me diga um número real e te direi a quinta parte dele:\n");
    scanf("%f", &n1);

    float quintaparte = n1 / 5;

    printf("A quinta parte desse número é %.2f", quintaparte);
    return 0;

}