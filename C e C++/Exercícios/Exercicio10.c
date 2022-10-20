#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int x;
    printf("Selecione a quantidade de vetores: ");
    scanf("%d", &x);
    printf("\n");

    int a;
    float vetor[x];

    for (a=0; a<x; a++) {
        printf("\nInsira os vetores desejados: \n");
        scanf("%f", &vetor[a]);
    }

    for (a=0; a<x; a++) {
        printf("Vetor [%d] = %.2f\n", a, vetor[a]);
    }
    printf("\n");

    printf("A média dos valores inseridos é %.2f", (vetor[0]+vetor[1]+vetor[2])/x);



printf("\n");
system("pause");
}
