#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    float a, b;
    int c;

    printf("Insira primeiro n�mero: ");
    scanf("%f", &a);
    printf("\n");

    printf("Insira segundo n�mero: ");
    scanf("%f", &b);
    printf("\n");

    printf("selecione a opera��o matem�tica desejada: \n1 - soma \n2 - subtra��o \n3 - divis�o \n4 - multiplica��o");
    printf("\n");
    scanf("%d", &c);
    printf("\n");

    switch(c) {

        case 1:
        printf("A soma � %.2f", a+b);
        break;

        case 2:
        printf("A subtra��o � %.2f", a-b);
        break;

        case 3:
        printf("A divis�o � %.2f", a/b);
        break;

        case 4:
        printf("A multiplica��o � %.2f", a*b);
        break;

        default:
        printf("Op��o inv�lida!");
        break;
    }

printf("\n");
system("pause");
}
