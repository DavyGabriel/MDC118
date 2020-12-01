#include <stdio.h>

int main()
{
    struct contatos_t
    {
        char nome[30];
        long int numero;

    }lista_contatos[10];

    for(int i = 0;i < 10;i++)
    {
        printf("Entre com o nome do contato: ");
        scanf("%[^\n]s", lista_contatos[i].nome);

        printf("Entre com o número do contato: ");
        scanf("%ld", &lista_contatos[i].numero);
        getchar();
        
        printf("Contato:\n");
        printf("%s - %ld\n", lista_contatos[i].nome, lista_contatos[i].numero);
        
    }
    

    return 0;
}