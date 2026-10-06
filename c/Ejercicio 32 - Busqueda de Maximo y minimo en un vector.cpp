#include <cstdio>
void MaxMin(int v[], int Tam, int *Max, int *Min)
{
    int i;
    
    *Max = v[0];
    *Min = v[0];
    for (i=0; i<Tam; i++)
        if (v[i] > *Max)
            *Max = v[i];
        else if (v[i] < *Min)
            *Min = v[i];
}

int main() 
{
    int Valores[] = {12, 45, 2, 89, 4, 23};
    int tamano = 6;
    int maximo, minimo;
     MaxMin(Valores, tamano, &maximo, &minimo);

    printf("El valor maximo es: %d\n", maximo);
    printf("El valor minimo es: %d\n", minimo);

    return 0;
}