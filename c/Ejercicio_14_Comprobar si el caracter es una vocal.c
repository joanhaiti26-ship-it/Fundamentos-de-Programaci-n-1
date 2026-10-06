#include<stdio.h>
int main()
{
    char c;

    printf("Caracter: ");
    scanf("%c", &c);

    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        printf("Es una vocal minuscula.");
    else if (c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        printf("Es una vocal mayuscula.");
    else
        printf("No es una vocal.");

    return 0;
}
