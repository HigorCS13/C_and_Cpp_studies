#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int a=1, b=20;

    while (a<=10) {
        printf("%d", a);
        printf("\n");
        a++;
    }
    printf("\n");

    do {
        printf("%d", b);
        printf("\n");
        b--;
    }while (b>=1);


printf("\n");
system("pause");
}
