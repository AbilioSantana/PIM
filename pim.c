#include <stdio.h> //funções basicas do prorama como printf e scanf
#include <stdlib.h> //
#include <locale.h> // formatação de linguagem e utf8
#include <string.h> // trabalhar com strings 
#include <ctype.h>  // função de toupper();
#include <unistd.h> // função sleep e tipo size_t
#include "pim.h"    // biblioteca proprietária


const int MAX_QTD = 10;   //quantidade maxima por sessao 
const int MAX_QTD_IDOSO = 2;
const char sessaoFile[] = "sessao.dat";
const char bilheteFile[] = "bilhetes.csv";

typedef struct {
    int cID; 
    char nome[101];
    char telefone[20];
    char email[101];
    int idade;
    int idoso; // marcadaor se é idoso
}Pessoa;

typedef struct {
    int expo;
    int hora;
    int qtd;
    int qtdIdoso;
    int suc; // marcador de sucesso na venda e tipo de bilhete
}Sessao;

typedef struct {
    int nID;
    Sessao sessao;
}Bilhete;

int verificaMenu;

void mostraTitulo(int op);
void mostraCase1();
void mostraCase2();
void mostraCase3();
void mostraCase4();
char ticket(int expo);
void verificaTicket(char *resp);
void compraTicket(int expo);
Pessoa recebeCadastro();
Pessoa recebeDados();
Sessao validaSessao(int expo, int idoso);


