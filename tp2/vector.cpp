#include "vector.h"
#include <iostream>
#include <cmath>

Vector::Vector(){
    dim=0;
    coord = nullptr;
    nbrinstance++;
}

Vector::Vector(int d,double* co){
    dim=d;
    coord=co;
    nbrinstance++;

}

Vector::Vector(Vector &v){
    dim=v.dim;
    coord=v.coord;
    nbrinstance++;
}

double Vector::getCoordinates(int d){
    return coord[d];
}

void Vector::setCooordinates(int d, double x){
    coord[d]=x;
}

void Vector::afficher(){
    for(int i=0;i<dim;i++){
        std::cout << "Coord " << i <<" : " << coord[i] << std::endl;
    }
}

double Vector::norme(){
    int temp = 0;
    for(int i=0;i<dim;i++){
        temp+= coord[i]*coord[i];
    }
    return sqrt(temp);
}