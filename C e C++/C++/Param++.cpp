#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

void soma(int num1, int num2) {
    printf("\nA soma entre %d + %d é: %d", num1, num2, num1 + num2);
}

int main() {
setlocale(LC_ALL, "");

    int a, b;

    printf("\nInsira primeiro número inteiro: ");
    scanf("%d", &a);
    printf("\nInsira segundo número inteiro: ");
    scanf("%d", &b);

    soma(a,b);


printf("\n");
system("pause");

return 0;
}
