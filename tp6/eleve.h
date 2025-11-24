#ifndef ELEVE_H
#define ELEVE_H
#include <string>
#include "personne.h"

class Eleve : public Personne{
    private : 
    std::string promotion;
    std::string groupeTD;
    float GPA;
    
    public :
    Eleve(std::string p, std::string n);
    void affiche();
    std::string getPromotion();
    std::string getGroupeTD();
    float getGPA();
    void setPromotion(std::string p);
    void setGroupeTD(std::string g);
    void setGPA(float f);
};



#endif