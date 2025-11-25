#include "ListePersonnel.h"
#include <iostream>


ListePersonnel::ListePersonnel(int n){
    nb=n; 
}


void ListePersonnel::ajoutPersonnel(Personnel* ptPersonnel){
    if(nb>=100){
        std::cout << "Ajout refusé, liste pleine." << std::endl;
    }else{
        tab[nb] = ptPersonnel;
        nb++;
    }
}


void ListePersonnel::afficherSalaires(){
    for(int i=0;i<nb;i++){
        std::cout << "Prénom : " << tab[i]->getPrenom() << ", Nom : " << tab[i]->getNom() << ", Salaire : " << tab[i]->calculSalaire() << std::endl;
    }
}
