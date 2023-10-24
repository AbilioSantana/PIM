#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<time.h>

char ticket(char ticket);
void verificaTicket();
void trocaTela();
void mostraCase1();
void mostraCase2();
void mostraCase3();
void mostraCase4();
void mostraTitulo(int op);
int main(){
    int op, opMenu=1;
    char aceiteTicket;
    setlocale(LC_ALL,"portuguese");
    do{
        opMenu=1;
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
        scanf("%d", &op);
        switch(op){
        case 0:
            system("cls");
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
            system("cls");

            mostraCase1();

            aceiteTicket=ticket(aceiteTicket);
            verificaTicket(&aceiteTicket);

            system("cls");
            break;
        case 2:
            system("cls");
            mostraCase2();
            system("pause");
            system("cls");

            aceiteTicket=ticket(aceiteTicket);
            verificaTicket(&aceiteTicket);

            system("cls");
            break;
        case 3:
            system("cls");
            mostraCase3();
            system("pause");
            system("cls");

            aceiteTicket=ticket(aceiteTicket);
            verificaTicket(&aceiteTicket);

            system("cls");
            break;
        case 4:
            system("cls");
            mostraCase4();
            system("pause");
            system("cls");

            aceiteTicket=ticket(aceiteTicket);
            verificaTicket(&aceiteTicket);

            system("cls");
            break;
        }
    }while(op!=0 && opMenu!=0);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t     *********************\n");
    printf("\t\t\t\t     **      Bye...     **\n");
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
    system("cls");
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
}
void mostraCase4(){
    mostraTitulo(4);
}
void trocaTela(){
    system("pause");
    system("cls");
}
void verificaTicket(char *resp){
    if(*resp=='S'){
        printf("\n\t\t\t\tTenha um bom passeio!!!\n");
        printf("\n");
        printf("\n");
        system("pause");
    }else{
        printf("\n\t\t\t\tOk... Saindo... :(\n");
        printf("\n");
        printf("\n");
        system("pause");
    }
}
char ticket(char ticket){
    printf("\n");
    printf("\n");
    printf("\t\t\t\t*****************************\n");
    printf("\t\t\t\t**         Check In        **\n");
    printf("\t\t\t\t*****************************\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n\t\t\t\tQuer comprar o Ticket? (S/N): ");
    scanf(" %c", &ticket);
    ticket=toupper(ticket);
    if(ticket!='S' && ticket!='N'){
        do{
            printf("\n\t\t\t\t Opção inválida, digite novamente...\nQuer comprar o Ticket? (S/N): ");
            scanf(" %c", &ticket);
            ticket=toupper(ticket);
        }while(ticket!='S' && ticket!='N');
    }
    if(ticket=='S'){
        printf("\n\t\t\t\tComprando...");
        printf("\n");
    }else if(ticket=='N'){

    }else {
        do{
            printf("\n\t\t\t\tOpção inválida, digite novamente...\nQuer comprar o Ticket? (S/N): ");
            scanf(" %c", &ticket);
        }while(ticket!='S' || ticket!='N');
    }
    return ticket;
}
