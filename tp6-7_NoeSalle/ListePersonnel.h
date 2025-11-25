#ifndef LISTEPERSO_H
#define LISTEPERSO_H 

#include <string>
#include "personnel.h"

class ListePersonnel{
    private :
    int nb;
    Personnel* tab[100];

    public :
    ListePersonnel(int n=0);
    void ajoutPersonnel(Personnel* ptPersonnel);
    void afficherSalaires();
};




#endif 