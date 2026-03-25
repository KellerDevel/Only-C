//QUINTA PARTE DE UM NÚMERO REAL
#include <stdio.h>

int main() {
    float n1;
    
    printf("Me diga um número real e te direi a quinta parte dele:\n");
    scanf("%f", &n1);

    float quintaparte = n1 / 5;

    printf("A quinta parte desse número é %.2f", quintaparte);
    return 0;

}
