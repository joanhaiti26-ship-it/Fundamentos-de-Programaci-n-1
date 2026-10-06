/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char c;

    printf("Caracter: ");
    scanf(" %c", &c);

    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Es una vocal minuscula.\n");
            break;

        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Es una vocal mayuscula.\n");
            break;

        default:
            printf("No es una vocal.\n");
    }

    return 0;
}