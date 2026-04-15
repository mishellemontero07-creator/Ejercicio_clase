#include <stdio.h>
int main(int argc, char const *argv[])
{
    int notas[5][3];
    int nota, suma;
    float promedio;
    int max, min;
    int aprobados, reprobados;


    

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

    printf("------Promedio Notas estudiante------");
    
    //bloque 2: promedio de notas por estudiante

    for (int i=0; i < 5; i++)
    {
        suma=0;

        for(int j=0; j < 3; j++)
        { 
            suma= suma + notas [i][j];
        }

        promedio = suma/3.0;
        printf("El promedio del estudiante %d es de %.2f\n ", i+1, promedio); 
    }

    printf("------Promedio Asignaturas------");

    //bloque 3: promedio asignaturas 

    for (int j=0; j < 3; j++)
    {
        suma=0;

        for(int i=0; i < 5; i++)
        { 
            suma= suma + notas [i][j];
        }

        promedio = suma/5.0;
        printf("El promedio de la asignatura %d es de %.2f\n ", j+1, promedio); 
    }

    
    printf("------Nota más alta y baja por asignatura------");

    //bloque 4: nota más alta y baja por asignatura

     for (int j=0; j < 3; j++)
    {
        max= notas[0][j]; 
        min= notas[0][j]; 
    
        for(int i=0; i < 5; i++)
        { 
        
        if (notas[i][j] > max)
            {
             max = notas[i][j];
            } 

        if (notas [i][j] < min)
        {
            min= notas [i][j];
        }
        }
        printf("Asignatura %d: maxima = %d, minima = %d\n", j+1, max, min);

    }

    
    printf("------Nota más alta y baja por estudiante------");
    

    //bloque 5:  nota más alta y baja por estudiante 


     for (int i=0; i < 5; i++)
    {

        max= notas[i][0]; 
        min= notas[i][0]; 

        for(int j=0; j < 3; j++)
        { 
         if (notas[i][j] > max)
            {
             max = notas[i][j];
            } 

        if (notas [i][j] < min)
            {
            min= notas [i][j];
            }
        }

     printf("Estudiante %d: maxima = %d, minima = %d\n", i+1, max, min);
    }
    
    //Bloque 6: aprobados y reprobados por asignatura

    for (int j = 0; j < 3; j++)
    {
    aprobados = 0;
    reprobados = 0;

    for (int i = 0; i < 5; i++)
    {
        if (notas[i][j] >= 6)
        {
            aprobados++;
        }
        else
        {
            reprobados++;
        }
    }
        printf("Asignatura %d: aprobados = %d, reprobados = %d\n", j+1, aprobados, reprobados);
    }

    return 0;
}


