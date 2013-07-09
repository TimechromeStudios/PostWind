#ifndef DEF_COMPETENCES
#define DEF_COMPETENCES  //Ne pas faire deux définitions de classe

class Competences //Déclaration de la classe Compétences
{
protected:
    int cacAttack;  //compétence d'attaque au corps à corps
    int distanceAttack;  //compétence d'attaque à distance
    int escalade;  //compétence d'escalade
    int piratage;  //compétence de piratage
    int discretion;  //compétence de discrétion
    int parade;  //compétence de parade
    int informatique;  //compétences en informatique
    int arnaque;  //compétence à arnaquer
    int artificerie;  //compétences en artificerie;
    int mecanique;  //compétences en mécanique
    int electronique;  //compétences en électronique
    int physique;  //compétences en physique
    int biologie;  //compétences en biologie

public:
    Competences(int p_cacAttack, int p_distanceAttack, int p_escalade, int p_piratage, int p_discretion, int p_parade, int p_informatique, int p_arnaque, int p_artificerie, int p_mecanique, int p_electronique, int p_physique, int p_biologie);
    /**************************************************
    *p_cacAttack: compétence d'attaque                *
    *p_distanceAttack:compétence d'attaque à distance *
    *p_escalade: compétence d'escalade                *
    *p_piratage: compétence de piratage               *
    *p_discretion: compétence de discrétion           *
    *p_parade: compétence de parade                   *
    *p_informatique: compétences en informatique      *
    *p_arnaque: compétence à arnaquer                 *
    *p_artificerie: compétences en artificerie        *
    *p_mecanique: compétences en mécanique            *
    *p_electronique: compétences en électronique      *
    *p_physique: compétences en physique              *
    *p_biologie: compétences en biologie              *
    **************************************************/
    int getCacAttack();  //Renvoie les points de compétence pour l'attaque au corps à corps
    int getDistanceAttack();  //Renvoie les points de compétence pour l'attaque à distance
    int getEscalade();  //Renvoie les points de compétence pour l'escalade
    int getPiratage();  //Renvoie les points de compétence pour le piratage
    int getDiscretion();  //Renvoie les points de compétence pour la discrétion
    int getParade();  //Renvoie les points de compétence pour la parade
    int getInformatique();  //Renvoie les points de compétence pour l'informatique
    int getArnaque();  //Renvoie les points de compétence pour l'arnaque
    int getArtificerie();  //Renvoie les points de compétence pour l'artificerie
    int getMecanique();  //Renvoie les points de compétence pour la mécanique
    int getElectronique();  //Renvoie les points de compétence pour l'électronique
    int getPhysique();  //Renvoie les points de compétence pour la physique
    int getBiologie();  //Renvoie les points de compétence pour la biologie
    void setCacAttack(int p_cacAttack);  //Fait une définition des points de compétence pour l'attaque au corps à corps
    void setDistanceAttack(int p_distanceAttack);  //Fait une définition des points de compétence pour l'attaque à distance
    void setEscalade (int p_escalade);  //Fait une définition des points de compétence pour l'escalade
    void setPiratage (int p_piratage);  //Fait une définition des points de compétence pour le piratage
    void setDiscretion (int p_discretion);  //Fait une définition des points de compétence pour la discrétion
    void setParade (int p_parade);  //Fait une définition des points de compétence pour la parade
    void setInformatique (int p_informatique);  //Fait une définition des points de compétence pour l'informatique
    void setArnaque (int p_arnaque);  //Fait une définition des points de compétence pour l'arnaque
    void setArtificerie (int p_artificerie);  //Fait une définition des points de compétence pour l'artificerie
    void setMecanique (int p_mecanique);  //Fait une définition des points de compétence pour la mécanique
    void setElectronique (int p_electronique);  //Fait une définition des points de compétence pour l'électronique
    void setPhysique (int p_physique);  //Fait une définition des points de compétence pour la physique
    void setBiologie (int p_biologie);  //Fait une définition des points de compétence pour la biologie
};

#endif
