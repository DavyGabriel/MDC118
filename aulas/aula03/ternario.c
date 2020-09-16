#include <stdio.h>

int main()
{
    int x = 15;
    int y = 20;

    printf("%d\n",x % 2 == 0); //impar
    printf("%d\n",y % 2 == 0); //par

    /* operador ternario (expressao) ? verdadeiro : falso */
    printf("%s\n", x % 2 == 0 ? "é par" : "é impar");
    printf("%s\n", y % 2 == 0 ? "é par" : "é impar");

    float desconto = y > 100 ? 0.5 : 0; // ":" e tipo um if
    printf("%f\n",desconto);

    


    return 0;
}