#ifndef RDV_H
#define RDV_H

#include "date.h"
#include "heure.h"
#include <string>

class RDV{
private:
    Date date;
    Heure heure;
    std::string lieu;
    int nbParti;
    std::string* listeParti;

public:
    RDV();
    void affiche();
    void saisieParti();
    void saisieLieu();
    void saisieHeure();
    void saisieDate();
    void saisie();
    void setDate(Date& dateRdv);
    void setHeure(Heure& heureRdv);
    void setLieu(std::string& lieuRdv);
    void setNbParti(int nombreDeParticipants);
    void setParticipants(std::string* ps);
    void setParticipant(int i, std::string s);
    bool estCompatibleAvec(RDV r);
    Heure getHeure();
    Date getDate();

};





#endif