#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int lin, col, i, j;
	int **mat;

	printf("Digite o número de linhas: ");
	scanf("%d", &lin);
	printf("Digite o número de colunas: ");
	scanf("%d", &col);
	mat = (int **) malloc(lin * sizeof(int *));
	for (i = 0; i < lin; i++)
	{
		mat[i] = (int *) malloc(col * sizeof(int));
	}
	for (i = 0; i < lin; i++)
	{
		for (j = 0; j < col; j++)
		{
			mat[i][j] = i + j;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	system ("pause");
	free (mat);
	return 0;
}
