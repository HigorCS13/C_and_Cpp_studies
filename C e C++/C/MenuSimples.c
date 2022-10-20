#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int a;

    while(a<1 || a>3){
        printf("\nEscolha uma opção:\n");
        printf("1 - Opção 1\n");
        printf("2 - Opção 2\n");
        printf("3 - Opção 3\n");

    scanf("%d", &a);
    printf("\n");

    switch(a) {
        case 1:
        printf("Opção 1 escolhida.");
        break;

        case 2:
        printf("Opção 2 escolhida.");
        break;

        case 3:
        printf("Opção 3 escolhida.");
        break;

        default:
        printf("Opção inválida.");
        break;
    }
    printf("\n");
  }

printf("\n");
system("pause");
}
