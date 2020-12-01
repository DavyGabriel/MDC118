#include <stdio.h>

int main()
{
    int valor;
    int menor_valor = 99999, maior_valor = 0;

    for(int i = 0;i < 10; i++)
    {
        scanf("%d", &valor);

        if(valor <= menor_valor)
        {
            menor_valor = valor;
        }
        if (valor > maior_valor)
        {
            maior_valor = valor; 
        }   
        
    }printf("%d, %d\n", menor_valor, maior_valor);

    return 0;
}