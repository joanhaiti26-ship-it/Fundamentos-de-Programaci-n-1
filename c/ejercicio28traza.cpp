#include <stdio.h>

/* Devuelve el minimo del vector */
int f1(int v[], int t)
{
    int i, x;
    x = v[0];
    for (i = 0; i < t; i++)
        if (v[i] < x)
            x = v[i];
    return x;
}

/* Busca x en el vector: devuelve 1 si esta y 0 si no */
int f2(int v[], int t, int x)
{
    int i;
    for (i = 0; i < t; i++)
        if (v[i] == x)
            return 1;
    return 0;
}

int main()
{
    int vec[5] = {6, -4, -2, 7, 2};

    printf("f1: %d\n", f1(vec, 5));
    if (f2(vec, 5, 7) == 1)
        printf("Si.\n");
    else
        printf("No.\n");

    return 0;
}
