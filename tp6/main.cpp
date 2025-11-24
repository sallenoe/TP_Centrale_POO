#include "personne.h"
#include "eleve.h"
#include "personnel.h"
#include "personneladmin.h"
#include "EnseignantPermanent.h"
#include "EnseignantVacataire.h"
#include <iostream>

int main(){
    Personne pers1 = Personne("Benazha","Hamed");
    pers1.affiche();

    Eleve e1 = Eleve(pers1.getPrenom(), pers1.getNom());
    e1.setPromotion("2016");
    e1.setGPA(1.2);
    e1.setGroupeTD("2");
    e1.affiche();

    Personneladmin p1 = Personneladmin(pers1.getPrenom(), pers1.getNom(), "13 rue du Poireau", "3630", 1200, 5, 15.0);
    p1.affiche();

    EnseignantPermanent ensp1 = EnseignantPermanent("Jean","Paul","Marseille","0791",1600,"bureau3",5,15.2);
    ensp1.affiche();

    EnseignantVacataire ensv1 = EnseignantVacataire("Benazha", "Hamed", "Marseille", "0386", 0, "casier 14", 10, 20);
    ensv1.affiche();
    return 0;
}