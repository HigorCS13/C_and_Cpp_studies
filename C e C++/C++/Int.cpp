#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

int dez () {
return 10;
}

float dec();


int main() {
setlocale(LC_ALL, "");

    int a;
    a = dez();
    printf("Valor de a: %d", a);

    printf("\n");

    float b;
    b = dec();
    printf("Valor de b: %.2f", b);


printf("\n");
system("pause");

return 0;
}


float dec () {
return 5.5;
}