int main(){
    int op;
    char aceiteTicket;
    setlocale(LC_ALL,"pt_BR_utf8");
    initArqs();
    system("clear");
    do{
        
        verificaMenu=0;
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\t\t\t\t*******************************\n");
        printf("\t\t\t\t*******bem vindo ao museu******\n");
        printf("\t\t\t\t**1 - Semana da arte moderna **\n");
        printf("\t\t\t\t**2 - 150 Anos Santos Dumont **\n");
        printf("\t\t\t\t**3 - Olimpiadas paris 2024  **\n");
        printf("\t\t\t\t**4 - Israel                 **\n");
        printf("\t\t\t\t**0 - Sair                   **\n");
        printf("\t\t\t\t**    entre com sua opção    **\n");
        printf("\t\t\t\t*******************************\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        scanf("%d", &op);
        switch(op){
        case 0:
            system("clear");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\t\t\t\t*****************************\n");
            printf("\t\t\t\t**      Ok, Saindo...      **\n");
            printf("\t\t\t\t*****************************\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            trocaTela();
            break;
        case 1:
            system("clear");

            mostraCase1();

            aceiteTicket=ticket(1);
            verificaTicket(&aceiteTicket);

            system("clear");
            break;
        case 2:
            system("clear");
            mostraCase2();
            getchar();
            system("clear");

            aceiteTicket=ticket(2);
            verificaTicket(&aceiteTicket);

            system("clear");
            break;
        case 3:
            system("clear");
            mostraCase3();
            getchar();
            system("clear");

            aceiteTicket=ticket(3);
            verificaTicket(&aceiteTicket);

            system("clear");
            break;
        case 4:
            system("clear");
            mostraCase4();
            getchar();
            system("clear");

            aceiteTicket=ticket(4);
            verificaTicket(&aceiteTicket);

            system("clear");
            break;
        }
    }while(op!=0 && verificaMenu!=1);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t     *********************\n");
    printf("\t\t\t\t     **      Bye... :(  **\n");
    printf("\t\t\t\t     *********************\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    return 0;
}

void mostraTitulo(int op){
    switch(op){
    case 1:
        printf("\n");
        printf("\n");
        printf("\t\t\t\t***********************************\n");
        printf("\t\t\t\t**     Semana da Arte Moderna    **\n");
        printf("\t\t\t\t***********************************\n");
        printf("\n");
        printf("\n");
        break;
    case 2:
        printf("\n");
        printf("\n");
        printf("\t\t\t\t***********************************\n");
        printf("\t\t\t\t**     150 Anos Santos Dumont    **\n");
        printf("\t\t\t\t***********************************\n");
        printf("\n");
        printf("\n");
        break;
    case 3:
        printf("\n");
        printf("\n");
        printf("\t\t\t\t*************************************\n");
        printf("\t\t\t\t**     Olimpíadas de Paris 2024    **\n");
        printf("\t\t\t\t*************************************\n");
        printf("\n");
        printf("\n");
        break;
    case 4:
        printf("\n");
        printf("\n");
        printf("\t\t\t\t***************************************\n");
        printf("\t\t\t\t**     Israel: Cultura e História    **\n");
        printf("\t\t\t\t***************************************\n");
        printf("\n");
        printf("\n");
        break;
    case 5:
        printf("\n");
        printf("\n");
        printf("\t\t\t\t*****************************\n");
        printf("\t\t\t\t**         Check In        **\n");
        printf("\t\t\t\t*****************************\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        break;
    }
}
void mostraCase1(){

    mostraTitulo(1);

    printf("\t\t\tSemana de Arte Moderna, aconteceu por volta de 13 à 18 de \n");
    printf("\t\t\tfevereiro de 1922, completando 100 anos em 2022. Se tornou \n");
    printf("\t\t\toficialmente parte do Modernismo no Brasil e já teve realizações \n");
    printf("\t\t\tno Teatro Municipal de São Paulo, onde conseguiu reunir diversos \n");
    printf("\t\t\tpintores, músicos, escritores e outros, com a intenção de expor \n");
    printf("\t\t\tsuas artes para o grande mundo.\n");
    printf("\n");

    trocaTela();
    mostraTitulo(1);

    printf("\n");
    printf("\t\t\tEm específico  para os artistas brasileiros na época, que possuiam \n");
    printf("\t\t\tuma força de se destacar, modernistas ficavam bem dispostos a \n");
    printf("\t\t\tnão imitar demais artes, sendo as principais de estilo “francesas” \n");
    printf("\t\t\t“italianas” e “portuguesas”, pelo fato de quererem forjar uma \n");
    printf("\t\t\tcultura que tivesse identidade nacional e então melhorar a \n");
    printf("\t\t\tprópria arte brasileira. \n");
    printf("\n");

    trocaTela();
    mostraTitulo(1);

    printf("\n");
    printf("\t\t\tEntre os nomes presentes na “Semana da Arte Moderna”, os mais\n");
    printf("\t\t\tfamosos foram: Anita Malfatti, Oswald de Andrade, Di Cavalcanti \n");
    printf("\t\t\te Mário de Andrade.\n");
    printf("\n");

    trocaTela();
    mostraTitulo(1);

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t**********Curiosidade e fotos sobre os nomes citados********\n");
    printf("\n");
    sleep(1);
    system("clear");
    mostraTitulo(1);

    printf("\n");
    printf("\n");
    printf("\t\t\t\t**********************************\n");
    printf("\t\t\t\t**        Anita Malfatti        **\n");
    printf("\t\t\t\t**********************************\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t                      ......--------    ......--------......\n");
    printf("\t\t\t                      ....----++++--..      ..----........  \n");
    printf("\t\t\t                  @@################MM        ............  \n");
    printf("\t\t\t                ########################..          ......  \n");
    printf("\t\t\t              @@##########################..          ..    \n");
    printf("\t\t\t              ##@@MMMM####################@@                \n");
    printf("\t\t\t            ####++::++MM@@##################--              \n");
    printf("\t\t\t            ##::++--++::++####################              \n");
    printf("\t\t\t          ####::::----....::##################@@            \n");
    printf("\t\t\t          ####::::--........::##################            \n");
    printf("\t\t\t          ########::----::....::@@##############            \n");
    printf("\t\t\t          ##mm++mm++..::----##mmmm##############::          \n");
    printf("\t\t\t          ##@@@@mm::::::mm::::MMmm##############mm          \n");
    printf("\t\t\t          MM----mm--::++::####++++MM############            \n");
    printf("\t\t\t            ..--::--::..      ::++mm############            \n");
    printf("\t\t\t            ..::--::++..    ..--++mm############            \n");
    printf("\t\t\t            ..--@@##@@..    ..::++mmmm##########            \n");
    printf("\t\t\t            --::::::----....--++mm++..++##@@                \n");
    printf("\t\t\t            ..##MM++::--....--++mm@@MM##                    \n");
    printf("\t\t\t            ..mm++mmmm------::mmmm####                      \n");
    printf("\t\t\t              --++::::::----::mm####                        \n");
    printf("\t\t\t              ....::::::::++mm@@MM##                        \n");
    printf("\t\t\t                --::::++mmMMmmmmMM##                        \n");
    printf("\t\t\t                  @@####MM++++mmmmMM::                      \n");
    printf("\t\t\t                  mmmmmm::----::::..                        \n");
    printf("\t\t\t                  ..++::----..  ..                          \n");
    printf("\t\t\t                    ::::--..    ......--::..                \n");
    printf("\t\t\t                    ----..      ..----::::++++              \n");
    printf("\t\t\t                    ::--..........----::::++++              \n");
    printf("\t\t\t                  --++--..........----::::++++--            \n");
    printf("\t\t\t                  ..::----------....----::++++++            \n");
    printf("\t\t\t                ..::::::----------..------++++++--          \n");
    printf("\t\t\t            --  mm::::::------------------::++++::          \n");
    printf("\n");
    printf("\n");
    printf("\t\t\tDesenhista, pintora, professora, ilustradora e\n");
    printf("\t\t\tgravadora! Anita Malfatti possuia deficiência motora e embora os \n");
    printf("\t\t\tdesafios, mostrou a todas que poderia se tornar a pioneira da Arte \n");
    printf("\t\t\tModerna no Brasil.  (2/12/1889 à 6/11/1964)\n");
    printf("\n");

    trocaTela();
    mostraTitulo(1);

    printf("\n");
    printf("\n");
    printf("\t\t\t\t*************************************\n");
    printf("\t\t\t\t**        Oswald de Andrade        **\n");
    printf("\t\t\t\t*************************************\n");
    printf("\n");
    printf("\n");
    printf("\t\t\tmmmmmmmmMMMM@@@@@@##@@@@####################################\n");
    printf("\t\t\t::++++mmMMMMMM@@@@@@############@@##########################\n");
    printf("\t\t\t----::mmmmmmMMMMMM@@@@@@@@##################################\n");
    printf("\t\t\t..--::++++mmmmmmmmmmMMMM@@@@################################\n");
    printf("\t\t\t  --::::++++++++++mmmmMM@@@@@@@@############################\n");
    printf("\t\t\t  ..--::::++::::++++mmmmMMMM@@####@@########################\n");
    printf("\t\t\t  ..----::::--::::++++++mm################@@################\n");
    printf("\t\t\t    ....--------::::++MM######@@##########@@@@@@############\n");
    printf("\t\t\t    ..........----::::########@@############@@@@############\n");
    printf("\t\t\t    ..........----::mm######@@@@----mm@@####MMMM@@##########\n");
    printf("\t\t\t    ............----######MM        --++@@##MMMM@@@@########\n");
    printf("\t\t\t        ........----@@####@@        --::MM##mmmmMMMM@@@@##@@\n");
    printf("\t\t\t          ..    ....mm####::        ----mm##mmmmmmmmmmMMMM@@\n");
    printf("\t\t\t                  ..  ++++    ..mm::..::mm##++++++++::::::::\n");
    printf("\t\t\t                    ::  --    ..####  ######::++++::::::::::\n");
    printf("\t\t\t                                ::    mm##MM::++++::::::::::\n");
    printf("\t\t\t                                      --@@mm::::::::::::::--\n");
    printf("\t\t\t                                  ..  ..##++++::::::::::----\n");
    printf("\t\t\t                                      mm##::::::::::::::----\n");
    printf("\t\t\t                                ..--######::::::::::::--....\n");
    printf("\t\t\t                  @@  --        ..--mm##MM--::::::::----..  \n");
    printf("\t\t\t                --::....::    ..    ++##----::::::::--....  \n");
    printf("\t\t\t            ::++MM++..mm--++  ++++MM@@####--------::--..    \n");
    printf("\t\t\t          --++mmMM##--::++::++  @@MM##########--------..    \n");
    printf("\t\t\t        --++mmMMMM##::..MMmm--++################----....    \n");
    printf("\t\t\t      ..++::MM@@MM@@mm::++++MM::######@@##########....      \n");
    printf("\t\t\t  ..  ..::MMMMmm##MM####mmMM##::++####mm##########mm..      \n");
    printf("\t\t\t  ..  --..mm####++####MMmm######++++################..      \n");
    printf("\t\t\t        --++MM@@##mm####MM@@######++mm##@@######::##++      \n");
    printf("\t\t\t        ..::::@@@@######++MM@@######++MM########--++##..    \n");
    printf("\t\t\t        ----++@@########MM++MM@@@@####MM@@@@####::    ::    \n");
    printf("\t\t\t          ----mm##########++@@MM##@@##@@MM##@@##--          \n");
    printf("\t\t\t          ..--++@@########mm##--####@@##MM@@##@@@@      ##  \n");
    printf("\t\t\t            ::::::mm##########::@@####@@####@@####@@    MM..\n");
    printf("\t\t\t            ..----mm@@########::@@@@##############..::    ##\n");
    printf("\t\t\t              --::::mm########@@##############mm@@  ..##    \n");
    printf("\t\t\t              ..::::++##mm########################  --@@++  \n");
    printf("\t\t\t              ..--::mm######@@################::++    @@####\n");
    printf("\t\t\t              ......MM##--mm@@##########@@++mm::mmMM    ####\n");
    printf("\t\t\t              ....++##++@@MM..mm####--::++mm##mm@@@@MM  ####\n");
    printf("\t\t\t                  mm@@@@..MM@@##  ..MM##--####@@####@@++####\n");
    printf("\t\t\t                  ----MM##--##MM@@..mm@@@@##################\n");
    printf("\t\t\t                  ++::++mmmm##::##::@@##@@############@@####\n");
    printf("\t\t\t          ..        ..  --::##@@@@MM##MM@@##########@@@@##@@\n");
    printf("\t\t\t                      ..--  ####..####@@################@@  \n");
    printf("\n");
    printf("\n");
    printf("\t\t\tEnsaísta, advogado, poeta, escritor e dramaturgo, \n");
    printf("\t\t\tconheça Oswald de Andrade, filho único, formado em Direito, no \n");
    printf("\t\t\tLargo de São Francisco. (11/01/1980 à 22/10/1954)\n");
    printf("\n");

    trocaTela();
    mostraTitulo(1);

    printf("\n");
    printf("\n");
    printf("\t\t\t\t*********************************\n");
    printf("\t\t\t\t**        Di Cavalcanti        **\n");
    printf("\t\t\t\t*********************************\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t........--::--........--..----....----mm--@@mm  --  mmMMmm  \n");
    printf("\t\t\t########@@@@@@@@@@@@@@MM::::..++::mm..::--MM::  ..  mmMMmm  \n");
    printf("\t\t\t@@@@MMMMMMMMMMMMmm++..        --....--......--      mmmmmm  \n");
    printf("\t\t\t@@@@MMMMMMMMMMmm..                    ..    ....    mmmmmm  \n");
    printf("\t\t\t@@@@@@MMMMMM--                      ..--..  ..  ..  ::MMmm  \n");
    printf("\t\t\tMMmmMMMMmm--      ..--++....------..  ++..::::........mmmm  \n");
    printf("\t\t\tmmmmmmmm--..    ++::::--  --::--::::..++++++::--....--++mm  \n");
    printf("\t\t\t##@@MMMM..    --++::----::--++::++++mmMMMMmm++::--....  ::  \n");
    printf("\t\t\t##@@mm++------::--..  ..--..::++mmmm@@MM@@mmMMmm..------::  \n");
    printf("\t\t\t##@@++----++----....    ......--++::++++MMMMmmMM--  --::++  \n");
    printf("\t\t\t##@@++::::------......        ..----::::::++++++  --::::mm..\n");
    printf("\t\t\t####::--++--------..            ....::++++++mmmm----::++mm  \n");
    printf("\t\t\t####::--------......            ....--::::mmmmmm--::++++mm  \n");
    printf("\t\t\t####++::::----....            ..------::++mmMMmm++mm++mmmm  \n");
    printf("\t\t\t####MM--::--....                ..----++++MMMMMMmmmmmmmm++  \n");
    printf("\t\t\t######::::..----..              ------::++++mmmmmm++MM@@++  \n");
    printf("\t\t\t######mm::::::------..--  ....--::++++mm::mmmmmmmmmm++MM++  \n");
    printf("\t\t\t######++MM##@@##@@mm::--  mmMM######@@####MMmmmmmm@@MMmmmm  \n");
    printf("\t\t\t######::mm::----++MM++..--MM##mm..--::mm@@@@MMMM++MMMMMM@@  \n");
    printf("\t\t\t######::mm++MM####mm@@..::##++MM####@@##@@##mm++mmMMMMmm##++\n");
    printf("\t\t\t######::::##@@######++  ::##MM##::##########++mmMM##@@####..\n");
    printf("\t\t\t######::..::::--::----..++@@::::::::++++##::--++MM######@@  \n");
    printf("\t\t\t######++----::::--  ....++MM++--++++++MMmm--::mm####@@####  \n");
    printf("\t\t\t######::--..      ..  ..++mmmm............::++MM##@@@@####  \n");
    printf("\t\t\t######::--..      --  ..++##mm..    ....::::++MMmmmm@@##@@  \n");
    printf("\t\t\t######::--      ....    ++--++..      ..--++++mmMMmmMM@@++  \n");
    printf("\t\t\t######::--..  ..++--..::MM@@@@::..  ....::++++MM@@++mm##::  \n");
    printf("\t\t\t######::------::..  ##########  ..--..--::++++MM##++MM##++  \n");
    printf("\t\t\t######::------....    ::--------------::mmmmmmMM##++@@##::  \n");
    printf("\t\t\t######MM------....        ..::::::::::++mmmmMM##@@++##MM::  \n");
    printf("\t\t\t########--....--::mmmmmm++MMMMmmMMmm::::mmmmMM##++mm##@@++--\n");
    printf("\t\t\t######@@++--..--  --  ..  --++MMMM::..++MMMM@@##MM@@####MMMM\n");
    printf("\t\t\t########@@::--......    ..::::MMmm::--mmmmmmmmMMMM########MM\n");
    printf("\t\t\t##########++++----::++MMMM####@@mm::++MM@@++mmmmMM##@@######\n");
    printf("\t\t\t##########mm::::::::--....--++++++++::@@++++mmmm@@##########\n");
    printf("\t\t\t############::++::--::----++++::++@@##++++mmMM@@############\n");
    printf("\t\t\t############::::::::++mmmmmmMMmm####mm++++MMMM##############\n");
    printf("\t\t\t##############::::::@@MM@@##@@@@##mm++++mmMM################\n");
    printf("\t\t\t############mm++++mm++++++MM@@mmmmmmmmmmmm##################\n");
    printf("\t\t\t############    ++++++mm++++mmmmmmmmMMMMMMMM@@##############\n");
    printf("\t\t\t##########MM      mmMMmmmmmm++mmmmMMmm++++mm..##############\n");
    printf("\t\t\t##########          ##mm++mmMMMMmm@@::--    ################\n");
    printf("\t\t\t##########        ##########::--          ##################\n");
    printf("\t\t\t########..      ::@@##########          ..##################\n");
    printf("\t\t\t########      ++    ########..          ####################\n");
    printf("\n");
    printf("\n");
    printf("\t\t\tEmiliano Augusto Cavalcanti de Albuquerque \n");
    printf("\t\t\tMelo, desenhista, pintor modernista, muralista, ilustrador e \n");
    printf("\t\t\tcaricaturista. (06/09/1897 à 26/10/1976)\n");
    printf("\n");

    trocaTela();
    mostraTitulo(1);

    printf("\n");
    printf("\n");
    printf("\t\t\t\t************************************\n");
    printf("\t\t\t\t****      Mário de Andrade      ****\n");
    printf("\t\t\t\t************************************\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t                                                            \n");
    printf("\t\t\t                                                            \n");
    printf("\t\t\t                      --::++++......                        \n");
    printf("\t\t\t                    ::MM@@--      ....----..                \n");
    printf("\t\t\t                  mmmmmm              ....::mm              \n");
    printf("\t\t\t                  @@MM..                    ::mm            \n");
    printf("\t\t\t                  MMMM                    ....##            \n");
    printf("\t\t\t                --mm::                    ......##          \n");
    printf("\t\t\t                mmMM::                      ..  ##          \n");
    printf("\t\t\t                mmmm                            MM          \n");
    printf("\t\t\t                mmmm                                        \n");
    printf("\t\t\t            mm  --mm..    --....              --            \n");
    printf("\t\t\t              ::--  ++::mm@@##MMMM            MM            \n");
    printf("\t\t\t              MM::    @@@@##@@MMmm----######--MM            \n");
    printf("\t\t\t                --        mm@@MMMM@@####@@--MMmm            \n");
    printf("\t\t\t                        ++    mm    @@MMMMMM..::            \n");
    printf("\t\t\t                                    ::++++  ++              \n");
    printf("\t\t\t                          ..          MMMM..                \n");
    printf("\t\t\t                        ..::                                \n");
    printf("\t\t\t            @@          ..    ::++++                        \n");
    printf("\t\t\t          ..MM                ..++--                        \n");
    printf("\t\t\t          ..          --MM  --::mm--......                  \n");
    printf("\t\t\t        ..  ::        ++    MM@@mmMM::--..                  \n");
    printf("\t\t\t    ++----..::        ..    ..++::++::--                    \n");
    printf("\t\t\t  ::MM::--------  --  ..    ++++++::++..                    \n");
    printf("\t\t\t::mmMM++mm++++::    ..      ..--::++mm                      \n");
    printf("\t\t\tmm@@@@mmMM++++mmMM      ....------++mmmm--                  \n");
    printf("\t\t\t++@@MM@@MMmm--::MM@@    mmMMMMmm++@@MMMMMMMMMM              \n");
    printf("\t\t\t--mmmm@@::MM++::mmmm@@--  @@    @@MMMMMM@@######MM          \n");
    printf("\t\t\t..mmmm++++@@mmmm::mm@@    mm++####@@MMMM##########mm        \n");
    printf("\t\t\t--mmmm++MMmm++++++mmmm  @@++++MM##@@@@@@########@@MM..      \n");
    printf("\t\t\t--MMMMmm@@++++++++mmmmmm##MMMM::##@@##@@@@######@@@@##::    \n");
    printf("\t\t\t--MMmm@@@@mmmmMM++mm++mm++@@mm::##@@##@@##############      \n");
    printf("\t\t\t::@@mmMM@@++mmmmmmmmmm++mmMMMM####@@MM@@######@@@@####::    \n");
    printf("\t\t\t::MMMM@@MM++mmmm++mm++++MMMMMM..MM##MM@@######@@MM####@@  ++\n");
    printf("\t\t\t++MMMM@@MMmmmmmmmmmmmmmm++mmMMmm@@##@@@@####@@##@@####mm    \n");
    printf("\t\t\t++mmMMMMMMMMMMmmmmMMmm++mmMMMMMM@@############@@######@@    \n");
    printf("\t\t\tmmMMMMMMmmmmmmMMmmmmmmMMmmMMMM@@MM##mm@@@@##@@######@@##    \n");
    printf("\t\t\tmmMMmmMMMMMMmmmmmmMMMMMMMMMMMM@@####MMMM@@@@##@@########MM  \n");
    printf("\t\t\t--++++mmMMmmmmMMMMMMMMMM@@MM######@@MMMM@@##@@MM    ####    \n");
    printf("\t\t\t++@@MM::++MMMMmmMM@@MM@@MMMMMMMM##@@MM@@@@@@MM++    ######  \n");
    printf("\t\t\tmmMM::mmmmMMMM++MMMM@@@@@@@@##@@######@@@@@@@@    mm######::\n");
    printf("\t\t\tmmmmmmmmmmmmmmmmmm@@@@@@MM@@@@@@####@@@@@@@@@@        @@##mm\n");
    printf("\t\t\tmmmmMMmmmmmm++MMmmMMMMMMMM@@@@@@##MM@@@@@@##::      ######++\n");
    printf("\t\t\tmmmmmmmm++mmmmMMMMMMMMMM@@MMMMMM##MMMM@@####  MM######@@@@mm\n");
    printf("\t\t\t++++mmmm++++mmmmmmMMMMmm@@@@@@@@@@@@@@@@@@##########mmMMMMMM\n");
    printf("\n");
    printf("\n");
    printf("\t\t\tMário Raul de Morais Andrade, contista, poeta, \n");
    printf("\t\t\tromancista, cronista, historiador de arte, fotógrafo e crítico. \n");
    printf("\t\t\tPrincipal fundador do modernismo para o Brasil, e assim \n");
    printf("\t\t\tpraticamente criou a poesia brasileira, graças a sua publicação \n");
    printf("\t\t\t”Pauliceia Desvairada” em 1922.\n");
    printf("\t\t\t(09/10/1893 à 25/02/1945) \n");
    printf("\n");

    trocaTela();
}
void mostraCase2(){

    mostraTitulo(2);

    printf("\t\t\tNa lista de maiores inventores brasileiros e respeitáve\n");
    printf("\t\t\tpioneiro da aviação, Alberto Santos Dumont, completando \n");
    printf("\t\t\tseus incríveis 150 anos, nascido em Minas Gerais. Suas \n");
    printf("\t\t\tobras, vida e valores são até hoje muito inspiradores, não só \n");
    printf("\t\t\tno Brasil como mundo a fora! Vindo de famílias francesas e \n");
    printf("\t\t\tportuguesas, Alberto havia despertado interesse desde \n");
    printf("\t\t\tpequeno sobre “máquinas voadoras”, sua vontade de \n");
    printf("\t\t\talcançar os céus veio aos 15 anos (estimasse), após \n");
    printf("\t\t\tobservar um balão. Quando completou seus 18 anos, teve a \n");
    printf("t\t\tchance de conhecer Paris e lá seu amor pelas aeronaves \n");
    printf("\t\t\tficou ainda maior devido as corridas de automóveis. \n");
    printf("\n");
    printf("\n");

    trocaTela();
    mostraTitulo(2);

    printf("\n");
    printf("\n");
    printf("\t\t\tSantos Dumont era destaque na área de aviação, \n");
    printf("\t\t\tquando projetou seu primeiro balão dirigível e fez belos voos \n");
    printf("\t\t\tbem-sucedidos sobre Paris. E lembrado pela aeronave “14-\n");
    printf("\t\t\tBis”, sendo o primeiro avião mais pesado e ainda com um \n");
    printf("\t\t\tsistema de ar com propulsa própria, levantando voo em \n");
    printf("\t\t\t1906 e atingindo um novo marco para a história. \n");
    printf("\n");
    printf("\n");

    trocaTela();
    mostraTitulo(2);

    printf("\n");
    printf("\n");
    printf("\t\t\tFocado em mostrar ao mundo as maravilhas da \n");
    printf("\t\t\taeronáutica, continuou realizando melhorias na aviação e \n");
    printf("\t\t\ttempo depois fabricou o “Demoiselle” e por volta dessa \n");
    printf("\t\t\tépoca ele acabou recebendo o maior título que poderia \n");
    printf("\t\t\tsistema de ar com propulsa própria, levantando voo em \n");
    printf("\t\t\tadquirir, sendo lembrado até hoje como: Pai da aviação\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t	Falecido em 1932, o seu coração está preservado até \n");
    printf("\t\t\thoje e pode ser encontrado no Museu Aeroespacial e seus \n");
    printf("\t\t\ttempo depois fabricou o “Demoiselle” e por volta dessa \n");
    printf("\t\t\tgrandes feitos são comemorados no dia 23 de outubro.\n");
    printf("\n");
    printf("\n");

}
void mostraCase3(){
    mostraTitulo(3);

    printf("\n");
    printf("\n");
    printf("\t\t\t\t Paris, na França, será o palco das Olimpíadas de 2024, que acontecerão \n");
    printf("\t\t\t de 24 de julho a 11 de agosto. A cerimônia de abertura está marcada para o \n");
    printf("\t\t\t dia 26 de julho, marcando o início oficial dos jogos. É a terceira vez que a \n");
    printf("\t\t\t cidade luz recebe os Jogos Olímpicos, após as edições memoráveis de 1900 e \n");
    printf("\t\t\t 1924. \n");
    printf("\t\t\t  \n");
    printf("\n");
    printf("\n");

    trocaTela();
    mostraTitulo(3);

    printf("\n");
    printf("\n");
    printf("\t\t\t\t Nas Olimpíadas de Paris 2024, há uma incrível diversidade de 32 \n");
    printf("\t\t\t esportes e 48 modalidades que estará em competição. Entre as emocionantes \n");
    printf("\t\t\t disciplinas aquáticas, incluímos natação competitiva, natação artística, \n");
    printf("\t\t\t maratona aquática, saltos ornamentais e polo aquático. \n");
    printf("\t\t\t  \n");
    printf("\n");
    printf("\n");

    trocaTela();
    mostraTitulo(3);

    printf("\n");
    printf("\n");
    printf("\t\t\t\t Os arqueiros mostrarão sua destreza no tiro com arco, enquanto os \n");
    printf("\t\t\t corredores demonstrarão sua velocidade e resistência no atletismo. Outros \n");
    printf("\t\t\t esportes fascinantes como badminton, basquete (incluindo a variante 3x3), \n");
    printf("\t\t\t boxe, canoagem de velocidade e slalom, ciclismo em diversas categorias (BMX \n");
    printf("\t\t\t freestyle, BMX Racing, de estrada e de pista), esgrima, futebol, golfe, ginástica \n");
    printf("\t\t\t (artística, rítmica e de trampolim), handebol, hóquei, judô, pentatlo moderno, \n");
    printf("\t\t\t remo, rugby e rugby sevens, vela, tiro esportivo, skate, escalada esportiva, \n");
    printf("\t\t\t surfe, tênis, tênis de mesa, taekwondo, triatlo, vôlei de quadra e de praia, \n");
    printf("\t\t\t levantamento de peso, e luta greco-romana e estilo livre estarão no centro das \n");
    printf("\t\t\t atenções.  \n");
    printf("\t\t\t  \n");
    printf("\n");
    printf("\n");

    trocaTela();
    mostraTitulo(3);

    printf("\n");
    printf("\n");
    printf("\t\t\t\t Cada esporte promete momentos de habilidade, determinação e emoção \n");
    printf("\t\t\t à medida que os atletas se esforçam para alcançar a grandeza olímpica. \n");
    printf("\t\t\t  \n");
    printf("\t\t\t\t Uma novidade empolgante nos Jogos Olímpicos de Paris 2024 é a \n");
    printf("\t\t\t inclusão do Breaking, uma forma de dança de rua vibrante e cheia de energia. \n");
    printf("\t\t\t Nesta competição, dançarinos talentosos, conhecidos como B-Boys e B-Girls, \n");
    printf("\t\t\t enfrentarão desafios individuais em batalhas solo intensas, adicionando um \n");
    printf("\t\t\t toque de criatividade ao evento. \n");
    printf("\t\t\t  \n");
    printf("\n");
    printf("\n");

    trocaTela();
    mostraTitulo(3);

    printf("\n");
    printf("\n");
    printf("\t\t\t\t Além disso, uma prova emocionante que estreia é o Slalom Extremo na \n");
    printf("\t\t\t canoagem, onde quatro corajosos atletas descem por uma rampa ao mesmo \n");
    printf("\t\t\t tempo, enfrentando obstáculos desafiadores pelo caminho. A destreza e a \n");
    printf("\t\t\t habilidade serão essenciais para superar esse percurso desafiador. \n");
    printf("\t\t\t  \n");
    printf("\t\t\t\t Também haverá mudanças significativas e inovadoras. Na escalada \n");
    printf("\t\t\t esportiva, os atletas competirão em boulder, lead e velocidade, com medalhas \n");
    printf("\t\t\t concedidas em cada categoria. Competições mistas, incluindo modalidades \n");
    printf("\t\t\t como marcha atlética e tiro com arco, trarão uma dinâmica nova, promovendo \n");
    printf("\t\t\t igualdade de gênero.  \n");
    printf("\t\t\t  \n");
    printf("\n");
    printf("\n");

    
    trocaTela();
    mostraTitulo(3);

    printf("\n");
    printf("\n");
    printf("\t\t\t\t Além disso, o pentatlo terá um percurso prolongado de 90 minutos, \n");
    printf("\t\t\t envolvendo esgrima, natação, hipismo, tiro e corrida, desafiando a resistência e \n");
    printf("\t\t\t estratégia dos competidores.  \n");
    printf("\t\t\t  \n");
    printf("\t\t\t\t  \n");
    printf("\t\t\t Estas mudanças emocionantes prometem uma experiência olímpica \n");
    printf("\t\t\t inovadora e memorável em Paris 2024. \n");
    printf("\n");
    printf("\n");
    

}
void mostraCase4(){
    mostraTitulo(4);

    trocaTela();
    mostraTitulo(4);

    printf("\n");
    printf("\n");
    printf("\t\t\t\t Israel é um país com um rico património cultural e artístico que reflete a \n");
    printf("\t\t\t diversidade da sua população, que inclui comunidades judaicas, árabes, drusas \n");
    printf("\t\t\t e outras comunidades étnicas. A cultura e a arte israelenses são uma \n");
    printf("\t\t\t combinação fascinante de tradição e inovação. \n");
    printf("\t\t\t  \n");
    printf("\n");
    printf("\n");

    trocaTela();
    mostraTitulo(4);

    printf("\n");
    printf("\n");
    printf("\t\t\t\t Sobre a Religião, Israel é um centro importante para as três religiões \n");
    printf("\t\t\t abraâmicas: Judaísmo, Cristianismo e Islamismo. Isso afetou intensamente a cultura \n");
    printf("\t\t\t deste país. \n");
    printf("\t\t\t  \n");
    printf("\t\t\t\t Entre as línguas utilizadas em Israel, o hebraico é a língua oficial, enquanto o \n");
    printf("\t\t\t árabe é a língua oficial em algumas partes do país, refletindo a variedade cultural. \n");
    printf("\t\t\t  \n");
    printf("\t\t\t\t Alguns dos feriados mais populares em Israel, como feriados religiosos como \n");
    printf("\t\t\t Pessach (Páscoa) e Hanukkah (Festival das Luzes), são celebrados com grande \n");
    printf("\t\t\t entusiasmo. Além disso, eventos culturais e musicais acontecem o ano todo. \n");
    printf("\t\t\t  \n");
    printf("\t\t\t\t Em Israel, a vida teatral é bastante animada, com destaque para o Teatro \n");
    printf("\t\t\t Habima, localizado em Tel Aviv, que é considerado um dos teatros mais antigos em \n");
    printf("\t\t\t todo o mundo. Além disso, a dança e a música tradicionais também ocupam um lugar \n");
    printf("\t\t\t especial, sendo profundamente apreciadas na cultura local. \n");
    printf("\t\t\t  \n");
    printf("\n");
    printf("\n");

    trocaTela();
    mostraTitulo(4);

    printf("\n");
    printf("\n");
    printf("\t\t\t\t A comida de Israel é incrivelmente variada, fundindo influências da cultura \n");
    printf("\t\t\t judaica, árabe e mediterrânea. Pratos populares incluem falafel, homus, shawarma e \n");
    printf("\t\t\t uma variedade de pratos de peixe. A diversidade de sabores é realmente cativante. \n");
    printf("\t\t\t  \n");
    printf("\t\t\t\t A arquitetura em Israel combina estilos contemporâneos e clássicos. Tel Aviv \n");
    printf("\t\t\t se destaca pela sua arquitetura Bauhaus, ao passo que Jerusalém abriga construções \n");
    printf("\t\t\t antigas e sagradas. \n");
    printf("\t\t\t  \n");
    printf("\n");
    printf("\n");

    trocaTela();
    mostraTitulo(4);

    printf("\n");
    printf("\n");
    printf("\t\t\t\t A arquitetura em Israel é uma mescla fascinante de estilos modernos e \n");
    printf("\t\t\t tradicionais. Tel Aviv é especialmente notável por sua arquitetura Bauhaus, enquanto \n");
    printf("\t\t\t Jerusalém é rica em construções antigas e sagradas. É realmente interessante \n");
    printf("\t\t\t observar essa diversidade arquitetônica no país. \n");
    printf("\t\t\t  \n");
    printf("\t\t\t\t A cena artística em Israel é incrivelmente diversificada, variando do tradicional \n");
    printf("\t\t\t ao contemporâneo. Os artistas do país são internacionalmente reconhecidos por suas \n");
    printf("\t\t\t valiosas contribuições para áreas como pintura, escultura e outras formas de \n");
    printf("\t\t\t expressão visual. É impressionante ver como a arte em Israel é tão rica e eclética. \n");
    printf("\t\t\t  \n");
    printf("\n");
    printf("\n");


}

void verificaTicket(char *resp){
    if(verificaMenu==0){
        if(*resp=='S'){
            printf("\n\t\t\t\tTenha um bom passeio!!!\n");
            printf("\n");
            printf("\n");
            getchar();
        }else if(verificaMenu==1){
            printf("\n\t\t\t\tOk... Voltando para o menu...\n");
            printf("\n");
            printf("\n");
            getchar();
        }
    }else{
            printf("\n\t\t\t\tOk... Voltando para o menu...\n");
            printf("\n");
            printf("\n");
            getchar();

    }
}
char ticket(int expo){
    char ticket;
    trocaTela();
    mostraTitulo(5);
    printf("\n\t\t\t\tQuer comprar o Ticket? (S/N): ");
    scanf(" %c", &ticket);
     while (getchar() != '\n');
    ticket=toupper(ticket);
    if(ticket!='S' && ticket!='N'){
        do{
            printf("\n\t\t\t\t Opção inválida, digite novamente...\nQuer comprar o Ticket? (S/N): ");
            scanf(" %c", &ticket);
            ticket=toupper(ticket);
        }while(ticket!='S' && ticket!='N');
    }else{
        if(ticket=='S'){
            compraTicket(expo);
        }else if(ticket=='N'){
            printf("\n\t\t\t\tOk, você será redirecionado ao menu...\n");
            verificaMenu==1;
            printf("\n%d\n", verificaMenu);
            while (getchar() != '\n');
        }
    }
    return ticket;
}

void compraTicket(int expo){
    Pessoa cliente;
    Sessao sessao;
    cliente = recebeCadastro();
    int idoso=cliente.idoso;

    do{
        trocaTela();
        sessao=validaSessao(expo, idoso);
    }while(sessao.suc==1);
    system("clear");
    if (verificaMenu==0){
        FILE * ticLog = fopen(bilheteFile, "a");
        if(!ticLog){
            FILE * STDERRR = fopen("logErr.txt", "a");  
            fseek(STDERRR, 0, 2);
            fprintf(STDERRR,"Erro abertura do arquivo bilhetes.csv\n");
            printf("\n\nOcorreu um erro, favor reiniciar o programa e tentar novamente, caso persista contate a administração do museu\n\n");
            fclose(STDERRR);
            getchar();
        }else{
            mostraTitulo(5);
            switch (sessao.suc){
                case 0: //compra idade<65
                    printf("\n\t\t\t\tO valor da inteira é R$20,00\n\t\t\t\tO pagamento será realizado na bilheteria do museu...");
                    fprintf(ticLog,"%d;%d;%d;%s;%d;%s;%s\n", sessao.expo, sessao.hora, sessao.suc, cliente.nome, cliente.idade, cliente.telefone, cliente.email);
                    printf("\n\t\t\t\tSessão: %d\n\t\t\t\tHorário: %d\n\t\t\t\tTipo de bilhete: %d\n\t\t\t\tNome cliente: %s\n\t\t\t\tIdade cliente: %d\n\t\t\t\tTelefone cliente: %s\n\t\t\t\tEmail cliente: %s\n", sessao.expo, sessao.hora, sessao.suc, cliente.nome, cliente.idade, cliente.telefone, cliente.email);
                    break;
                case 1://falha na escolha de sessão
                    
                    break;
                case 2://compra idade >=65 == 50% desconto >> sem vagas gratuitas disponiveis
                    printf("\n\t\t\t\tO valor da meia-entrada é R$10,00\n\t\t\t\tO pagamento será realizado na bilheteria do museu...");
                    fprintf(ticLog,"%d;%d;%d;%s;%d;%s;%s\n", sessao.expo, sessao.hora, sessao.suc, cliente.nome, cliente.idade, cliente.telefone, cliente.email);
                    printf("\n\t\t\t\tSessão: %d\n\t\t\t\tHorário: %d\n\t\t\t\tTipo de bilhete: %d\n\t\t\t\tNome cliente: %s\n\t\t\t\tIdade cliente: %d\n\t\t\t\tTelefone cliente: %s\n\t\t\t\tEmail cliente: %s\n", sessao.expo, sessao.hora, sessao.suc, cliente.nome, cliente.idade, cliente.telefone, cliente.email);
                    break;
                case 3://compra idade >=65 grátis
                    printf("\n\t\t\t\tSua entrada é gratuita nesta sessão \n\t\t\t\tApenas realize o check in na bilheteria do museu...");
                    fprintf(ticLog,"%d;%d;%d;%s;%d;%s;%s\n", sessao.expo, sessao.hora, sessao.suc, cliente.nome, cliente.idade, cliente.telefone, cliente.email);
                    printf("\n\t\t\t\tSessão: %d\n\t\t\t\tHorário: %d\n\t\t\t\tTipo de bilhete: %d\n\t\t\t\tNome cliente: %s\n\t\t\t\tIdade cliente: %d\n\t\t\t\tTelefone cliente: %s\n\t\t\t\tEmail cliente: %s\n", sessao.expo, sessao.hora, sessao.suc, cliente.nome, cliente.idade, cliente.telefone, cliente.email);
                    break;
                case 4:

                    break;
                default:
                    FILE * STDERRR = fopen("logErr.txt", "a");
                    fseek(STDERRR, 0, 2);
                    printf("\n\n\n\t\t\t\tOcorreu um erro, favor reiniciar o programa e tentar novamente, caso persista contate a administração do museu\n\n");
                    fprintf(STDERRR,"Possivel overflow de memoria na verificação de sessão\n");
                    fclose(STDERRR);
                    break;
            }
            fclose(ticLog);
        }
    }else{}
    
}

Pessoa recebeCadastro(){
    char op;
    Pessoa cliente;
    do{
        trocaTela();
        printf("\n");
        printf("\n");
        printf("\t\t\t\t*****************************\n");
        printf("\t\t\t\t**         Cadastro        **\n");
        printf("\t\t\t\t*****************************\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        cliente = recebeDados();
        printf("\n\t\t\t\tnome: %s\n", cliente.nome);
        printf("\t\t\t\tidade: %d\n", cliente.idade);
        printf("\t\t\t\ttelefone: %s\n", cliente.telefone);
        printf("\t\t\t\temail: %s\n", cliente.email);
        printf("\t\t\t\tConfirmar dados? (S/N): ");
        scanf("%c", &op);
        op=toupper(op);
        if(op!='S' && op!='N'){
            do{
                printf("\n\t\t\t\tOpção inválida, digite novamente...\n\t\t\t\tConfirmar dados? (S/N): ");
                scanf(" %c", &op);
                op=toupper(op);
            }while(op!='S' && op!='N');
        }
        if(op=='S'){
            printf("\n\t\t\t\tOK...\n\n");
        }else {}
    }while(op!= 'S');
        
        printf("\n\t\t\t\tOK, cadastro realizado com sucesso...\n");
        printf("\t\t\t\tSeguindo para compra do bilhete...\n");
        sleep(2);
        if(cliente.idade >= 65){
            cliente.idoso = 1;
        }else{
            cliente.idoso = 0;
        }


    return cliente;
}

Pessoa recebeDados(){
    Pessoa cliente;
    printf("\t\t\t\tdigite seu nome: ");
    scanf("%101[^\n]", cliente.nome);
    while (getchar() != '\n');
    
    printf("\t\t\t\tdigite sua idade: ");
    scanf("%d", &cliente.idade);
    while (getchar() != '\n');
    
    printf("\t\t\t\tdigite seu telefone: ");
    scanf("%101[^\n]", cliente.telefone);
    while (getchar() != '\n');

    printf("\t\t\t\tdigite seu email: ");
    scanf("%101[^\n]", cliente.email);
    while (getchar() != '\n');

    return cliente;
}

Sessao validaSessao(int expo, int idoso){
    Sessao sessao;
    Sessao compSessao;
    sessao.expo=expo;
    returnSessao:
    trocaTela();
    printf("\n");
    printf("\n");
    printf("\t\t\t\t*****************************\n");
    printf("\t\t\t\t**         Sessões         **\n");
    printf("\t\t\t\t*****************************\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t1 - 9h\t\t2 - 10h\n");
    printf("\n\t\t\t\t3 - 11h\t\t4 - 14h\n ");
    printf("\n\t\t\t\t5 - 15h\t\t6 - 16h\n\n\t\t\t\t  0 - voltar ao Menu \n\n\n");
    printf("\t\t\t\tEntre com sua opção: ");
    scanf("%d", &sessao.hora);
    while (getchar() != '\n');
    if(sessao.hora!=0 && sessao.hora!=1 && sessao.hora!=2 && sessao.hora!=3 && sessao.hora!=4 && sessao.hora!=5 && sessao.hora!=6){
        do{
            printf("\n\t\t\t\tOpção inválida, digite novamente...\n\t\t\t\tEntre com sua opção: ");
            scanf("%d", &sessao.hora);
        }while(sessao.hora!=0 && sessao.hora!=1 && sessao.hora!=2 && sessao.hora!=3 && sessao.hora!=4 && sessao.hora!=5 && sessao.hora!=6);
    }
    if(sessao.hora==0){
        sessao.suc==1;
        verificaMenu==1;
    }

    FILE* sessaoLog;
    sessaoLog=fopen(sessaoFile, "r+");
    if(!sessaoLog){
        FILE * STDERRR = fopen("logErr.txt", "a");
        fseek(STDERRR, 0, 2);
        printf("\n\n\n\t\t\t\tOcorreu um erro, favor reiniciar o programa e tentar novamente, caso persista contate a administração do museu\n\n");
        fprintf(STDERRR,"Erro na abertura do arquivo sessao.dat\n");
        fclose(STDERRR);
        getchar();
    }else{
        int aux=0;
        while(fread(&compSessao, sizeof(Sessao), 1, sessaoLog)){

            if(compSessao.expo==sessao.expo && compSessao.hora==sessao.hora){
                if(compSessao.qtd >= MAX_QTD){
                    printf("\n\n\t\t\t\tInfelizmente não temos mais vagas nesta sessao... tente novamente...\n");
                    sessao.suc=1;
                    fclose(sessaoLog);
                    //getchar();
                    goto returnSessao;
                    break;
                }else if(idoso==1 && compSessao.qtdIdoso >= MAX_QTD_IDOSO && compSessao.qtd < MAX_QTD){
                    char op;
                    printf("\n\n\t\t\t\tInfelizmente não temos mais vagas gratuitas para idosos nesta sessao...");
                    printf("\n\t\t\t\tMas possuímos %d vagas no total e seu ingresso terá 50%% de desconto ", MAX_QTD - compSessao.qtd);
                    printf("\n\t\t\t\tDeseja continuar comprando ingresso? (S/N): \n");
                    scanf("%c", &op);
                    op=toupper(op);
                    if(op!='S' && op!='N'){
                        do{
                            printf("\n\n\n\t\t\t\t Opção inválida, digite novamente: ");
                            scanf(" %c", &op);
                            op=toupper(op);
                        }while(op!='S' && op!='N');
                    }else{}
                    if(op=='S'){
                        printf("\n\n\n\t\t\t\tOK, seguiremos para a parte de compra...");
                        printf("\n");
                        fseek(sessaoLog, aux*sizeof(Sessao), 0);
                        compSessao.qtd++;
                        fwrite(&compSessao,sizeof(Sessao), 1, sessaoLog);
                        sessao.suc=2;
                        fclose(sessaoLog);
                        getchar();
                        break;
                    }else if(op=='N'){
                        printf("\n\n\n\t\t\t\tOK, voce será redirecionado à seleção de sessões novamente...");
                        printf("\n");
                        sessao.suc=1;
                        fclose(sessaoLog);
                        //getchar();
                        goto returnSessao;
                    }
                }else if(idoso==1 && compSessao.qtdIdoso >= MAX_QTD_IDOSO && compSessao.qtd >= MAX_QTD){
                    printf("\n\n\n\t\t\t\tInfelizmente não temos mais vagas nesta sessao... tente novamente...\n");
                    sessao.suc=1;
                    fclose(sessaoLog);
                    //getchar();
                    goto returnSessao;
                    break;
                }else if(compSessao.qtd < MAX_QTD){
                    if(idoso==1 && compSessao.qtdIdoso<= MAX_QTD_IDOSO){
                        printf("\n\n\n\t\t\t\tTemos %d vagas disponiveis nesta sessao, sendo %d elas gratuitas ao idosos...\n", MAX_QTD-compSessao.qtd, MAX_QTD_IDOSO-compSessao.qtdIdoso);
                        sleep(1);
                        printf("\n\n\n\t\t\t\tSeguiremos para a parte de compra...");
                        printf("\n");
                        fseek(sessaoLog, aux*sizeof(Sessao), 0);
                        compSessao.qtd++;
                        compSessao.qtdIdoso++;
                        fwrite(&compSessao,sizeof(Sessao), 1, sessaoLog);
                        sessao.suc=3;
                        fclose(sessaoLog);
                        getchar();
                        break;
                    }else{
                        printf("\n\n\n\t\t\t\tTemos %d vagas disponiveis nesta sessao...\n", MAX_QTD-compSessao.qtd);
                        sleep(1);
                        printf("\n\n\n\t\t\t\tSeguiremos para a parte de compra...");
                        printf("\n");
                        fseek(sessaoLog, aux*sizeof(Sessao), 0);
                        compSessao.qtd++;
                        fwrite(&compSessao,sizeof(Sessao), 1, sessaoLog);
                        sessao.suc=0;
                        fclose(sessaoLog);
                        getchar();
                        break;
                    }
                }
            }
            aux++;
        }

        if(compSessao.expo!=sessao.expo && compSessao.hora!=sessao.hora && verificaMenu!=1){
            fseek(sessaoLog, 0, 2);
            sessao.qtd=0;
            sessao.qtdIdoso=0;

            if(idoso==1 ){
                printf("\n\n\n\t\t\t\tTemos %d vagas disponiveis nesta sessao, sendo %d elas gratuitas ao idosos...\n", MAX_QTD, MAX_QTD_IDOSO);
                sleep(1);
                printf("\n\n\n\t\t\t\tSeguiremos para a parte de compra...");
                printf("\n");
                sessao.qtd++;
                sessao.qtdIdoso++;
                fwrite(&sessao,sizeof(Sessao), 1, sessaoLog);
                getchar();
                sessao.suc=3;
                fclose(sessaoLog);
            }else{
                printf("\n\n\n\t\t\t\tTemos %d vagas disponiveis nesta sessao...\n", MAX_QTD);
                sleep(1);
                printf("\n\n\n\t\t\t\tSeguiremos para a parte de compra...");
                printf("\n");
                sessao.qtd++;;
                fwrite(&sessao,sizeof(Sessao), 1, sessaoLog);
                getchar();
                sessao.suc=0;
                fclose(sessaoLog);
            }
        }
    }

    return sessao;
}
