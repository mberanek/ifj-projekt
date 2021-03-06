/**
 * Predmet:  IFJ / IAL
 * Projekt:  Implementace interpretu imperativniho jazyka
 * Varianta: I
 * Subor:    parser.c
 * Datum:    8. 10. 2017
 * Autori:   David Ling      <xlingd00@stud.fit.vutbr.cz>,
 *           David Zak       <xzakda02@stud.fit.vutbr.cz>,
 *           Michal Beranek  <xberan38@stud.fit.vutbr.cz>
 */


 /* ---------- TODO------------*/
 /**
 * Definice funkci použitých při syntaktické analýze.
 * Načítání tokenů a kontrola správných sémantických pravidel.
 * int parser(); vrací 0, pokud ok jinak číslo chyby z errorCodes.h
 */


int parser()
{

    int error;
    while(token = getToken() != SCOPE)
    //Deklarace a definice před Scope
    {
        if(token.type == ENDOF)
        //Nenašel jsem SCOPEĵ
        {

        }
    }

    error = scope();
    if(error != ERR_OK)
    {
        return error;
    }

    token = getToken();
    if(token.type != ENDOF)
    //End Scope neni posledni
    {
        return NOTEOF;
    }

    return EOK;
}

int scope()
{
    int error;
    token = getToken();
    while(token = getToken() != ENDSCOPE || token != ENDOF)
    {
        if()
    }
    if(token != ENDSCOPE)
    //Neni END Scope
    {
        return NOTENDSCOPE;
    }
    return ERR_OK;
}

