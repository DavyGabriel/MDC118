#include <stdio.h>

int main()
{
    char tecla;

    tecla = getchar();

    if (tecla >= 33 && tecla <= 47)
    {
        printf("%c, é um caractere especial\n", tecla);
    }
    else if (tecla >= 48 && tecla <= 57)
    {
        printf("%c, é um numero\n", tecla);
    }
    else if (tecla >= 58 && tecla <= 64)
    {
        printf("%c, é um caractere especial\n", tecla);
    }
    else if (tecla >= 65 && tecla <= 90)
    {
        printf("%c, é uma letra maiuscula\n", tecla);
    }
    else if (tecla >= 91 && tecla <= 96)
    {
        printf("%c, é um caractere especial\n", tecla);
    }
    else if (tecla >= 94 && tecla <= 122)
    {
        printf("%c, é uma letra minuscula\n", tecla);
    }
    else if (tecla >= 123 && tecla <= 126)
    {
        printf("%c, é um caractere especial\n", tecla);
    }
    else
    {
        printf("não é uma letra um digito ou um caractere especial\n");
    }

    return 0;
}