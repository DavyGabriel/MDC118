#include <stdio.h>

int main()
{
    char ch;
    int numero;
    float valor;
    char nome[30];
    
    printf("digite um caracter:");
    scanf("%c", &ch); //referencia da variavel
    printf("digite um numero inteiro:");
    scanf("%d", &numero);
    print("digite um ponto flutuante:");
    scanf("%f", &valor);
    printf("digite uma string:");
    scanf("%s", nome); //string não precisa do &

    //scanf("%c %d %f %s", &ch, &numero, &valor, nome);

    printf("%c\n", ch);
    printf("%d\n", numero);
    printf("%.2f\n", valor); //casas depois da virgula %.2f (2 numeros), %.3f (3 numeros) e etc (de acordo com o numero de 0 do float).
    printf("%s\n", nome);

    //printf("%c %d %.2f %s", ch, numero, valor, nome);


    return 0;
}