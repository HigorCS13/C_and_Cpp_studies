#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int a = 10;

    if (a > 5 && a < 15) {
        printf("Vari�vel 'a' est� entre 5 e 15.");
    }
    printf("\n");

    if (a > 5 || a == 15) {
        printf("Vari�vel 'a' � maior  que 5 ou igual a 15.");
    }
    printf("\n");

    if ((a > 5 && a < 15) || a == 20) {
        printf("Vari�vel 'a' est� entre 5 e 15 ou � igual a 20.");
    }
    printf("\n");



printf("\n");
system("pause");
}
