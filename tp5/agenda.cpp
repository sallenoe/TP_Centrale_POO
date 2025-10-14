#include "agenda.h"

Agenda::Agenda(){
    premier=nullptr;
}

Agenda::Agenda(Agenda& a){
    premier = a.premier;
}

~Agenda::Agenda(){

}

void ajoute(RDV r){
    premiER.setRdv(r);
}