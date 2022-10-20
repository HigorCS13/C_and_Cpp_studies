#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "");

    int a, b, c=0;

    printf("Digite um número inteiro: ");
    scanf("%d", &b);

    for(a=1; a<=b; a++) {
        if (b % a == 0) {
            c++;
        }
        printf("%d / %d tem o resto = %d \n", b, a, b%a);
    }

    if (c==2){
        printf("O número é primo!");
    }else {
        printf("O número não é primo! Possui um total de %d divisores.", c);
    }

printf("\n");
system("pause");
}
