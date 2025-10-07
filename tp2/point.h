#ifndef POINT_H
#define POINT_H
class Point {
private :
   float x ;
   float y ;
   float z ;

public :
    int nbrinstance;
    Point();
    Point(float a, float b , float c);
    Point(Point &p);
    void setPoint(float a, float b , float c);
    float getx(Point &p);
    float gety(Point &p);
    float getz(Point &p);
    void saisieCoord();
    void afficher();
    void translater(float a, float b, float c);
    float distance(Point &a, Point &b);
    int compterInstance();
};

#endif