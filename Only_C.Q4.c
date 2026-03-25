//QUADRADO DE UM NÚMERO REAL
#include <stdio.h>

int main() {
    float n1;
    
    printf("Me diga um número real e te direi o quadrado dele:\n");
    scanf("%f", &n1);

    float quadrado = n1 * n1;

    printf("O quadrado desse número é %.2f", quadrado);
    return 0;

}
