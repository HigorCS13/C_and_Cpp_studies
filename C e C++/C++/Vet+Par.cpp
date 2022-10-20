#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

void imprimeVetor(int *vetor, int tam){

    int i;

    for(i = 0; i < tam;i++)
        printf("%d \n",vetor[i]);

}

void modificaVetor(int *vetor, int tam){

    int i;

    for(i = 0; i < tam;i++)
        vetor[i] = vetor[i] + 1;

}


int main() {
setlocale(LC_ALL, "");


        int v[3] = {1,2,3};

        imprimeVetor(v, 3);

        modificaVetor(v, 3);

        imprimeVetor(v, 3);

printf("\n");
system("pause");

return 0;
}
