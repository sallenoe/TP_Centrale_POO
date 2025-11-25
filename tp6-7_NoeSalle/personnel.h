#ifndef PERSONNEL_H
#define PERSONNEL_H
#include <string>
#include "personne.h"

class Personnel : public Personne{
    private: 
    float salaire;

    public :
    Personnel(std::string n, std::string p, std::string a = "", std::string t = "", int s=0);
    virtual float calculSalaire() = 0;
    float getSalaire();
    void setSalaire(float s);
    void affiche();
};

#endif