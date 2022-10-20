#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    float a, b;
    int c;

    printf("Insira primeiro número: ");
    scanf("%f", &a);
    printf("\n");

    printf("Insira segundo número: ");
    scanf("%f", &b);
    printf("\n");

    printf("selecione a operação matemática desejada: \n1 - soma \n2 - subtração \n3 - divisão \n4 - multiplicação");
    printf("\n");
    scanf("%d", &c);
    printf("\n");

    switch(c) {

        case 1:
        printf("A soma é %.2f", a+b);
        break;

        case 2:
        printf("A subtração é %.2f", a-b);
        break;

        case 3:
        printf("A divisão é %.2f", a/b);
        break;

        case 4:
        printf("A multiplicação é %.2f", a*b);
        break;

        default:
        printf("Opção inválida!");
        break;
    }

printf("\n");
system("pause");
}
