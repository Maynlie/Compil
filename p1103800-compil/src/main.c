#include <cstdlib>
#include <iostream>
#include <cstddef>
#include <cstdio>

#include "../include/TableIdentificateur.h"
#include "../include/TableSymboles.h"

extern int yyparse ();

extern FILE* yyin;

TableIdentificateur TI;

TableSymboles* current;

using namespace std;

int main ( int argc, char** argv )

{
	
        /* Gestion de la ligne de commande */

        /* Initialisation des données du compilateur */
	current = new TableSymboles("origine");
        /* phases d'analyse */
    yyparse ();
    TI.afficherTableIdent();
    current->afficher();

        /* traitements post analyse */

        /* sauvegarde des resultats */
}

