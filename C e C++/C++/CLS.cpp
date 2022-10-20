#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

void clean() {
    system("CLS");
}

int main() {
setlocale(LC_ALL, "");

    int a;

    printf("Insira o valor de a: ");
    scanf("%d", &a);

    clean();

    printf("O valor de a é: %d\nFim de programa!", a);


printf("\n");
system("pause");

return 0;
}
