#include "ListePersonnelDyna.h"
#include <iostream>
#include <stdlib.h>

ListePersonnelDyna::ListePersonnelDyna(int n, int t){
    nb=n;
    tab = new Personnel*[t];
    taille = t;
}

ListePersonnelDyna::~ListePersonnelDyna() {
    delete[] tab;
}

void ListePersonnelDyna::ajoutPersonnel(Personnel* ptPersonnel){
    if(nb>=taille){
        std::cout << "Ajout refusé, liste pleine." << std::endl;
    }else{
        tab[nb] = ptPersonnel;
        nb++;
    }
}


void ListePersonnelDyna::afficherSalaires(){
    for(int i=0;i<nb;i++){
        std::cout << "Prénom : " << tab[i]->getPrenom() << ", Nom : " << tab[i]->getNom() << ", Salaire : " << tab[i]->calculSalaire() << std::endl;
    }
}

void ListePersonnelDyna::doubleTableau() {
    int nouvelleTaille = taille * 2;
    Personnel** nouveauTab = new Personnel*[nouvelleTaille];
    for(int i = 0; i < nb; i++) {
        nouveauTab[i] = tab[i];
    }
    delete[] tab;
    tab = nouveauTab;
    taille = nouvelleTaille;
    std::cout << "Tableau redimensionné à " << taille << " éléments" << std::endl;
}

void ListePersonnelDyna::ajoutPersonnelRedim(Personnel * ptPersonnel){
    if(nb>=taille){
        doubleTableau();      
    }        
    tab[nb] = ptPersonnel;
    nb++;
}