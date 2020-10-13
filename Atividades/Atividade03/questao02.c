#include <stdio.h>

int main()
{
    int a = 1;
    int b = 1;
    int c = 0, i;

    do
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", c);
        i++;
    }while(i < 10);

    return 0;
}
