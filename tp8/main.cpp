#include "Vector.h"
#include <iostream>

int main(){
    double x = 1.2;
    double y = 2.5;
    Vector v1 = Vector(x,y);

    x = 1.8;
    y = 0.5;
    Vector v2 = Vector(x,y);

    std::cout << v1.compteur << std::endl;
    std::cout << "Vector v1 :\n";
    std::cout << v1;
    std::cout << "Vector v2 :\n";
    std::cout << v2;

    Vector* v= v1+v2;
    std::cout << "Vector v1+v2 :\n";
    std::cout << *v;

    return 0;
}