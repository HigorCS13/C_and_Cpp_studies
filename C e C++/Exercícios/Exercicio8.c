#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int a=10;

    while(a<=20) {
        printf("%d\n", a);
        a=a+2;
    }printf("\n");

    a=10;

    do {
        printf("%d", a);
        printf("\n");
        a=a+2;
    }while(a<=20);
    printf("\n");

    for (a=10; a<=20; a=a+2) {
        printf("%d", a);
        printf("\n");
    }

printf("\n");
system("pause");
}
