#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "auxiliares.h"

int menu_principal()
{
    caracteres(66, '='); printf("\n");
    printc("Tabela de Materiais", 66);  printf("\n");
    caracteres(66, '='); printf("\n");
    printf("  1 - Mostrar Tabela\n");
    printf("  2 - Inserir novo Material\n");
    printf("  3 - Buscar Material pelo Nome\n");
    printf("  4 - Excluir Material\n");
    printf("  ----------------------\n");
    printf("  0 - Sair do Aplicativo\n");
    printf("\n  Escolha uma op%c%co: ", 135, 198);
    fflush(stdin);
    return getchar();
}

int submenu()
{
    caracteres(66, '='); printf("\n");
    printc("Tabela de Materiais", 66); printf("\n");
    caracteres(66, '='); printf("\n");
    printf("  1 - Ordenadas pelo nome\n");
    printf("  2 - Ordenadas pela Quantidade\n");
    printf("  3 - Ordenadas pela Luminais\n", 161);
    printf("  4 - Op%c%co 4\n", 135, 198);
    printf("  ----------------------------\n");
    printf("  0 - Voltar ao menu principal\n");
    printf("\n  Escolha uma op%c%co: ", 135, 198);
    fflush(stdin);
    return getchar();
}

int main()
{
    TListaVN lis_vn;
    carrega_lis_vn(&lis_vn);

    char op, op2;
    while(1)
    {
        op = menu_principal();
        if (op == '0')
        {
            printf("\n  ** Fim do aplicativo **");
            sleep(3);
            break;
        }
        switch(op)
        {
            case '1':
                while(1)
                {
                    op2 = submenu();
                    if (op2 == '0')
                    {
                        break;
                    }
                    switch(op2)
                    {
                        case '1':
                            caracteres(66, '-'); printf("\n");
                            printc("Op\x87\xc6o 1 do Submenu",66); printf("\n");
                            caracteres(66, '-'); printf("\n");
                            // Insira seu código aqui
                            break;
                        case '2':
                            caracteres(66, '-'); printf("\n");
                            printc("Op\x87\xc6o 2 do Submenu",66); printf("\n");
                            caracteres(66, '-'); printf("\n");
                            // Insira seu código aqui
                            break;
                        case '3':
                            caracteres(66, '-'); printf("\n");
                            printc("Op\x87\xc6o 3 do Submenu",66); printf("\n");
                            caracteres(66, '-'); printf("\n");
                            // Insira seu código aqui
                            break;
                        case '4':
                            caracteres(66, '-'); printf("\n");
                            printc("Op\x87\xc6o 4 do Submenu",66); printf("\n");
                            caracteres(66, '-'); printf("\n");
                            // Insira seu código aqui
                            break;
                        default:
                            printf("\n\n  *** Op%c%co inv%clida ***\n\n",135,198,160);
                    }
                }
                break;
            case '2':
                caracteres(66, '-'); printf("\n");
                printc("T\xa1tulo da Op\x87\xc6o 2", 66); printf("\n");
                caracteres(66, '-'); printf("\n");
                // Insira seu código aqui
                break;
            case '3':
                caracteres(66, '-'); printf("\n");
                printc("T\xa1tulo da Op\x87\xc6o 3", 66); printf("\n");
                caracteres(66, '-'); printf("\n");
                // Insira seu código aqui
                break;
            case '4':
                caracteres(66, '-'); printf("\n");
                printc("T\xa1tulo da Op\x87\xc6o 4", 66); printf("\n");
                caracteres(66, '-'); printf("\n");
                // Insira seu código aqui
                break;
            default:
                printf("\n\n  *** Op%c%co inv%clida ***\n\n",135,198,160);
        }
    }
    return 0;
}
