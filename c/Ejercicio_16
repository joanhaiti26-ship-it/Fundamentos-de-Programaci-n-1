#include <stdio.h>

int main()
{
    int mes, dia;
    float temp;
    FILE *f;

    f = fopen("temperaturas.txt", "w");

    if (f == NULL) {
        printf("Error abriendo fichero");
        return 0;
    }

    printf("Dame el dia: ");
    scanf("%d", &dia);

    printf("Dame el mes: ");
    scanf("%d", &mes);

    printf("Dame la temperatura: ");
    scanf("%f", &temp);

    fprintf(f, "%d %d %.2f\n", mes, dia, temp);

    fclose(f);

    return 0;
}