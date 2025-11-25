#include "Vector.h"
#include <iostream>


int Vector::compteur=0;

Vector::Vector(int t){
    taille =t;
    tableau = new double[taille];
    compteur++;
}

Vector::~Vector(){
    delete[] tableau;
    compteur--;
}

Vector::Vector(double x){
    taille =1;
    tableau = new double[taille];
    tableau[0] = x;
    compteur++;
}

Vector::Vector(double x,double y){
    taille = 2;
    tableau = new double[taille];
    tableau[0] = x;
    tableau[1] = y;
    compteur++;
}

Vector::Vector(double x,double y,double z){
    taille = 3;
    tableau = new double[taille];
    tableau[0] = x;
    tableau[1] = y;
    tableau[2] = z;
    compteur++;
}

Vector::Vector(double x,double y,double z,double t){
    taille = 4;
    tableau = new double[taille];
    tableau[0] = x;
    tableau[1] = y;
    tableau[2] = z;
    tableau[3] = t;
    compteur++;
}

std::ostream& operator<< (std::ostream& out, Vector& v1){
    for(int i=0;i<v1.taille;i++){
        out << "Coord " << i << " = " << v1.tableau[i] << "\n";
    }
    return out;
}

Vector* operator+(Vector& v1, Vector& v2){
    if(v1.taille != v2.taille){
        std::cout << "Erreur de taille\n";
        return new Vector();
    }else{
        Vector* v = new Vector(v1.taille);
        for(int i=0;i<v1.taille;i++){
            v->tableau[i] = v1.tableau[i] + v2.tableau[i];
        }
        return v;
    }
}

Vector& operator=(Vector& v){
    Vector* v1 = new Vector(v.taille);
    for(int i=0;i<v.taille;i++){
        v1->tableau[i] = v.tableau[i];
    }
    return v1;
}


