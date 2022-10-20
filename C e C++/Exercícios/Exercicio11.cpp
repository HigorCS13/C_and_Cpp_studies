#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

int main() {
setlocale(LC_ALL, "");

    int matriz [2][2], i, j, x, y;


    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            printf ("Insira valor da matriz posição [%d] [%d]: ", i, j);
            cin >> matriz [i][j];
        }
    }

    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            cout <<matriz [i][j]<<" ";
        }
        cout<<"\n";
    }

    cout << "Inversão dod valores: \n";

    x = matriz [0][0];
    y = matriz [0][1];
    matriz [0][0] = matriz [1][0];
    matriz [0][1] = matriz [1][1];
    matriz [1][0] = x;
    matriz [1][1] = y;



    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            cout <<matriz [i][j]<<" ";
        }
        cout<<"\n";
    }


    printf("Matriz [0] [0]: %d", matriz [0][0]);

printf("\n");
system("pause");

return 0;
}
