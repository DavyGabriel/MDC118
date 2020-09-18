#include <stdio.h>

int main()
{
    float valor = 650.50;
    float desconto;
    if (valor <= 100.00)
    {
        desconto = (valor * 1)/100;
        printf("%f\n",desconto);
    }else if (valor >100.00 && valor <= 500.00)
    {
        desconto = (valor * 5)/100;
        printf("%f\n",desconto);
    }else
    {
        desconto = (valor * 10)/100;
        printf("%f\n",desconto);
    }

    return 0;
}