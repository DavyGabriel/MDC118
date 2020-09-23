#include <stdio.h>

int main()
{
    /* sintaxe */
    int i = 0;
    do
    {
        printf("%d",i);
        i++;
    } while (i < 10);
    printf("\n");

    /* saltar uma repeticao/laço*/
    i = 10;
    do
    {
        if(i < 20)
            continue; // saltou a repeticao
        printf("%d,",i);
        i++;
    }while(i < 10);
    printf("\n");

    /*do while aninhado*/
    i = 0;
    do
    {
        int j = 0;
        do
        {

        }while(j < 10);
        i++;
    }while(i < 10);
    printf("\n");

    /*do while infinito*/
    do
    {
        printf("Aperte Ctrl + c\n");
    }while(1);

    return 0;
}