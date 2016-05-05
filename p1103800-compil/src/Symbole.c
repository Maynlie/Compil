#include "../include/Symbole.h"
#include <string>

using namespace std;

Symbole::Symbole()
{
	sign = "";
	type = NULL;
}

Symbole::Symbole(TypeDesc* t, string s){
	sign = s;
	type = t;
}

Symbole::Symbole(string s)
{
	type = NULL;
	sign = s;
}

void Symbole::afficher()
{
	cout << sign << " ";
	if(type!=NULL) type->afficher();
}

TypeDesc* Symbole::getType()
{
	return type;
}
