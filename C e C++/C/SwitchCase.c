#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int a;
    char b;

    printf("insira um n�mero inteiro positivo de uma casa decimal: ");
    scanf("%d", &a);
    printf("\n");

    printf("insira uma letra: ");
    fflush(stdin);
    scanf("%c", &b);
    printf("\n");

    switch(a){
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            printf("Escolheu um n�mero �mpar.");
            break;

        case 2:
        case 4:
        case 6:
        case 8:
            printf("Escolheu um n�mero par");
            break;

        case 0:
            printf("N�mero nulo");
            break;
    }

    printf("\n");

    printf("A letra escolhida foi %c", b);


printf("\n");
system("pause");
}
