#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

char letra() {
return 'x';
}

int main() {
setlocale(LC_ALL, "");

    char x;

    x = letra();

    printf("Letra = %c", x);

printf("\n");
system("pause");

return 0;
}
