#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int a = 116;
    char c = 't';

    if (c == 't') {
        printf("Variável c = t! Seu código ASCII é %d", c);
    }
    printf("\n");

    if (a == 116) {
        printf("Variável a = 116! Sua nomeclatura ASCII é %c", a);
    }
    printf("\n");

printf("\n");
system("pause");
}
