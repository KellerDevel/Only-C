#include <stdio.h>

int main () {
    
    int contador, grau, total, media;

/* fase de inicialização */

    total = 0;
    contador = 1;

/* fase de processamento */

while (contador <= 15) {
    printf ("Entre com o grau: ");
    scanf ("%d", &grau);
    total = total + grau;
    contador = contador + 1;
    }

/* fase de terminação */

media = total / 10;
printf ("A media da turma é %d\n", media);
return 0;
 }