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

	ofstream file;

	file.open("Texto.txt", std::ios_base::app);

	file << "\nTexto teste";

	file.close();

	printf("\n");
	system("pause");

	return 0;
}
