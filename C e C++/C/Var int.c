#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    int a = 5, b;
    printf("O valor da vari�vel a �: %d", a);
    printf("\n");

    a = 15;
    printf("O valor da vari�vel a �: %d", a);
    printf("\n");

    scanf("%d", &b);
    printf("O valor da vari�vel b �: %d", b);
    printf("\n");

    printf("UHUUL");
    printf("\n");

    system("pause");
}
