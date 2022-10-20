#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int tam, i;
	int *vet = new int[tam];

	printf("Digite o Tamanho: ");
	scanf("%d", &tam);


	for (i = 0; i < tam; i++)
	{
		vet[i] = i + 1;
		printf("%d\n", vet[i]);
	}
	system("pause");
	return 0;
}
