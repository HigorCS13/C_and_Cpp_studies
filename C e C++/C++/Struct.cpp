#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

struct fruta
{
    string cor;
    string nome;
};

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");

    fruta *fruta1 = new fruta;

    fruta1->cor = "Amarelo";
    fruta1->nome = "Banana";

    cout << "Fruta: " << fruta1->nome << ", Cor: " << fruta1->cor;

    fruta *frutas = new fruta[2];

    frutas[0].cor = "Vermelho";
    frutas[0].nome = "Morango";
    frutas[1].cor = "Verde";
    frutas[1].nome = "Uva";

    int c;

    for (c = 0; c < 2; c++)
    {
        cout << "\nFruta: " << frutas[c].nome << ", Cor: " << frutas[c].cor;
    }
    
	printf("\n");
	system("pause");

	return 0;
}
