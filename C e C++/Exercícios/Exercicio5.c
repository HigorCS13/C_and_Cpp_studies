#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int a,b,c;

    printf("Insira os valores dos lados do triângulo: ");
    printf("\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("\n");

    if(a==b && b==c) {
        printf("O triângulo é equilátero.");
    }else if (a==b || b==c || c==a) {
        printf("O triângulo é isóceles.");
    }else {
        printf("O triângulo é escaleno.");
    }

printf("\n");
system("pause");
}
