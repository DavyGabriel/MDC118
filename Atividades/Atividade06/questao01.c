#include<stdio.h>

struct data_t
{
    int dia;
    int mes;
    int ano;

};

int main()
{
    struct data_t data;

    printf("Entre com o dia: ");
    scanf("%d", &data.dia);

    printf("Entre com o mes: ");
    scanf("%d", &data.mes);

    printf("Entre com o ano: ");
    scanf("%d", &data.ano);

    printf("Data escolhida no formato BR: %d/%d/%d\n", data.dia, data.mes, data.ano);
    printf("Data escolhida no formato US: %d/%d/%d\n", data.mes, data.dia, data.ano);
    


    return 0;
}