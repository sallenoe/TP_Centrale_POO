#include "EnseignantVacataire.h"
#include <iostream>

EnseignantVacataire::EnseignantVacataire(std::string n, std::string p, std::string a, std::string t, int s, std::string c, int nbh, float tx) : Personnel(n,p,a,t,s){
    casier = c; nbreHeures = nbh; taux = tx; 
}

float EnseignantVacataire::calculSalaire(){
    return nbreHeures*taux;
}
void EnseignantVacataire::affiche(){
    std::cout << "Enseignant Vacataire : [" << std::endl;
    Personnel::affiche();
    std::cout << "Casier : " << casier << ", nbreHeures : " << nbreHeures << ", Taux : " << taux << std::endl;
    std::cout << "]" << std::endl;
}