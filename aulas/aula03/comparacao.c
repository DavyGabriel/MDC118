#include <stdio.h>

int main()
{
    int x = 30;
    int y = 20;
    int z;

    /*maior que*/
    printf("x > y? %d\n", x > y); //0 e falso e 1 e verdadeiro

    /*menorque*/
    printf("x < y? %d\n", x < y);

    /*igualdade*/
    printf("x = y? %d\n", x == y);

    /*maior ou igual*/
    printf("x >= y? %d\n", x >= y);

    /*menor ou igual*/
    printf("x <= y? %d\n", x <= y);

    /*diferente de*/
    printf("x != y? %d\n",x != y);//!(x == y) da o mesmo resultado //! operador logico de negacao

    return 0;
}