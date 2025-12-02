#ifndef DYNAV_H
#define DYNAV_H
#include <iostream>
using namespace std;

template <class T> class DynaVector{
private:
    int taille;
    int nb;
    T* valeurs;
    void agrandirTab(){
        int nouvelleTaille = taille * 2 + 1;
        T* nouveauTab = new T[nouvelleTaille];
        for(int i = 0; i < nb; i++) {
            nouveauTab[i] = valeurs[i];
        }
        delete[] valeurs;
        valeurs = nouveauTab;
        taille = nouvelleTaille;
        cout << "Tableau redimensionné à " << taille << " éléments" << endl;
    }
public:
    ~DynaVector(){
        delete[] valeurs;
    }

    DynaVector(int t=0){
        taille=t;
        nb=0;
        valeurs = new T[taille];
    }
    void ajouterValeur(T v){
        if(nb>=taille-1){
            agrandirTab();
        }
        valeurs[nb] = v;
        nb++;
    } 
};







#endif
