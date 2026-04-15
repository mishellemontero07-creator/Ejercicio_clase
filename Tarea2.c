#include <stdio.h>
int main(int argc, char const *argv[])
{
    int notas[5][3];
    int nota, suma;
    float promedio;
    

    //bloque 1: ingreso de datos y validación de nota
    for (int i=0; i < 5; i++)
    {
        for(int j=0; j < 3; j++)
        {

            printf("Ingresa la nota del estudiante %d para asignatura %d: ", i+1, j+1);
            scanf("%d", &nota);

            while (nota < 0 || nota >10)
            {
               
                printf("ERROR!!, nota ingresada inválida, intentelo de nuevo\n");
                scanf("%d", &nota);

            }
            notas[i][j]= nota;  
        }
    }

    


    return 0;
}

