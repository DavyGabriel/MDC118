#include <stdio.h>

int main()
{
    long int gigabytes;
    long int byte = 1024;
    long int N_gigabytes = 2;
    long int valor_gigabytes;
    long int x;
    

    x = byte*byte;
    gigabytes = x*byte;
    valor_gigabytes =gigabytes * N_gigabytes ;

    printf("%ld\n",valor_gigabytes);

    return 0;
}