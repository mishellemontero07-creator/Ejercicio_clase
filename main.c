#include <stdio.h>
#include "sumar.h"


int sumar (int a, int b);
int main (int argc, char const*argv [])
{
 int a,b;
 printf ("ingrese 1er número: ");
 scanf("%d", &a);

 printf ("ingrese 2do número: ");
 scanf("%d", &b);

 printf("%d", suma(a,b));
 return 0;

}


