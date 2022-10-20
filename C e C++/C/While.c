#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int a=1, b=10;

    while (a<=10) {

        printf("%d", a);
        printf("\n");
        a++;
    }

    while (b>=1) {

        printf("%d", b);
        printf("\n");
        b--;
    }


printf("\n");
system("pause");
}
