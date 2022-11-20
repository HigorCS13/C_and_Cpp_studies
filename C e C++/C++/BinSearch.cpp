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

int binSearch (int vetor[TAM], int search, int *pos)
{
	int left = 0;
	int right = TAM - 1;
	int mid;

	while (left <= right)
	{
		mid = (left + right)/2;

		if (vetor[mid] == search)
		{
			*pos = mid;
			return 1;
		}

		if (vetor[mid] < search)
		{
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}

	return 0;
}

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");

	int vetor[TAM] = {10,20,30,40,50,60,70,80,90,100};
	int search;
	int pos;

	print_vet (vetor);

	cout << "\n";

	cout << "Qual número deseja encontrar? ";
	cin >> search;

	

	if (binSearch(vetor, search, &pos))
	{
		cout << "Valor encontrado! Sua posição é " << (pos + 1);	
	} else {
		cout << "Valor não encontrado!";
	}


	cout << "\n";
	system("pause");

	return 0;
}
