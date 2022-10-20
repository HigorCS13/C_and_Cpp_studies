#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

int main() {
setlocale(LC_ALL, "");

    string x;

    cout << "Digite uma palavra:\n";

    cin >> x;

    cout << "A palavra é: "<< x;


printf("\n");
system("pause");

return 0;
}
