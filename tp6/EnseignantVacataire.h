#ifndef EnseignantVacataire_H
#define EnseignantVacataire_H
#include <string>
#include "personnel.h"

class EnseignantVacataire : public Personnel{
    private :
    std::string casier;
    int nbreHeures;
    float taux;

    public :
    EnseignantVacataire(std::string n, std::string p, std::string a = "", std::string t = "", int s=0, std::string c="", int nbh=0, float taux=0.0);
    virtual float calculSalaire();
    void affiche();
};

#endif