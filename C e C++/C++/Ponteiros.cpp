#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

int main() {
setlocale(LC_ALL, "");

    int a = 20;

    printf("Valor de a: %d \n", a);

    printf("Endereço de a: %d \n", &a);

    int b = 10;

    int *ponteiro;

    ponteiro = &b;

    printf("Valor de b: %d \n", b);

    *ponteiro = 40;

    printf("Valor de b: %d \n", b);

    printf("Endereço de b: %d \n", &b);


printf("\n");
system("pause");

return 0;
}
