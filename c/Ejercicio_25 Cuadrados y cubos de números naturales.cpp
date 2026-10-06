#include <stdio.h>

int main() {
    int i;
    FILE *f;

    f = fopen("cuadrados_cubos.txt", "w");   // Abrir el fichero en modo escritura

    if (f == NULL) {
        printf("Error al abrir el fichero\n");
        return 1;
    }

    fprintf(f, "Número\tCuadrado\tCubo\n");
    fprintf(f, "-----------------------------\n");

    for (i = 1; i <= 10; i++) {
        fprintf(f, "%d\t%d\t\t%d\n", i, i*i, i*i*i);
    }

    fclose(f);   // Cerrar el fichero
    printf("Datos guardados correctamente en cuadrados_cubos.txt\n");

    return 0;
}