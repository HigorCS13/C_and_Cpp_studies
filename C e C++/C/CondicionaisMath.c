#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main() {
setlocale(LC_ALL, "");

    int a = 5, b =10, c = 15;
    char d = 't';

    if (a>2) {
        printf("%d � maior que 2!", a);
    }
    printf("\n");

    if (a<b) {
        printf("%d � menor que %d!", a, b);
    }
    printf("\n");
    if (c>=15) {
        printf("Vari�vel c � maior ou igual a 15!");
    }
    printf("\n");
    if (b<=10) {
        printf("Vari�vel b � menor ou igual a 10!");
    }
    printf("\n");
    if (c!='h') {
        printf("%c � diferente de h!", d);
    }
printf("\n");
system("pause");
}
