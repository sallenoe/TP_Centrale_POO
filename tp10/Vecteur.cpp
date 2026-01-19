#include "Vecteur.h"

Vecteur::Vecteur(int n){
    nombreElements = n;
    elements = new int[n];
}

int& Vecteur::operator[] (int n){
    if(n >= nombreElements|| n<0){
        throw n;
    }else{
        return elements[n];
    }
}

Vecteur::~Vecteur(){
    delete elements[];
}