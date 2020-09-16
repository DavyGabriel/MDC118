#include <stdio.h>

int main()
{
    int condicao = 0;

    /* sintaxe basica */
    if(condicao) //se essa condicao for verdadeira entao 
    {
        printf("%s\n","passei aqui");
        printf("%s\n","passei aqui");
    }

    /* somente um comando */
    if (!condicao); // condicao != de 0 // 0 é falso 1 é verdadeiro
        printf("%s\n","passei aqui");

    /* sintaxe completa */    
    if(condicao)
    {
        printf("%s\n","deu bom");
    }else
    {
        printf("%s\n","deu ruim");
    }

    /*if-else-if*/
    float nota = 10.0;

    if(5 <= nota)
    {
        printf("%s\n","aprovado");
    }else if(3 >= nota)
    {
        printf("%s\n","recuperacao");
    }
    else
    {
        printf("%s\n","reprovado");
    }
    
    /* if-aninhados = if-dentro de -if */
    float falta = 75;
    if(nota >= 5)
    {
        if (falta >= 75)
        {
            printf("%s\n","aprovado");
        }
        else
        {
            printf("%s\n","reprovado por falta");
        }
    } else
    {
        printf("%s\n","reprovado por nota");
    }



    return 0;
}