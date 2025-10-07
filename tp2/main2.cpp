#include "vector.h"
#include <iostream>

int main(){
    double* co = new double[2];
    co[0] = 1;
    co[1] = 2;
    Vector v = Vector(2,co);
    v.afficher();
    v.setCooordinates(1,1);
    v.afficher();
    std::cout << "Norme v1 : " << v.norme() << std::endl;

    double* co2 = new double[2];
    co2[0] = 1; co2[1] = 1;
    Vector v2 = Vector(2,co2);
    std::cout << v.egalvecteur(v2) << std::endl;
    std::cout << "Nombre de vecteurs : " << v.getNbrInstance() << std::endl;
    return 0;
}