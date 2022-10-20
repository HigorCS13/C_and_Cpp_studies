//Bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>
#include <stdbool.h>

//Funções automatizadas:

using namespace std;

int main() {
setlocale(LC_ALL, "");

//Vairáveis:

int d;
float f;
char c;
bool b;

//Valores:

d = 10;
f = 2.9;
c = 'H';
b = true;

//Imprimindo em C:

printf("%d\n", d);
printf("%.2f\n", f);
printf("%c\n", c);
printf("%d\n", b);

//Imprimindo em C++:

cout << "Olá!";

//Lendo Valores em C:

scanf("Novo valor inteiro: %d", &d);
printf("%d\n", d);
scanf("Novo valor decimal: %f", &f);
printf("%.2f\n", f);

//Lendo Valores em C++:

cout << "\nNovo valor caractére: ";
cin >> c;
cout << "\nNovo valor booleano: ";
cin >> b;


printf("\n");
system("pause");

return 0;
}
