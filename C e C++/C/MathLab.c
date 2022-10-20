#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

printf("Fala cambada!");
printf("\n");

int a = 6, b = 3;

printf("A soma de %d + %d é igual a: %d", a, b, a+b);
printf("\n");

printf("A subtração de %d - %d é igual a: %d", a, b, a-b);
printf("\n");

printf("A multiplicação de %d * %d é igual a: %d", a, b, a*b);
printf("\n");

printf("A divisão de %d / %d é igual a: %d", a, b, a/b);
printf("\n");

printf("O resto da divisão de %d por %d é igual a: %d", a, b, a%b);
printf("\n");

printf("O valor absoluto da subtração de %d - %d é igual a: %d", b, a, abs(b-a));
printf("\n");

system("pause");
}
