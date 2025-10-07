#ifndef VECTOR_H
#define VECTOR_H
class Vector{
private:
    int dim;
    double* coord; 

public:
    int nbrinstance;
    Vector();
    Vector(int d, double* co);
    Vector(Vector &v);
    double getCoordinates(int d);
    void setCooordinates(int d, double x);
    void afficher();
    double norme();
};




#endif 