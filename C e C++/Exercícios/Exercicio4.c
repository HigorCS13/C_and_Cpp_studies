#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main() {
setlocale(LC_ALL, "");

    float a, b, c, d;

    printf("Insira as tr�s notas do aluno: ");
    printf("\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("\n");

    d = ((a+b+c)/3);

    if (d >= 7) {
        printf("A nota final � %.2f, o aluno est� aprovado!", d);
    } else {
        printf("A nota final � %.2f, o aluno est� reprovado!", d);
    }


printf("\n");
system("pause");
}
