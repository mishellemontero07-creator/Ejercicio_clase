#include <stdio.h>
#include "sumar.h"
#include "restar.h"
#include "multiplicar.h"
#include "dividir.h"



int sumar (int a, int b);
int main (int argc, char const*argv [])
{
 int a,b;
 printf ("ingrese 1er número: ");
 scanf("%d", &a);

 printf ("ingrese 2do número: ");
 scanf("%d", &b);
     printf("El resultado de la suma es: %d", sumar(a,b));
    printf("El resultado de la resta es:%d", restar(a,b));
    printf("El resultado de la multiplicación es: %d ", multiplicar(a,b));
    printf("El resultado de la división es: %d ", dividir(a,b));

 return 0;

}


