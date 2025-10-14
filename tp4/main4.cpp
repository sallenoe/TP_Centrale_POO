#include "date.h"
#include "heure.h"
#include <iostream>

int main(){
    /*int jour= 34 ; int mois=2; int annee = 2010;
    Date d = Date(jour,mois,annee);
    d.affiche();
    d.setAnnee(2002);
    d.affiche();
    std::cout << d.getAnnee() << std::endl;*/

    int heure=3;int minu = 45;
    Heure h = Heure(heure, minu);
    h.affiche();
    Heure h1 = Heure();
    h1.affiche();
    h1.setHeure(4);
    std::cout << h1.getHeure() << std::endl; 



    return 0;
}