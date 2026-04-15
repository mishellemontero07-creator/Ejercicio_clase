#include <stdio.h>
int main(int argc, char const *argv[])
{
    int notas[5][3];


    for (int i=0; i < 5; i++)
    {
        for(int j=0; j < 3; j++)
        {

            printf("Ingresa la nota del estudiante %d para asignatura %d", i++, j++ );
            scanf("%d", &notas[i][j]);
        }
    }

    return 0;
}
