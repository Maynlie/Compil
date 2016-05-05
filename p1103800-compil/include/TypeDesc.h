#ifndef TYPE
#define TYPE

#include <vector>
#include <iostream>

enum Type{INT, REAL, BOOLEAN, CHAR, STRING, TAB, INTERVALLE, STRUCT, ENUM};
//0: entier; 1: Réel; 2: Boolean; 3: char; 4: String; 5: Tableau; 6: Intervalle; 7: Structure; 8: Enum

class TypeDesc{
private:	
	Type primaire;
public:
	TypeDesc(int t);
	virtual void afficher();
	Type getType(){return primaire;}
};

class StructTypeDesc : public TypeDesc
{
private:
	std::vector<TypeDesc> records;
public:
	StructTypeDesc(std::vector<TypeDesc> & r);
	virtual void afficher();
};

class TableauTypeDesc : public TypeDesc
{
private:
	Type secondaire;
public:
	TableauTypeDesc(TypeDesc* s);
	virtual void afficher();
};

#endif
