#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int a = 116;
    char c = 't';

    if (c == 't') {
        printf("Vari�vel c = t! Seu c�digo ASCII � %d", c);
    }
    printf("\n");

    if (a == 116) {
        printf("Vari�vel a = 116! Sua nomeclatura ASCII � %c", a);
    }
    printf("\n");

printf("\n");
system("pause");
}
