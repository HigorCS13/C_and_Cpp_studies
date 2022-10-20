#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    char x[255];

    printf("Digite uma palavra\n");

    setbuf(stdin, 0);

    fgets(x, 255, stdin);

    x[strlen(x)-1] = '\0';

    printf("%s", x);


printf("\n");
system("pause");
}
