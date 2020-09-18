#include <stdio.h>

int main()
{
    int valor = 10;
    
    switch(valor)
    {
    case 1:
        printf("%s\n","Ruim");
        break;
    case 2:
        printf("%s\n","Insuficiente");
        break;
    case 3:
        printf("%s\n","Suficiente");
        break;
    case 4:
        printf("%s\n","Bom");
        break;
    case 5:
        printf("%s\n","Ótimo");
        break;
    default:
        printf("%s\n","Valor da nota não está na tebela");
        break;
    }

    return 0;
}