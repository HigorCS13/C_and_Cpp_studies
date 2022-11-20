#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct Data
{
    int dia;
    int mês;
    int ano;
}Data;

struct Aluno
{
    int id;
    Data nascimento;
};

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");

    struct Aluno aluno1;

    aluno1.id = 33;
    aluno1.nascimento.dia = 20;   
    aluno1.nascimento.mês = 10;   
    aluno1.nascimento.ano = 1989;

    printf("O aluno 1 é nascido em %d/%d/%d", aluno1.nascimento.dia, aluno1.nascimento.mês, aluno1.nascimento.ano);   

	printf("\n");
	system("pause");
}
