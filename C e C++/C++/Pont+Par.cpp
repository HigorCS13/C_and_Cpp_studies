#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

int retdez (int num) {
    return num + 10;
}

void pldez (int *num) {
    *num = *num + 10;
    }

int main() {
setlocale(LC_ALL, "");

    int x = 10;
    printf("%d\n", x);

    x = retdez(x);
    printf("%d\n", x);

    pldez(&x);
    printf("%d\n", x);


printf("\n");
system("pause");

return 0;
}
