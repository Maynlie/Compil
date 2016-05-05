#ifndef SYMBOLE
#define SYMBOLE

#include <string>
#include "../include/TypeDesc.h"

class Symbole{
private:
	std::string sign;
	TypeDesc* type;
public:
	Symbole();
	Symbole(TypeDesc* t, std::string s);
	Symbole(std::string s);
	void afficher();
	TypeDesc* getType();
};

#endif
