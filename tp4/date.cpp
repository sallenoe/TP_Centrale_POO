#include "date.h"
#include <iostream>

bool Date::checkDate(int j,int m, int a){
    return(1<=j && j<=31 && 1<=m && m<= 12 && 2000<=a && a<=2050);    
}

Date::Date(int j, int m, int a){
    if(checkDate(j,m,a)){
    jour=j; mois=m; annee= a;
    std::cout << "test1" << std::endl;
    }else {
        std::cout << "test2" << std::endl;
        jour=1;mois=1;annee=2000;
    } 
}

void Date::affiche(){
    std::cout << "jour : "<< jour << ", mois : " << mois << ", annee : " << annee<<std::endl;
}

int Date::getJour(){
    return jour; 
}
int Date::getMois(){
    return mois;
}
int Date::getAnnee(){
    return annee;
}

void Date::setJour(int j){
    jour=j;
}
void Date::setMois(int m){
    mois=m;
}
void Date::setAnnee(int a){
    annee=a;
}
