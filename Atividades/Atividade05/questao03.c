#include <stdio.h>
#include <string.h>

int main()
{
    char caracteres[80];

    printf("entre com uma string: ");

    scanf("%[^\n]s", caracteres);

    for (int i = strlen(caracteres); i > 0 ; i--)
    {
        printf("%c", caracteres[i-1]);
    }
    printf("\n");

    return 0;
}