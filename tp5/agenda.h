#ifndef AGENDA_H
#define AGENDA_H

class Agenda{
private :
    NoeudRDV* premier;
public :
    Agenda();
    Agenda(Agenda& a);
    ~Agenda();
    void ajoute(RDV r);
    void enleve();
    void affiche();
    
};




#endif