#ifndef NOEUDRDV_H
#define NOEUDRDV_H
#include "NoeudRDV.h"
#include "../tp4/rdv.h"

class NoeudRDV{
private :
    RDV rdv;
    NoeudRDV* suivant; 
public:
    NoeudRDV();
    NoeudRDV(RDV r, NoeudRDV* n);
    RDV getRdv();
    NoeudRDV* getSuivant();
    void setRdv(RDV r);
    void setSuivant(NoeudRDV* n);
};



#endif