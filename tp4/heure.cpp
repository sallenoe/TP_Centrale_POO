#include "heure.h"
#include <iostream>

Heure::Heure(){
    heure=0;
    minute=0;
}

Heure::Heure(int h, int m){
    heure=h;
    minute=m;
}

void Heure::affiche(){
    std::cout << "heure : " << heure << ", minute : " << minute << std::endl;
}

void Heure::setHeure(int h){
    heure = h;
}

void Heure::setMinute(int m){
    minute = m;
}

int Heure::getHeure(){
    return heure;
}
int Heure::getMinute(){
    return minute;
}