#include <iostream>
#include <algorithm>
using namespace std;
#include <string.h>

//Enonce
template < class T , class U > void fct ( T a , U b ) {
    cout << " je suis la fonction 1 " << endl ;
}

template < class T , class U > void fct ( T * a , U b ) {
    cout << " je suis la fonction 2 " << endl ;
}

template < class T > void fct (T , T , T ) {
    cout << " je suis la fonction 3 " << endl ;
}

void fct ( int a , float b ) {
    cout << " Je suis la fonction 4 " << endl ;
}

//Somme
template <class T> T somme(T* tab, int size){
    T res = T(0);
    for(int i=0; i<size; i++){
        res += tab[i];
    }
    return res;
}

template <class T> int minimum(T* t, int size){
    T minimum = t[0];
    int indiceMinimum = 0;
    for(int i=0; i<size; i++){
        if(minimum > t[i]){
            minimum = t[i];
            indiceMinimum = i;
        }
    }
    return indiceMinimum;
}

typedef struct test{
    int numTableau;
    int indice;
} test;

template <class T, class U> test minimum(T* t, U* u, int size){
    int min1 = minimum(t,size);
    int min2 = minimum(u,size);
    if(t[min1] < u[min2]){
        test res = {0, min1};
    }
    test res = {1, min2};    
    return res; 
}


int main () {
    /*
    int n =0 , p =0 , q =0;
    float x =0.0 , y =0.0;
    double z =0.0;                              // question 1
    cout << " fct (n , p ) ; " ;
    fct (n , p ) ;
    cout << " fct (x , y ) ; " ;
    fct (x , y ) ;
    cout << " fct (n , x ) ; " ;
    fct (n , x ) ;
    cout << " fct (n , z ) ; " ;
    fct (n , z ) ;
    cout << " fct (& n , p ) ; " ;
    fct (& n , p ) ;
    cout << " fct (& n , x ) ; " ;
    fct (& n , x ) ;
    cout << " fct (& n , &p , & q ) ; " ;
    fct (& n , &p , & q ) ;
    */
    int tab[] = {5,2,3};
    cout << "Somme tableau [5,2,3] : " << somme(tab,3) << endl;
    cout << "Minimum : " << minimum(tab, 3) << endl;

    float tab1[] = {-2.1,3.2,-1.1};
    cout << "Somme tableau 1 [-2.1,3.2,-1.1] : " << somme(tab1,3) << endl;

    char tab2[] = {'k','h','a','l','i','l'};
    cout << "Somme tableau 2 ['k','h','a','l','i','l'] : " << somme(tab2,6) << endl;

    test res = minimum(tab, tab1, 3);
    cout << "Minimum tab et tab 1 : " << "tableau " << res.numTableau << ", indice : " << res.indice << endl;

    return 0;
}