#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    float a, b;

    printf("Insira nota do primeiro semestre: ");
    scanf("%f", &a);
    printf("\n");

    printf("Insira nota do segundo semestre: ");
    scanf("%f", &b);
    printf("\n");

    printf("A média anual é: %f", ((a+b)/2));
    printf("\n");

    system("pause");
}
