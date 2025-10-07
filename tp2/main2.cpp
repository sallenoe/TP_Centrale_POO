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
    return 0;
}