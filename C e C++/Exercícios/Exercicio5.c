#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int a,b,c;

    printf("Insira os valores dos lados do tri�ngulo: ");
    printf("\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("\n");

    if(a==b && b==c) {
        printf("O tri�ngulo � equil�tero.");
    }else if (a==b || b==c || c==a) {
        printf("O tri�ngulo � is�celes.");
    }else {
        printf("O tri�ngulo � escaleno.");
    }

printf("\n");
system("pause");
}
