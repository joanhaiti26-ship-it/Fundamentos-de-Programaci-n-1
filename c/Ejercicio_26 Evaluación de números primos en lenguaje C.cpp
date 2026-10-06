#include <stdio.h>
#include <math.h>   // Para usar sqrt (opcional, se puede evitar)

// Función que devuelve 1 si el número es primo, 0 si no lo es
int esPrimo(int n) {
    int i;

    if (n <= 1) return 0;          // 1 y números negativos no son primos
    if (n == 2) return 1;          // 2 es el único primo par

    // Optimización: solo comprobamos hasta la raíz cuadrada de n
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;              // Tiene un divisor → no es primo
        }
    }
    return 1;                      // No encontró divisores → es primo
}

int main() {
    int i;

    printf("Números primos menores de 500:\n");

    for (i = 2; i < 500; i++) {
        if (esPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}