#ifndef DYNAV_H
#define DYNAV_H

template <class T> class DynaVector{
private:
    int size;
    T* valeurs;
    void agrandirTab();
public:
    ~DynaVector();
    DynaVector(int t=0);
    void ajouterValeur(T v); 
}







#endif
