#include <stdio.h>
int main()
{
    float gold = 10, silver = 5;
    float IVAg = 0.16, IVAr = 0.1;

    printf("- Productos con el IVA en general:\n");
    printf("  Productos gold, precio sin IVA %.2f pesos.\n", gold/(1+IVAg));
    printf("  productos silver, precio sin IVA %.2f pesos.\n", silver/(1+IVAg));

    printf("\n- Produtos con el IVA reducido:\n");
    printf("  Productos gold, precio sin IVA %.2f pesos.\n", gold/(1+IVAr));
    printf("  Productos silver, precio sin IVA %.2f pesos.\n", silver/(1+IVAr));

    return 0;
}
