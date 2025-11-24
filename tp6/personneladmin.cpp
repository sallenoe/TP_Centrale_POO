#include "personneladmin.h"
#include <iostream>

Personneladmin::Personneladmin(std::string n, std::string p, std::string a, std::string t, int s, int heure, float tax) : Personnel(n,p,a,t,s){
    heuresSup = heure; taux = tax;
}

float Personneladmin::calculSalaire(){
    return Personnel::getSalaire() + taux*heuresSup; 
}

void Personneladmin::affiche(){
    std::cout << "Personnel Admin : [" << std::endl;
    Personnel::affiche();
    std::cout << "HeuresSup : " << heuresSup << ", Taux : " << taux << ", Salaire : " << getSalaire() << ", Calcul salaire : " << Personneladmin::calculSalaire() << std::endl; 
    std::cout << "]" << std::endl;
}