#include "point.h"
#include <iostream>
#include <cmath>

Point::Point(){
    x=0;y=0;z=0;
    nbrinstance++;
}

Point::Point(float a,float b, float c){
    x=a; y=b; z=c;
    nbrinstance++;
}

Point::Point(Point &p){
    x=p.x; y=p.y; z=p.z;
    nbrinstance++;
}

void Point::setPoint(float a,float b, float c){
    x=a; y=b; z=c;
}

float Point::getx(Point &p){
    return p.x;
}
float Point::gety(Point &p){
    return p.y;

}
float Point::getz(Point &p){
    return p.z;

}

void Point::saisieCoord(){
    std::cout << "\nSaisir x : ";
    std::cin >> x;
    std::cout << "\nSaisir y : ";
    std::cin >> y;
    std::cout << "\nSaisir z : ";
    std::cin >> z;
}

void Point::afficher(){
    std::cout << "\nx=";
    std::cout << x;
    std::cout << "\ny=";
    std::cout << y;
    std::cout << "\nz=";
    std::cout << z;
}

void Point::translater(float a, float b, float c){
    x+=a;y+=b;z+=c;
}

float Point::distance(Point &a, Point &b){
    return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y) + (a.z - b.z)*(a.z - b.z));
}



