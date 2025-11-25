#ifndef LISTEPERSODYNA_H
#define LISTEPERSODYNA_H 

#include <string>
#include "personnel.h"

class ListePersonnelDyna{
    private :
    int nb;
    Personnel** tab;
    int taille;

    public :
    ListePersonnelDyna(int n=0, int taille=100);
    ~ListePersonnelDyna();
    void ajoutPersonnel(Personnel* ptPersonnel);
    void afficherSalaires();
    void doubleTableau();
    void ajoutPersonnelRedim(Personnel * ptPersonnel);
};




#endif 