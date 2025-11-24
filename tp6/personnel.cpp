#include "personnel.h"
#include <iostream>

Personnel::Personnel(std::string n, std::string p, std::string a , std::string t , int s) : Personne(n,p,a,t){
    salaire = s;
}

void Personnel::affiche(){
    Personne::affiche();
    std::cout << "Salaire : " << getSalaire() << std::endl;
}

void Personnel::setSalaire(float s){
    salaire = s;
}

float Personnel::getSalaire(){
    return salaire;
}