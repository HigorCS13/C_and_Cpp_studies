#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

printf("Fala cambada!");
printf("\n");

int a = 6, b = 3;

printf("A soma de %d + %d � igual a: %d", a, b, a+b);
printf("\n");

printf("A subtra��o de %d - %d � igual a: %d", a, b, a-b);
printf("\n");

printf("A multiplica��o de %d * %d � igual a: %d", a, b, a*b);
printf("\n");

printf("A divis�o de %d / %d � igual a: %d", a, b, a/b);
printf("\n");

printf("O resto da divis�o de %d por %d � igual a: %d", a, b, a%b);
printf("\n");

printf("O valor absoluto da subtra��o de %d - %d � igual a: %d", b, a, abs(b-a));
printf("\n");

system("pause");
}
