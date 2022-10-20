#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int a=10;

    while(a>=0) {
        printf("%d\n", a);
        a--;
    }printf("\n");

    a=10;

    do {
        printf("%d", a);
        printf("\n");
        a--;
    }while(a>=0);
    printf("\n");

    for (a=10; a>=0; a--) {
        printf("%d", a);
        printf("\n");
    }

printf("\n");
system("pause");
}
