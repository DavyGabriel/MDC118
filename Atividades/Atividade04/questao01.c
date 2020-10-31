#include <stdio.h>

int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("a é o maior numero");
    }
    else if (b > a)
    {
        printf("b é o maior numero\n");
    }

    return 0;
}