#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>

void main() {
setlocale(LC_ALL, "");

    bool a = true, b = false;

    if (a) {
        printf("Vari�vel a � verdadeira!");
    }
    printf("\n");

    if(b) {
        printf("Vari�vel b � verdadeira!");
    }else {
        printf("Vari�vel b � falsa!");
    }
    printf("\n");

    if(!b) {
        printf("Vari�vel b � l�gicamnete falsa!");
    }

printf("\n");
system("pause");
}
