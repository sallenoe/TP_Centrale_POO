#include "date.h"
#include <iostream>

int main(){
    int jour= 34 ; int mois=2; int annee = 2010;
    Date d = Date(jour,mois,annee);
    d.affiche();
    d.setAnnee(2002);
    d.affiche();
    std::cout << d.getAnnee() << std::endl;



    return 0;
}