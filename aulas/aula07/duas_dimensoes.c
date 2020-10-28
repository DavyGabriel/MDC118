#include <stdio.h>
#include <stdlib.h> 

int main(){

    float notas[22][2];
    float medias[4];

    //proporção
    //0 - x - RAND_MAX
    //0 - y - 10
    //x-0 / y-0 = RAND_MAX - x / 10 - y => x/y = RAND_MAX - x/10 - y
    //10x - xy = RAND_MAXy - xy => 10x = RAND_MAX => y=10*x / RAND_MAX

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            //notas[i][j] = rand()*10.0f/RAND_MAX;
            printf("notas%d,%d",i, j);
            scanf("%f",notas[i][j]);
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        float soma = 0;
        for (int j = 0; j < 2; j++)
        {
            soma = soma + notas[i][j];
            printf("%5.1f\n",notas[i][j]);
        }   
        medias[i] = soma/2;
        printf("%5.1f\n",medias[i]);
    }
    print("\n");
    



    return 0;
}