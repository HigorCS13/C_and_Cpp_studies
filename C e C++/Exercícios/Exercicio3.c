#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int a, b, c;

    printf("Digite tr�s valores inteiros: ");
    printf("\n");

    scanf("%d" "%d" "%d", &a, &b, &c);
    printf("\n");

    printf("O produto total desses valores �: %d", (a*b*c));
    printf("\n");

    system("pause");
}
