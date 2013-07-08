#ifndef DEF_CARACS
#define DEF_CARACS
class Caracs //D�finition de la classe Caracs, qui contient les caract�ristiques des entit�s vivantes
{
protected:
	int intel; //Intelligence de l'entit�
	int cha; //Charisme de l'entit�
	int fo; //Force de l'entit�
	int adr; //Adresse de l'entit�
	int cou; //Courage de l'entit�
public:
	Caracs(); //Constructeur par d�faut, initialise toutes les caracs � 10
	Caracs(int p_moyenne); //Second constructeur
	Caracs(int p_intel, int p_cha, int p_fo, int p_adr, int p_cou); //Troisi�me constructeur
	int getInt(); //Renvoie le score d'intelligence
	int getCha(); //Renvoie le score de charisme
	int getFo(); //Renvoie le score de force
	int getAdr(); //Renvoie le score d'adresse
	int getCou(); //Renvoie le score de courage
	void setInt(int p_intel); //D�finit le score d'intelligence
	void setCha(int p_cha); //D�finit le score de charisme
	void setFo(int p_fo); //D�finit le score de force
	void setAdr(int p_adr); //D�finit de le score d'adresse
	void setCou(int p_cou); //D�finit le score de courage
};
#endif
