#include "eleve.h"
#include <iostream>


Eleve::Eleve(std::string p, std::string n) : Personne(n, p)
{
    promotion = ""; groupeTD = ""; GPA=0.0;
}

void Eleve::affiche(){
    std::cout << "Eleve : [" << "Nom : " << Personne::getNom() << ", Prenom : "  << Personne::getPrenom() << ", Adresse : " << Personne::getAdresse() << ", Téléphone : " 
    << Personne::getTel() << ", Promotion : " << promotion << ", GroupeTD : " << groupeTD << ", GPA : " << GPA << "]" << std::endl;
}


std::string Eleve::getPromotion(){
    return promotion;
}

std::string Eleve::getGroupeTD(){
    return groupeTD;
}

float Eleve::getGPA(){
    return GPA;
}

void Eleve::setPromotion(std::string p){
    promotion = p;
}

void Eleve::setGroupeTD(std::string g){
    groupeTD = g;
}

void Eleve::setGPA(float gpa){
    GPA = gpa;
}