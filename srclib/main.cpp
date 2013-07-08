#include <iostream> //Inclusion de la librairie standard
#include <cstdlib> //Inclusion de la librairie stdlib.h issue du C
#include "Entity.h" //Inclusion de la classe Entity
#include "Item.h" //Inclusion de la classe Item
#include "Alive.h" //Inclusion de la classe Alive
#include "Arme.h" //Inclusion de la classe Arme

using namespace std; //Utilisation du namespace standard

string version = "Pre-Alpha"; //Version du programme, affichée plus bas
int entityId = 0; //Index d'entité, à incrémenter au fur et à mesure des créations d'entités

int main() //Fonction principale
{
	cout << "Bienvenue dans la version " << version << " de PostWind!" << endl; //Message de bienvenue
	cout << "Le jeu va commencer!" << endl; //Là, je pense que vous avez compris
	return 0; //Fin du programme
}
