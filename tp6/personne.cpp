#include "personne.h"
#include <iostream>


Personne::Personne(std::string n, std::string p, std::string a , std::string t ){
    nom=n ; prenom=p ; adresse=a ; telephone=t;
}

void Personne::affiche(){
    std::cout << "Nom : " << nom << ", Prenom : "  << prenom << ", Adresse : " << adresse << ", Téléphone : " << telephone << std::endl;
}

std::string Personne::getNom(){
    return nom;
}
std::string Personne::getPrenom(){
    return prenom;
}
std::string Personne::getAdresse(){
    return adresse;
}
std::string Personne::getTel(){
    return telephone;
}
void Personne::setNom(std::string a){
    nom = a;
}
void Personne::setPrenom(std::string a){
    prenom = a;
}
void Personne::setAdresse(std::string a){
    adresse = a;
}
void Personne::setTel(std::string a){
    telephone = a;
}