#include <stdio.h>

int main()
{
    int ano;

    scanf("%d", &ano);

    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    {
        printf("%d é bissexto\n", ano);
    }else
    {
        printf("%d não é bissexto\n", ano);
    }
    
    return 0;
}