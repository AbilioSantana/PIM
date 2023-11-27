#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



void trocaTela(){
	printf("\n\n\n\n\t\t\t\tPressione qualquer tecla para passar para a próxima tela\n\n");
    getchar();
    printf("\e[1;1H\e[2J");
}

void initArqs(){
    FILE * a = fopen("bilhetes.csv", "w");
    fclose(a);
    FILE * b = fopen("cadastro.csv", "w");
    fclose(b);
    FILE * c = fopen("sessao.csv", "w");
    fclose(c);
}