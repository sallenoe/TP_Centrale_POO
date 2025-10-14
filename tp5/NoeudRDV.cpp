#include "NoeudRDV.h"
#include <iostream>

NoeudRDV::NoeudRDV(){
    rdv = RDV();
    suivant = nullptr;
}

NoeudRDV::NoeudRDV(RDV r, NoeudRDV* n){
    rdv = r;
    suivant = n;
}

RDV NoeudRDV::getRdv(){
    return rdv;
}

NoeudRDV* NoeudRDV::getSuivant(){
    return suivant;
}

void NoeudRDV::setRdv(RDV r){
    rdv =r;
}
void NoeudRDV::setSuivant(NoeudRDV* n){
    suivant = n;
}