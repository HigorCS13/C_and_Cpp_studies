#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>
#include <fstream>
#define TAM 10

using namespace std;

void print_vet (int vetor[TAM])
{
	int c;

	for (c = 0; c < TAM; c++)
	{
		cout << vetor[c];
		if(c < (TAM - 1))
			 cout << " - ";
	}
}

int simpleSearch (int vetor[TAM], int search, int *pos)
{
	int c;
	bool find;

	for (c = 0; c < TAM; c++)
	{
		if (vetor[c] == search)
		{
			find = true;
			*pos = c;
		}
	}

	if (find)
	{
		return 1;
	} else {
		return 0;
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");

	int vetor[TAM] = {1,23,54,67,32,65,33,77,99,3};
	int search;
	int pos;

	print_vet (vetor);

	cout << "\n";

	cout << "Qual número deseja encontrar? ";
	cin >> search;

	

	if (simpleSearch(vetor, search, &pos))
	{
		cout << "Valor encontrado! Sua posiçâo é " << (pos + 1);	
	} else {
		cout << "Valor não encontrado!";
	}


	cout << "\n";
	system("pause");

	return 0;
}
