#include "../include/TableSymboles.h"

using namespace std;

TableSymboles::TableSymboles(std::string name)
{
	nom = name;
	parent = NULL;
}

TableSymboles::TableSymboles(string name, TableSymboles* p)
{
	nom = name;
	parent = p;
}

void TableSymboles::AjoutSymbole(Symbole* s, int id)
{
	symboles.insert(pair<int,Symbole>(id, *s));
}

Symbole& TableSymboles::getSymbole(int id)
{
	return symboles[id];
}

void TableSymboles::afficher()
{
	cout << nom << endl;
	cout << "parent ";
	if(parent != NULL)
	{
		cout << parent->getNom() << endl;
	} else {
		cout << "NULL" << endl;
	}
	for(map<int, Symbole>::iterator it = symboles.begin(); it != symboles.end(); ++it)
	{
		cout << it->first << " ";
		it->second.afficher();
		cout << endl;
	}
	for(int i = 0; i < fils.size(); i++)
	{
		fils[i]->afficher();
	}
}

void TableSymboles::AddSon(TableSymboles* s)
{
	fils.push_back(s);
}
