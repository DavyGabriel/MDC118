#include <stdio.h>

int main()
{   
    int x = 10;
    int y = 20;

    /* operador E */
    printf("%d\n", x > y);
    printf("%d", x + 10 > y);
    printf("%d\n", x > y && x + 10 > y);// falso E qualquer coisa e falso

    /* operador OU */
    printf("%d\n", x > y);
    printf("%d", x - 10 > y);
    printf("%d\n", x > y || x + 10 > y);// verdadeiro OU qualquer coisa e verdadeiro

    /* operador NAO */
    printf("%d\n", !(x > y));
    printf("%d", !(x + 10 > y));
    printf("%d\n", !(x > y || x + 10 > y));// falso E qualquer coisa e falso

    






    return 0;
}