#ifndef TABLES
#define TABLES
#include <string>
#include <map>
#include <vector>
#include "Symbole.h"

class TableSymboles{
private:
	std::string nom;
	TableSymboles* parent;
	std::map<int, Symbole> symboles;
	std::vector<TableSymboles*> fils;
public:
	TableSymboles(std::string name);
	TableSymboles(std::string name, TableSymboles* p);
	void AjoutSymbole(Symbole* s, int id);
	Symbole& getSymbole(int id);
	void afficher();
	std::string getNom(){return nom;};
	TableSymboles* getParent(){return parent;};
	void AddSon(TableSymboles* s);
};

#endif
