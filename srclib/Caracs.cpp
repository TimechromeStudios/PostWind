#include "Caracs.h"

Caracs::Caracs()
{
    intel = 10;
    cha = 10;
    fo = 10;
    adr = 10;
    cou = 10;
    con = 10;
}
Caracs::Caracs(int p_moyenne)
{
    intel = p_moyenne;
    cha = p_moyenne;
    fo = p_moyenne;
    adr = p_moyenne;
    cou = p_moyenne;
    con = p_moyenne;
}
Caracs::Caracs(int p_intel, int p_cha, int p_fo, int p_adr, int p_cou, int p_con)
{
    intel = p_intel;
    cha = p_cha;
    fo = p_fo;
    adr = p_adr;
    cou = p_cou;
    con = p_con;
}
int Caracs::getInt()
{
    return intel;
}
int Caracs::getCha()
{
    return cha;
}
int Caracs::getFo()
{
    return fo;
}
int Caracs::getAdr()
{
    return adr;
}
int Caracs::getCou()
{
    return cou;
}
int Caracs::getCon()
{
    return con;
}
void Caracs::setInt(int p_intel)
{
    intel = p_intel;
}
void Caracs::setCha(int p_cha)
{
    cha = p_cha;
}
void Caracs::setFo(int p_fo)
{
    fo = p_fo;
}
void Caracs::setAdr(int p_adr)
{
    adr = p_adr;
}
void Caracs::setCou(int p_cou)
{
    cou = p_cou;
}
void Caracs::setCon(int p_con)
{
    con = p_con;
}
