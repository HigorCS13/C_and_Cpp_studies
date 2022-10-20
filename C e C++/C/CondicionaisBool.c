#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>

void main() {
setlocale(LC_ALL, "");

    bool a = true, b = false;

    if (a) {
        printf("Variável a é verdadeira!");
    }
    printf("\n");

    if(b) {
        printf("Variável b é verdadeira!");
    }else {
        printf("Variável b é falsa!");
    }
    printf("\n");

    if(!b) {
        printf("Variável b é lógicamnete falsa!");
    }

printf("\n");
system("pause");
}
