#include <stdio.h>

//função
/*const int pi = 3;

int calcular_area(int r) {
    return 2*pi*r;
}

int main() {
    printf("%d",calcular_area(2));
    return 0;
}*/

/*leitura de caracter*/
// getc
// getchar

/*esecrita de caracteres*/
// putc
// putchar

int main()
{
    char ch = getc(stdin);// ler do teclado
    while(ch != '0')
    {
        ch = getc(stdin);
    }

    putc(ch, stdout);// escreve na tela ou console
    //putc(ch, stderr);// escreve na saida de erro

    getchar(); //presionar enter
    

    ch = getchar(); //getc(stdin)
    putchar(ch); //putc(stdout)

    printf("Escolha uma opção:\n");
    printf("1 => somar\n");
    printf("2 => subtrair\n");
    printf("0 => sair\n");

    while(ch != '0')
    {
        ch = getchar();
    }


    return 0;
}



