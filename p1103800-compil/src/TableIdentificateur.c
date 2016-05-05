#include "../include/TableIdentificateur.h"

#include <iostream>

#include <fstream>

#include <string.h>

using namespace std;

/*

ajout d’un identificateur a la table

renvoie le numero unique associe

si l’identificateur est deja present, ne fait que renvoyer son numero

*/

unsigned int TableIdentificateur::ajoutIdentificateur(string ident){

	for(int i = 0; i < TI.size(); i++)

	{

		if(TI[i].compare(ident) == 0) return i+1;

	}

	TI.push_back(ident);

	return TI.size();

}

/*

recupere le nom associe a un numero unique

*/

string TableIdentificateur::getNom(const unsigned int id){

	return TI[id-1];

}

/*

affiche la table sur la sortie standard

*/

void TableIdentificateur::afficherTableIdent(){

	for(int i = 0; i < TI.size(); i++)

	{

		cout << TI[i] << ":" << i+1 << endl;

	}

}

/*

sauvegarde la table dans un fichier

le nom du fichier est passe en argument

*/

void TableIdentificateur::sauvegarderTableIdent(const char* file){

	ofstream flux(file);

	if(flux)

	{

		for(int i = 0; i < TI.size(); i++)

		{

			flux << TI[i] << ":" << i+1 << endl;

		}

	}

	else

	{

		cout << "Erreur: fichier introuvable" << endl;

	}

	flux.close();

}

