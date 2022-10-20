#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* alVet (int tam)
{

    int *aux;

    aux = (int*) malloc(tam * sizeof(int));

    return aux;

}
int main()
{
	setlocale(LC_ALL, "");

	int *vet, tam, i;
	printf("Digite um tamanho: ");
	scanf("%d", &tam);
	vet = alVet(tam);

	for(i = 0; i < tam; i++)
	{
		vet[i] = i + 1;
		printf("%d\n", vet[i]);
	}
	free (vet);
	system("pause");

	return 0;
}
