#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
   setlocale(LC_ALL, "");
   printf("Olá Mundo!");
   printf("\n");

   int a = 50;
   printf ("O valor de a é: %d", a);
   printf("\n");
   scanf ("%d", &a);
   printf ("O valor de a mudou para: %d", a);
   printf("\n");

   float b = 4.7;
   printf ("O valor de b é: %f", b);
   printf("\n");
   scanf ("%f", &b);
   printf ("O valor de b mudou para: %f", b);
   printf("\n");

   char c = 't';
   printf ("O valor de c é: %c", c);
   fflush(stdin);
   printf("\n");
   scanf ("%c", &c);
   printf ("O valor de c mudou para: %c", c);
    }
