#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int a;

    for(a=1; a<=10; a++) {
        printf("5 X %d = %d", a, 5*a);
        printf("\n");
    }

    for(a=0; a<=10; a = a+2) {
        printf("%d", a);
        printf("\n");
    }

    for(a=10; a>=1; a--) {
        printf("%d", a);
        printf("\n");
    }

printf("\n");
system("pause");
}
