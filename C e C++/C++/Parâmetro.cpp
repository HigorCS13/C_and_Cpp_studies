#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

void parametro1(int num) {
    printf("\nO sucessor de %d � %d", num, num + 1);
}

int parametro2(int num) {
    return num - 1;
}

int main() {
setlocale(LC_ALL, "");

    int x;

    printf("Insira um n�mero inteiro: ");
    scanf("%d", &x);

    parametro1(x);

    printf("\nO antecessor � %d", parametro2(x));


printf("\n");
system("pause");

return 0;
}
