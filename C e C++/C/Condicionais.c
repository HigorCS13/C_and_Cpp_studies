#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int a = 5;
    float b = 2.5;
    char c = 't';

    if (a == 5) {
        printf("Vari�vel a = 5");
    }
    printf("\n");

    if (b == 2.5) {
        printf("Vari�vel b = 2,5");
    }
    printf("\n");

    if (c == 't') {
        printf("Vari�vel c = letra t");
    }
    printf("\n");

    if (a%2 == 1) {
        printf("Vari�vel a � impar!");
    }else {
        printf("vari�vel a � par!");
    }

printf("\n");
system("pause");
}
