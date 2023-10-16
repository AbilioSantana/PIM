#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    int op;
    char aceiteTicket, opMenu;
    setlocale(LC_ALL,"portuguese");
    do{
        printf("*****bem vindo ao museu*****\n");
        printf("1 - Semana da arte moderna\n");
        printf("2 - 150 Anos Santos Dumont\n");
        printf("3 - Olimpiadas paris 2024\n");
        printf("4 - Israel\n");
        printf("0 - Sair");
        printf("\nentre com sua opção: ");
        scanf("%d", &op);
        switch(op){
        case 0:
            system("cls");
            printf("Ok, Saindo... Bye\n");
            system("pause");
            system("cls");
            break;
        case 1:
            system("cls");
            printf("Infos Opção 1\n");
            system("pause");
            system("cls");
            printf("\nQuer comprar o Ticket? (S/N): ");
            scanf(" %c", &aceiteTicket);
            toupper(aceiteTicket);
            printf("\n%c\n", aceiteTicket);
            if(aceiteTicket!='S' && aceiteTicket!='N'){
                do{
                    printf("\n Opção inválida, digite novamente...\nQuer comprar o Ticket? (S/N): ");
                    scanf(" %c", &aceiteTicket);
                }while(aceiteTicket!='S' || aceiteTicket!='N');
            }
            if(aceiteTicket=='S'){
                printf("\nComprando...");
            }else if(aceiteTicket=='N'){
                printf("\Não deseja voltar ao menu inicial?(S/N): ");
                scanf("%c", &opMenu);
            }else {
                do{
                    printf("\n Opção inválida, digite novamente...\nQuer comprar o Ticket? (S/N): ");
                    scanf(" %c", &aceiteTicket);
                }while(aceiteTicket!='S' || aceiteTicket!='N');
            }

            break;
        case 2:
            system("cls");
            printf("Infos Opção 2\n");
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            printf("Infos Opção 3\n");
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            printf("Infos Opção 4\n");
            system("pause");
            system("cls");
            break;
        }
    }while(op!=0);
    return 0;
}
