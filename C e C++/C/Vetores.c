#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int vetor[3], x;

    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    printf("\nPosi��o 0: %d", vetor[0]);
    printf("\nPosi��o 1: %d", vetor[1]);
    printf("\nPosi��o 2: %d", vetor[2]);

    for(x=0; x<3; x++) {
        printf("\nPosi��o %d: %d", x, vetor[x]);
    }


printf("\n");
system("pause");
}
