#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector{
    private:
    int taille;
    double* tableau;

    public:
    static int compteur;
    Vector(int taille=0);
    ~Vector();
    Vector(double x);
    Vector(double x,double y);
    Vector(double x,double y,double z);
    Vector(double x,double y,double z,double t);

    friend std::ostream& operator<< (std::ostream& out, Vector& v1);
    friend Vector* operator + (Vector& v1, Vector& v2);
    friend Vector* operator = (Vector& v);
};





#endif
