#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>
#include <stdbool.h>

using namespace std;

bool x() {
return 0;
}

int main() {
setlocale(LC_ALL, "");

    bool a;

    a = x();

    if (a) {
        printf("É verdade!");
    }else {
        printf("É mentira!");
    }


printf("\n");
system("pause");

return 0;
}
