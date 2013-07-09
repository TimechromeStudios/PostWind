#include <iostream>
#include <string>
#include "Competences.h"

Competences::Competences(int p_cacAttack, int p_distanceAttack, int p_escalade, int p_piratage, int p_discretion, int p_parade, int p_informatique, int p_arnaque, int p_artificerie, int p_mecanique, int p_electronique, int p_physique, int p_biologie)
{
    cacAttack = p_cacAttack;
    distanceAttack = p_distanceAttack;
    escalade = p_escalade;
    piratage = p_piratage;
    discretion = p_discretion;
    parade = p_parade;
    informatique = p_informatique;
    arnaque = p_arnaque;
    artificerie = p_artificerie;
    mecanique = p_mecanique;
    electronique = p_electronique;
    physique = p_physique;
    biologie = p_biologie;
}

int Competences::getCacAttack()
{
    return cacAttack;
}

int Competences::getDistanceAttack()
{
    return distanceAttack;
}

int Competences::getEscalade()
{
    return escalade;
}

int Competences::getPiratage()
{
    return piratage;
}

int Competences::getDiscretion()
{
    return discretion;
}

int Competences::getParade()
{
    return parade;
}

int Competences::getInformatique()
{
    return informatique;
}

int Competences::getArtificerie()
{
    return artificerie;
}

int Competences::getMecanique()
{
    return mecanique;
}

int Competences::getElectronique()
{
    return electronique;
}

int Competences::getPhysique()
{
    return physique;
}

int Competences::getBiologie()
{
    return biologie;
}

void Competences::setCacAttack(int p_cacAttack)
{
    cacAttack = p_cacAttack;
}

void Competences::setDistanceAttack(int p_distanceAttack)
{
    distanceAttack = p_distanceAttack;
}

void Competences::setEscalade(int p_escalade)
{
    escalade = p_escalade;
}

void Competences::setPiratage(int p_piratage)
{
    piratage = p_piratage;
}

void Competences::setDiscretion(int p_discretion)
{
    discretion = p_discretion;
}

void Competences::setParade(int p_parade)
{
    parade = p_parade;
}

void Competences::setInformatique(int p_informatique)
{
    informatique = p_informatique;
}

void Competences::setArnaque(int p_arnaque)
{
    arnaque = p_arnaque;
}

void Competences::setArtificerie(int p_artificerie)
{
    artificerie = p_artificerie;
}

void Competences::setMecanique(int p_mecanique)
{
    mecanique = p_mecanique;
}

void Competences::setElectronique(int p_electronique)
{
    electronique = p_electronique;
}

void Competences::setPhysique(int p_physique)
{
    physique = p_physique;
}

void Competences::setBiologie(int p_biologie)
{
    biologie = p_biologie;
}
