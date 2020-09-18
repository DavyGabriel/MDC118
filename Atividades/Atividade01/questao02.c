#include <stdio.h>

int main()
{
    int x = 3660;
    int hora, hora_seg = 3600;
    int min, min_seg = 60;
    int seg;

    hora = x/hora_seg;
    min = (x-hora_seg)/min_seg;
    seg = x-hora_seg-min_seg;


    printf("%dhora:%dmin:%dseg\n",hora,min,seg);

    return 0;
}