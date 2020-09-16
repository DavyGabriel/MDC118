#include <stdio.h>

int main(){

    int x = 10;
    int y = 20;
    int z;

    /*operador soma*/
    z = x +y;
    printf("%d\n", z);

    /*operador subtracao*/
    z = x - y;
    printf("%d\n", z);

    /*operador muilti*/
    z = x * y;
    printf("%d\n", z);

    /*operador divisao*/
    z = x / y;
    printf("%d\n", z);

    /*operador resto da divisao*/
    z = x % y; // resultadp 0 com resto 10;
    printf("%d\n", z);

    // 4 % 2 == 0 ?? par 
    // 3 % 2 == 0 ?? impar

    /*operador de incremento*/
    printf("%d\n", x++); // x = x + 1, usa o valor de x depois incrementa;
    printf("%d\n", ++x); // incrementa x, depois usa o valor;

    /*operador decremento*/
    printf("%d\n", x--); // x = x - 1, usa o valor de c depois decrementa;
    printf("%d\n", --x); // decrementa x, depois usa o valor;

    /*forma concratenada*/
    x += 1; // x = x + 1;
    x -= 1; // x = x - 1;
    x *= 1; // x = x * 1;
    x /= 1; // x = x / 1;
    x %= 1; // x = x % 1;

    return 0;
}