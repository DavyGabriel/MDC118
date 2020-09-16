#include <stdio.h>

/*tipo nome_variavel = valor inicial */
/*variaveis globais */
int numero = 100;
char ch = 'A';
unsigned char negativo = -56; //converte para um numero sem sinal
const int SEXO_MASCULINO = 1;
long int grande = 1000000000000;
float decimal = 0.562019842;
double duplo = 0.562019842;

int main(){

    printf("%d\n", numero);
    printf("%c\n", ch);
    printf("%d\n", negativo);
    printf("%d\n", SEXO_MASCULINO);
    printf("%ld\n", grande);
    printf("%f\n", decimal);
    printf("%lf\n", duplo);

    return 0;
}