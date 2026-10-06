
#include <stdio.h>

int main()
{
    float suma, nota;
    int alumnos;

    suma = 0;
    alumnos = 0;

    do
    {
        printf("Nota: ");
        scanf("%f", &nota);

        if (nota >= 0 && nota <= 10)
        {
            suma += nota;
            alumnos++;
        }

    } while (nota >= 0 && nota <= 10);

    if (alumnos > 0)
        printf("Nota media: %.2f", suma / alumnos);
    else
        printf("No se han puesto notas buenas");

    return 0;
}