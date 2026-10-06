#include <stdio.h>

int main() {
int valor, opc;	
printf("Dame un valor entero");
scanf("%d",&valor);
printf("Opciones de calculo sobre el valor:\n");
scanf("%d", &opc);
switch (opc)
{
	case 1:
		printf("Resultado %.1f", valor/2.0);
		break;
	case 2:
	    printf("Resultado: %d", valor*2);
	    break;
	case 3:
	    printf("Resultado: %d", valor*3);
	    break;
	default:
	    printf("Opcion incorrecta");
 }
    return 0;
}
