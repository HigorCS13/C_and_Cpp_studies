#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int a = 5;
    float b = 2.5;
    char c = 't';

    if (a == 5) {
        printf("Variável a = 5");
    }
    printf("\n");

    if (b == 2.5) {
        printf("Variável b = 2,5");
    }
    printf("\n");

    if (c == 't') {
        printf("Variável c = letra t");
    }
    printf("\n");

    if (a%2 == 1) {
        printf("Variável a é impar!");
    }else {
        printf("variável a é par!");
    }

printf("\n");
system("pause");
}
