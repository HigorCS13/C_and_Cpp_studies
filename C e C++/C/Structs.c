#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct palavra 
{
	int ordem;
	char letra;
	char texto [255];
};

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");

	struct palavra primeiraPalavra;

	primeiraPalavra.ordem = 10;
	primeiraPalavra.letra = 'P';
	strcpy(primeiraPalavra.texto, "Palavra");

	printf("Ordem: %d\nPrimeira letra: %c\nPalavra: %s", primeiraPalavra.ordem, primeiraPalavra.letra, primeiraPalavra.texto);
	printf("\n");

	struct palavra listaPalavras[3];

	listaPalavras[0].ordem = 0;
	listaPalavras[1].ordem = 1;
	listaPalavras[2].ordem = 2;
	listaPalavras[0].letra = 'a';
	listaPalavras[1].letra = 'b';
	listaPalavras[2].letra = 'c';
	strcpy(listaPalavras[0].texto, "Uni");
	strcpy(listaPalavras[1].texto, "Duni");
	strcpy(listaPalavras[2].texto, "Te");

	int cont;

	for (cont = 0; cont < 3; cont++)
	{
	printf("Ordem: %d\nPrimeira letra: %c\nPalavra: %s", listaPalavras[cont].ordem, listaPalavras[cont].letra, listaPalavras[cont].texto);
	printf("\n");
	}

	system("pause");
}
