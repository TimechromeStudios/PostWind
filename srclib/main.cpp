#include <iostream> //Inclusion de la librairie standard
#include <cstdlib> //Inclusion de la librairie stdlib.h issue du C
#include <ctime> // Obligatoire
#include "Entity.h" //Inclusion de la classe Entity
#include "Item.h" //Inclusion de la classe Item
#include "Alive.h" //Inclusion de la classe Alive
#include "Arme.h" //Inclusion de la classe Arme
#include "Caracs.h" //Inclusion de la class Caracs
#include "Competences.h" //Inclusion de la class Competences
#include "CombatAlpha.h" //Inclusion du header avec le combat de la Alpha 1.0
#include "Dice.h"
#include <vector> //Inclusion de la librairie vector

using namespace std; //Utilisation du namespace standard

string const version = "de developpement"; //Version du programme, affichée plus bas
int entityId = 0; //Index d'entité, à incrémenter au fur et à mesure des créations d'entités
Alive personnage(0, 100, "Personnage", 0, 10, Caracs(), Competences());
Alive ennemi(1, 100, "Personnage", 0, 10, Caracs(), Competences());
//Alive ennemi;

int main() //Fonction principale
{
	srand(time(0));
	cout << "Bienvenue dans la version " << version << " de PostWind!" << endl; //Message de bienvenue
	cout << "Le jeu va commencer!" << endl; //Là, je pense que vous avez compris
	preparation(personnage, ennemi);
	fight(personnage, ennemi);
	return 0;
}
