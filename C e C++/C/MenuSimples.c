#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int a;

    while(a<1 || a>3){
        printf("\nEscolha uma op��o:\n");
        printf("1 - Op��o 1\n");
        printf("2 - Op��o 2\n");
        printf("3 - Op��o 3\n");

    scanf("%d", &a);
    printf("\n");

    switch(a) {
        case 1:
        printf("Op��o 1 escolhida.");
        break;

        case 2:
        printf("Op��o 2 escolhida.");
        break;

        case 3:
        printf("Op��o 3 escolhida.");
        break;

        default:
        printf("Op��o inv�lida.");
        break;
    }
    printf("\n");
  }

printf("\n");
system("pause");
}
