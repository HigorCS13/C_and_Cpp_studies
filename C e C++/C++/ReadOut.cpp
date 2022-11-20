#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");

	ifstream input("Texto.txt");

	string read;

	for (string line; getline(input, line);)
	{
		read += line;
	}

	cout << read;

	printf("\n");
	system("pause");

	return 0;
}
