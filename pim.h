#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



void trocaTela(){
	printf("\n\n\n\n\t\t\t\tPressione enter para passar para a próxima tela\n\n");
    getchar();
    system("clear");
}

void initArqs(){
    
    FILE * a = fopen("bilhetes.csv", "r");
    if(a==NULL){
        fclose(a);
        FILE * a = fopen("bilhetes.csv", "w");
    }
    fclose(a);

    FILE * b = fopen("sessao.dat", "r");
    if(b==NULL){
        fclose(b);
        FILE * b = fopen("sessao.dat", "w");
    }
    fclose(b);
}