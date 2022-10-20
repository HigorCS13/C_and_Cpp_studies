#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int vetor[3], x;

    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    printf("\nPosição 0: %d", vetor[0]);
    printf("\nPosição 1: %d", vetor[1]);
    printf("\nPosição 2: %d", vetor[2]);

    for(x=0; x<3; x++) {
        printf("\nPosição %d: %d", x, vetor[x]);
    }


printf("\n");
system("pause");
}
