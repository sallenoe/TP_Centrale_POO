#ifndef PERSONNELADMIN_H
#define PERSONNELADMIN_H
#include <string>
#include "personnel.h"

class Personneladmin : public Personnel{
    private :
    int heuresSup;
    float taux;

    public :
    Personneladmin(std::string n, std::string p, std::string a = "", std::string t = "", int s=0, int heuresSup=0, float taux=0.0);
    virtual float calculSalaire();
    void affiche();
};

#endif