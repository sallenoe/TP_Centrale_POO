#include "personne.h"
#include "eleve.h"
#include "personnel.h"
#include "personneladmin.h"
#include "EnseignantPermanent.h"
#include "EnseignantVacataire.h"
#include <iostream>
#include "ListePersonnel.h"
#include "ListePersonnelDyna.h"


int main(){
    std::cout << "\nTest Classe Personne" << std::endl;
    Personne pers1 = Personne("Benazha","Hamed");
    pers1.affiche();

    std::cout << "\nTest Classe Eleve" << std::endl;
    Eleve e1 = Eleve(pers1.getPrenom(), pers1.getNom());
    e1.setPromotion("2016");
    e1.setGPA(1.2);
    e1.setGroupeTD("2");
    e1.affiche();

    std::cout << "\nTest Classe Personnel Admin" << std::endl;
    Personneladmin p1 = Personneladmin(pers1.getNom(), pers1.getPrenom(), "13 rue du Poireau", "3630", 1200, 5, 15.0);
    p1.affiche();
    std::cout << p1.calculSalaire() << std::endl;

    std::cout << "\nTest Classe Enseignant Permanent" << std::endl;
    EnseignantPermanent ensp1 = EnseignantPermanent("Jean","Paul","Marseille","0791",1600,"bureau3",5,100);
    ensp1.affiche();
    std::cout << ensp1.calculSalaire() << std::endl;

    std::cout << "\nTest Classe Enseignant Vacataire" << std::endl;
    EnseignantVacataire ensv1 = EnseignantVacataire("Mammar", "Aksil", "Marseille", "0386", 0, "casier 14", 10, 20);
    ensv1.affiche();
    std::cout << ensv1.calculSalaire() << std::endl;

    std::cout << "\nTest Classe Liste Personnel" << std::endl;
    ListePersonnel liste1 = ListePersonnel();
    liste1.ajoutPersonnel(&p1);
    liste1.ajoutPersonnel(&ensp1);
    liste1.ajoutPersonnel(&ensv1);
    liste1.afficherSalaires();

    std::cout << "\nTest Classe Liste Personnel Dynamique" << std::endl;
    ListePersonnelDyna liste2 = ListePersonnelDyna(0,2);
    liste2.ajoutPersonnelRedim(&p1);
    liste2.ajoutPersonnelRedim(&ensp1);
    liste2.ajoutPersonnelRedim(&ensv1); // On obtient bien un redimensionnement ici, car on ajoute un 3e élément dans un tableau de taille initiale 2. 
    liste2.afficherSalaires();

    /* Pas de différence ici car la méthode calculSalaire était virtuelle depuis le début */

    return 0;
}

/* L'allocation dynamique à l'aide de pointeur nous permet de choisir une taille de liste, et d'agrandir cette liste si on dépasse la taille initiale. */