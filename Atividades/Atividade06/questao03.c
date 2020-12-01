#include <stdio.h>

enum meses {jan = 1, fev = 2, mar = 3, abr = 4, mai = 5, jun = 6, jul = 7, ago = 8, set = 9, out = 10, nov = 11, dez = 12};

int main()
{
    short int mes;
    
    for (int i = 0; i < 13; i++)
    {
        switch (i)
        {
        case jan: printf("janeiro, ");
            break;

        case fev: printf("fevereiro, ");
            break;
        
        case mar: printf("março, ");
            break;
        
        case abr: printf("abril, ");
            break;

        case mai: printf("maio, ");
            break;

        case jun: printf("junho, ");
            break;

        case jul: printf("julho, ");
            break;

        case ago: printf("agosto, ");
            break;

        case set: printf("setembro, ");
            break;

        case out: printf("outubro, ");
            break;

        case nov: printf("novembro, ");
            break;
            
        case dez: printf("dezembro\n");
            break;            
        
        default: printf("Os mêses do ano são: ");
            break;
        }
    }

    return 0;
}