#include "../include/TypeDesc.h"

/*extern Type I;
extern Type R;
extern Type B;
extern Type C;
extern Type S;
extern Type T;
extern Type IN;
extern Type ST;
extern Type E;*/

TypeDesc::TypeDesc(int t)
{
	switch(t)
		{
			case 0:
			primaire = INT;
			break;
			case 1:
			primaire = REAL;
			break;
			case 2:
			primaire = BOOLEAN;
			break;
			case 3:
			primaire = CHAR;
			break;
			case 4:
			primaire = STRING;
			break;
			case 5:
			primaire = TAB;
			break;
			case 6:
			primaire = INTERVALLE;
			break;
			case 7:
			primaire = STRUCT;
			break;
			case 8:
			primaire = ENUM;
			break;
		}
}

void TypeDesc::afficher()
{
	switch(primaire)
	{
	case INT:
		std::cout << "Int";
		break;
	case REAL:
		std::cout << "Reel";
		break;
	case BOOLEAN:
		std::cout << "Boolean";
		break;
	case CHAR:
		std::cout << "Char";
		break;
	case STRING:
		std::cout << "String";
		break;
	case ENUM:
		std::cout << "Enumeration";
		break;
	case INTERVALLE:
		std::cout << "Intervalle";
		break;
	}
}

StructTypeDesc::StructTypeDesc(std::vector<TypeDesc> & r) : TypeDesc(7)
{
	records = r;
}

void StructTypeDesc::afficher()
{
	std::cout << "Structrure: " << std::endl;
	for(int i = 0; i < records.size(); i++)
	{
		records[i].afficher();
		std::cout << std::endl;
	}
}

TableauTypeDesc::TableauTypeDesc(TypeDesc* s) : TypeDesc(5)
{
	secondaire = s->getType();
}

void TableauTypeDesc::afficher()
{
	std::cout << "Tableau de ";
	switch(secondaire)
	{
		case INT:
			std::cout << "Int";
			break;
		case REAL:
			std::cout << "Reel";
			break;
		case BOOLEAN:
			std::cout << "Boolean";
			break;
		case CHAR:
			std::cout << "Char";
			break;
		case STRING:
			std::cout << "String";
			break;
	}
}
