#include "EnseignantPermanent.h"
#include <iostream>

EnseignantPermanent::EnseignantPermanent(std::string n, std::string p, std::string a, std::string t, int s, std::string b, int g, float prime) : Personnel(n,p,a,t,s){
    bureau = b; grade = g; primeMensuelle = prime;
}

float EnseignantPermanent::calculSalaire(){
    return Personnel::getSalaire() + (grade * primeMensuelle) / 100;
}
void EnseignantPermanent::affiche(){
    std::cout << "Enseignant Permanent : [" << std::endl;
    Personnel::affiche();
    std::cout << "Bureau : " << bureau << ", Grade : " << grade << ", PrimeMensuelle : " << primeMensuelle << std::endl;
    std::cout << "]" << std::endl;
}