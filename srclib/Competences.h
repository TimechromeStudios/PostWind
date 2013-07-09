#ifndef DEF_COMPETENCES
#define DEF_COMPETENCES  //Ne pas faire deux d�finitions de classe

class Competences //D�claration de la classe Comp�tences
{
protected:
    int cacAttack;  //comp�tence d'attaque au corps � corps
    int distanceAttack;  //comp�tence d'attaque � distance
    int escalade;  //comp�tence d'escalade
    int piratage;  //comp�tence de piratage
    int discretion;  //comp�tence de discr�tion
    int parade;  //comp�tence de parade
    int informatique;  //comp�tences en informatique
    int arnaque;  //comp�tence � arnaquer
    int artificerie;  //comp�tences en artificerie;
    int mecanique;  //comp�tences en m�canique
    int electronique;  //comp�tences en �lectronique
    int physique;  //comp�tences en physique
    int biologie;  //comp�tences en biologie

public:
    Competences(int p_cacAttack, int p_distanceAttack, int p_escalade, int p_piratage, int p_discretion, int p_parade, int p_informatique, int p_arnaque, int p_artificerie, int p_mecanique, int p_electronique, int p_physique, int p_biologie);
    /**************************************************
    *p_cacAttack: comp�tence d'attaque                *
    *p_distanceAttack:comp�tence d'attaque � distance *
    *p_escalade: comp�tence d'escalade                *
    *p_piratage: comp�tence de piratage               *
    *p_discretion: comp�tence de discr�tion           *
    *p_parade: comp�tence de parade                   *
    *p_informatique: comp�tences en informatique      *
    *p_arnaque: comp�tence � arnaquer                 *
    *p_artificerie: comp�tences en artificerie        *
    *p_mecanique: comp�tences en m�canique            *
    *p_electronique: comp�tences en �lectronique      *
    *p_physique: comp�tences en physique              *
    *p_biologie: comp�tences en biologie              *
    **************************************************/
    int getCacAttack();  //Renvoie les points de comp�tence pour l'attaque au corps � corps
    int getDistanceAttack();  //Renvoie les points de comp�tence pour l'attaque � distance
    int getEscalade();  //Renvoie les points de comp�tence pour l'escalade
    int getPiratage();  //Renvoie les points de comp�tence pour le piratage
    int getDiscretion();  //Renvoie les points de comp�tence pour la discr�tion
    int getParade();  //Renvoie les points de comp�tence pour la parade
    int getInformatique();  //Renvoie les points de comp�tence pour l'informatique
    int getArnaque();  //Renvoie les points de comp�tence pour l'arnaque
    int getArtificerie();  //Renvoie les points de comp�tence pour l'artificerie
    int getMecanique();  //Renvoie les points de comp�tence pour la m�canique
    int getElectronique();  //Renvoie les points de comp�tence pour l'�lectronique
    int getPhysique();  //Renvoie les points de comp�tence pour la physique
    int getBiologie();  //Renvoie les points de comp�tence pour la biologie
    void setCacAttack(int p_cacAttack);  //Fait une d�finition des points de comp�tence pour l'attaque au corps � corps
    void setDistanceAttack(int p_distanceAttack);  //Fait une d�finition des points de comp�tence pour l'attaque � distance
    void setEscalade (int p_escalade);  //Fait une d�finition des points de comp�tence pour l'escalade
    void setPiratage (int p_piratage);  //Fait une d�finition des points de comp�tence pour le piratage
    void setDiscretion (int p_discretion);  //Fait une d�finition des points de comp�tence pour la discr�tion
    void setParade (int p_parade);  //Fait une d�finition des points de comp�tence pour la parade
    void setInformatique (int p_informatique);  //Fait une d�finition des points de comp�tence pour l'informatique
    void setArnaque (int p_arnaque);  //Fait une d�finition des points de comp�tence pour l'arnaque
    void setArtificerie (int p_artificerie);  //Fait une d�finition des points de comp�tence pour l'artificerie
    void setMecanique (int p_mecanique);  //Fait une d�finition des points de comp�tence pour la m�canique
    void setElectronique (int p_electronique);  //Fait une d�finition des points de comp�tence pour l'�lectronique
    void setPhysique (int p_physique);  //Fait une d�finition des points de comp�tence pour la physique
    void setBiologie (int p_biologie);  //Fait une d�finition des points de comp�tence pour la biologie
};

#endif
