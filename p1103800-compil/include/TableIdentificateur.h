#include <vector>
#include <string>

//peytavie

class TableIdentificateur{

private:

	std::vector<std::string> TI;

/*

ajout d’un identificateur a la table

renvoie le numero unique associe

si l’identificateur est deja present, ne fait que renvoyer son numero

*/

public:

	unsigned int ajoutIdentificateur(std::string ident);

/*

recupere le nom associe a un numero unique

*/

	std::string getNom(const unsigned int id);

/*

affiche la table sur la sortie standard

*/

	void afficherTableIdent();

/*

sauvegarde la table dans un fichier

le nom du fichier est passe en argument

*/

	void sauvegarderTableIdent(const char* file);

};

