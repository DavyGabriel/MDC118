#include <stdio.h>

int main()
{   
    int nota = 10;

    /* sintaxe completa switch */
    switch (nota) //se é igual
    {
    case 10: //igualdade
        printf("%s\n", "eita passei com 10");
        break;
    case 9:
        printf("%s\n", "eita passei com 9");
        break;
    case 4:
        printf("%s\n", "eita fequei de recuperacao com 4");
        break;
    case 0:
        printf("%s\n", "eita passei com 0");
        break;
    default:
        printf("%s", "eita to lascado");
        break;
    }

    return 0;
}