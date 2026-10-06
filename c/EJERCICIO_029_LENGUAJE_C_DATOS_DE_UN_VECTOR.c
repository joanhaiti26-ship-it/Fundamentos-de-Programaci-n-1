#include <stdio.h>

// Función para obtener el valor mínimo del vector
float obtenerMinimo(float v[], int tam) {
    float min = v[0];
    for (int i = 1; i < tam; i++) {
        if (v[i] < min) {
            min = v[i];
        }
    }
    return min;
}

// Función para obtener el valor máximo del vector
float obtenerMaximo(float v[], int tam) {
    float max = v[0];
    for (int i = 1; i < tam; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    return max;
}