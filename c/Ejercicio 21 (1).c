#include<stdio.h>
int main() {
float precio = 35;  /*precio estandar*/
int edad, mes;

printf("\nEdad del visitante: ");
scanf("%d", &edad);

/*Edad con descuento*/
if (edad<18 || edad>=65)
    precio = 25;
else
{
    printf("Mes de la visita: ");
    scanf("%d", &mes);
    if (mes>5 && mes<10)
        precio = 42.5;
}
printf("\nPrecio de la entrada: %.2f pesos.\n", precio);
return 0;
}
