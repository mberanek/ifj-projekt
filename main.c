/**
 * Predmet:  IFJ / IAL
 * Projekt:  Implementace interpretu imperativniho jazyka
 * Varianta: I
 * Subor:    main.c
 * Datum:    8. 10. 2017
 * Autori:   David Ling      <xlingd00@stud.fit.vutbr.cz>,
 *           David Zak       <xzakda02@stud.fit.vutbr.cz>,
 *           Michal Beranek  <xberan38@stud.fit.vutbr.cz>
 */

#include <stdio.h>
#include "errorCodes.h"

FILE *fp;

int main(int argc, char* argv[]){
    //Zkontroluje jestli byl zadán název souboru
    if(argc==1){
        fprintf(stderr, "Nebyl zadan vstupni soubor.\n");
        return FILE_ERR;
    }

    //Zkusí otevřít soubor
    if(!(fp = fopen(argv[1], "r"))){
        fprintf(stderr, "Nepovedlo se načíst soubor.\n");
        return FILE_ERR;
    }

    //Spustí metodu parser
    int error = parser();

}






