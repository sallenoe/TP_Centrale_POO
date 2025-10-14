#ifndef HEURE_H
#define HEURE_H

class Heure{
private:
    int heure;
    int minute;

public:
    Heure();
    Heure(int h, int m);
    void affiche();
    void setHeure(int h);
    void setMinute(int m);
    int getHeure();
    int getMinute();

};


#endif