#include <iostream> //Inclusion de la librairie standard
#include <cstdlib> //Inclusion de la librairie stdlib.h issue du C
#include "Entity.h" //Inclusion de la classe Entity
#include "Item.h" //Inclusion de la classe Item
#include "Alive.h" //Inclusion de la classe Alive
#include "Arme.h" //Inclusion de la classe Arme
#include "Caracs.h" //Inclusion de la class Caracs
#include "Competences.h" //Inclusion de la class Competences
#include <vector> //Inclusion de la librairie vector

using namespace std; //Utilisation du namespace standard

string const version = "de developpement"; //Version du programme, affich�e plus bas
int entityId = 0; //Index d'entit�, � incr�menter au fur et � mesure des cr�ations d'entit�s

int main() //Fonction principale
{
	cout << "Bienvenue dans la version " << version << " de PostWind!" << endl; //Message de bienvenue
	cout << "Le jeu va commencer!" << endl; //L�, je pense que vous avez compris
	return 0;
}
