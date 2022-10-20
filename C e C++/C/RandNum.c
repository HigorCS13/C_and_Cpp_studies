#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main() {
setlocale(LC_ALL, "");

    srand ((unsigned)time(NULL));
    int a = rand();

    printf("%d", a);
    printf("\n");

    printf("%d", a%3);
    printf("\n");

    printf("%d", (a%5)+1);
    printf("\n");

printf("\n");
system("pause");
}
