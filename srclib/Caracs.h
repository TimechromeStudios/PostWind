#ifndef DEF_CARACS
#define DEF_CARACS
class Caracs //Définition de la classe Caracs, qui contient les caractéristiques des entités vivantes
{
protected:
	int intel; //Intelligence de l'entité
	int cha; //Charisme de l'entité
	int fo; //Force de l'entité
	int adr; //Adresse de l'entité
	int cou; //Courage de l'entité
public:
	Caracs(); //Constructeur par défaut, initialise toutes les caracs à 10
	Caracs(int p_moyenne); //Second constructeur
	Caracs(int p_intel, int p_cha, int p_fo, int p_adr, int p_cou); //Troisième constructeur
	int getInt(); //Renvoie le score d'intelligence
	int getCha(); //Renvoie le score de charisme
	int getFo(); //Renvoie le score de force
	int getAdr(); //Renvoie le score d'adresse
	int getCou(); //Renvoie le score de courage
	void setInt(int p_intel); //Définit le score d'intelligence
	void setCha(int p_cha); //Définit le score de charisme
	void setFo(int p_fo); //Définit le score de force
	void setAdr(int p_adr); //Définit de le score d'adresse
	void setCou(int p_cou); //Définit le score de courage
};
#endif
