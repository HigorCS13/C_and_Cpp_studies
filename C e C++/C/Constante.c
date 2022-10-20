#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define X 10

void main() {
setlocale(LC_ALL, "");

    int a;

    for(a=1; a<=X; a++) {
        printf("\n%d", a);
    }

printf("\n");
system("pause");
}
