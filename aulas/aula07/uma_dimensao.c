#include <stdio.h>

const int TAMANHO = 10;

int main(){         // 0   1  2  3  4  5  6   7  8  9
    int numeros[TAMANHO];// 100 80 2  3  4  5  6 -20  8  9
    
    //int numeros[] = {10, 20, 30, 40, 50, 60, 70, 80, 90}

    numeros[0] = 100;
    numeros[7] = -20;
    numeros[1] = numeros[0] - numeros[7];

    scanf("%d", &numeros[2]);

    printf("%d, ",numeros[0]);
    printf("%d, ",numeros[1]);
    printf("%d, ",numeros[2]);
    printf("%d\n",numeros[7]);

    for(int i = 0; i < 10;i++){
        numeros[i] = i + 1;
    }

    for(int i = 0; i < 10;i++){
        printf("%d, ",numeros[i]);
    }

    for(int i = 0; i < TAMANHO;i++){
        numeros[i] = i + 1; 
    }

    for(int i = TAMANHO; i > 0;i--){
        printf("%d, ",numeros[i - 1]);
    }

    printf("\n");

    return 0;
}