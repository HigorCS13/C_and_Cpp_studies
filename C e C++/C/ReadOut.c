#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");

	int c;
	
	FILE *file;

	file = fopen("texto.txt", "r");

	if (file)
	{
		while ((c = getc(file)) != EOF)
		{
			printf("%c", c);
		}
	}

	fclose(file);

	printf("\n");
	system("pause");
}
