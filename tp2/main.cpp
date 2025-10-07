#include "point.h"

int main(){
    Point p = Point();
    p.setPoint(1,2,3);
    p.afficher();
    Point p1 = Point();
    p1.saisieCoord();
    p1.afficher();
    p1.translater(1,2,3);
    p1.afficher();
    return 0;
}