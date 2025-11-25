#ifndef EnseignantPermanent_H
#define EnseignantPermanent_H
#include <string>
#include "personnel.h"

class EnseignantPermanent : public Personnel{
    private :
    std::string bureau;
    int grade;
    float primeMensuelle;

    public :
    EnseignantPermanent(std::string n, std::string p, std::string a = "", std::string t = "", int s=0, std::string b="", int g=0, float prime=0.0);
    virtual float calculSalaire();
    void affiche();
};

#endif