#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<time.h>
char ticket(char ticket){
    printf("\nQuer comprar o Ticket? (S/N): ");
    scanf(" %c", &ticket);
    ticket=toupper(ticket);
    printf("\n%c\n", ticket);
    if(ticket!='S' && ticket!='N'){
        do{
            printf("\n Opção inválida, digite novamente...\nQuer comprar o Ticket? (S/N): ");
            scanf(" %c", &ticket);
            ticket=toupper(ticket);
        }while(ticket!='S' && ticket!='N');
    }
    if(ticket=='S'){
        printf("\nComprando...");
    }else if(ticket=='N'){

    }else {
        do{
            printf("\nOpção inválida, digite novamente...\nQuer comprar o Ticket? (S/N): ");
            scanf(" %c", &ticket);
        }while(ticket!='S' || ticket!='N');
    }
    return ticket;
}
int voltaMenu(int op){
    printf("\n1- voltar ao menu inicial\n0- Finalizar: ");
    scanf("%d", &op);
    printf("\n%d\n", op);
    if(op!=0 && op!=1)
        do{
            printf("\nOpção inválida, digite novamente...\n1- voltar ao menu inicial\n0- Finalizar: ");
            scanf("%d", &op);
        }while(op!=0 && op!=1);
    return op;
}
int main(){
    int op, opMenu=1;
    char aceiteTicket;
    setlocale(LC_ALL,"portuguese");
    do{
        opMenu=1;
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
            aceiteTicket=ticket(aceiteTicket);
            if(aceiteTicket=='S'){
                printf("\nTenha um bom passeio!!!\n");
                opMenu=voltaMenu(opMenu);
                sleep(1);
            }else{
                printf("\nOk...\n");
                opMenu=voltaMenu(opMenu);
            }
            system("cls");
            break;
        case 2:
            system("cls");
            printf("Infos Opção 2\n");
            system("pause");
            system("cls");
            if(aceiteTicket=='S'){
                printf("\nTenha um bom passeio!!!\n");
                opMenu=voltaMenu(opMenu);
                sleep(1);
            }else{
                printf("\nOk...\n");
                opMenu=voltaMenu(opMenu);
            }
            system("cls");
            break;
        case 3:
            system("cls");
            printf("Infos Opção 3\n");
            system("pause");
            system("cls");
            if(aceiteTicket=='S'){
                printf("\nTenha um bom passeio!!!\n");
                opMenu=voltaMenu(opMenu);
                sleep(1);
            }else{
                printf("\nOk...\n");
                opMenu=voltaMenu(opMenu);
            }
            system("cls");
            break;
        case 4:
            system("cls");
            printf("Infos Opção 4\n");
            system("pause");
            system("cls");
            if(aceiteTicket=='S'){
                printf("\nTenha um bom passeio!!!\n");
                opMenu=voltaMenu(opMenu);
                sleep(1);
            }else{
                printf("\nOk...\n");
                opMenu=voltaMenu(opMenu);
            }
            system("cls");
            break;
        }
    }while(op!=0 && opMenu!=0);
    printf("\nBye...\n");
    return 0;
}
