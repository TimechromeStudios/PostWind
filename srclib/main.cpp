#include <iostream> //Inclusion de la librairie standard
#include <cstdlib> //Inclusion de la librairie stdlib.h issue du C
#include "Entity.h" //Inclusion de la classe Entity
#include "Item.h" //Inclusion de la classe Item
#include "Alive.h" //Inclusion de la classe Alive
#include "Arme.h" //Inclusion de la classe Arme
#include "libdlc.h" //Inclusion du ModSystem
#include <vector> //Inclusion de la librairie vector
#include <fstream> //Inclusion de la librairie fstream

using namespace std; //Utilisation du namespace standard

string version = "Pre-Alpha + ModSystem"; //Version du programme, affich�e plus bas
int entityId = 0; //Index d'entit�, � incr�menter au fur et � mesure des cr�ations d'entit�s

<<<<<<< Updated upstream
int main() //Fonction principale
{
	cout << "Bienvenue dans la version " << version << " de PostWind!" << endl; //Message de bienvenue
	cout << "Le jeu va commencer!" << endl; //L�, je pense que vous avez compris
	return 0; //Fin du programme
=======
int main() //Fonction principal
	cout << "Bienvenue dans la version " << version << " de PostWind!" << endl; //Message de bienvenue
	cout << "Le jeu va commencer!" << endl; //L�, je pense que vous avez compris
	/*ifstream addonsList("addonsList.cfg");
	DLCLibrary *addon;
	if(addonsList)
	{
		string nomFichier;
		function_type theFunction;
		while(getline(addonsList, nomFichier))
		{
			addon = new DLCLibrary(nomFichier);
			theFunction = *addon.getFunction<function_type>("start");
			theFunction();
			delete *addon;
		}
	}*/
	return 0;
>>>>>>> Stashed changes
}
