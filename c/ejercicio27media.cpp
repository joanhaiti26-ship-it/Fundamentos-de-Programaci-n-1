#include <stdio.h>

/* Version 1: media de tres enteros */
float media(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

/* Version 2 (modificacion): media de un vector de tam elementos */
float mediaVector(int v[], int tam)
{
    int i;
    float m = 0;

    for (i = 0; i < tam; i++)
        m += v[i];

    return m / tam;
}

int main()
{
    int i1 = -4, i2 = 7, i3 = 1;
    float med;
    int v[] = {-4, 7, 1};

    med = media(i1, i2, i3);
    printf("Media (tres enteros): %.2f\n", med);

    printf("Media (vector): %.2f\n", mediaVector(v, 3));

    return 0;
}
