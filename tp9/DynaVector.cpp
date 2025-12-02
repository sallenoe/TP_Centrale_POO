#include "DynaVector.h"

DynaVector::DynaVector(int t){
    size=t;
    valeurs = new T*[size];
}

DynaVector::~DynaVector() {
    delete[] valeurs;
}