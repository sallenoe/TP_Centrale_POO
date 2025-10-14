#include "rdv.h"
#include "date.h"
#include "heure.h"
#include <iostream>


RDV::RDV(){
    nbParti=0;
    listeParti = new std::string[10];
}

void RDV::affiche(){
    std::cout << std::endl;
    std::cout<<"Date : "<< date.getJour() << "/" << date.getMois()<<"/" << date.getAnnee() <<std::endl;
    std::cout << "Heure : "<< heure.getHeure() << "h"<< heure.getMinute() <<std::endl;
    std::cout<< "Lieu : "<< lieu <<std::endl;
    std::cout << "Nombre de participants : "<< nbParti<<std::endl;
    for(int i=0;i<nbParti;i++){
        std::cout << "Participant " << i << " : " << listeParti[i] << std::endl;
    }
}

void RDV::saisieParti(){
    for(int i=0;i<nbParti;i++){
        std::cout << "Participant " << i << " : " << std::endl;
        std::cin >> listeParti[i];
    }
}

void RDV::saisieLieu(){
    std::cout << "Lieu : ";
    std::cin >> lieu; 
}

void RDV::saisieHeure(){
    int temp;
    int temp2;
    std::cout << "Heure : ";
    std::cin >> temp;
    std::cin >> temp2;
    heure = Heure(temp,temp2);
}

void RDV::saisieDate(){
    int j; int m; int a;
    std::cout << "Date : ";
    std::cin >> j;
    std::cin >> m;
    std::cin >> a;
    date = Date(j,m,a);
}

void RDV::saisie(){
    saisieDate();
    saisieHeure();
    saisieLieu();
    std::cout << "Nombre de participants : ";
    std::cin >> nbParti;
    saisieParti();
}

void RDV::setDate(Date& date2){
    date = Date(date2.getJour(),date2.getMois(),date2.getAnnee());
}

void RDV::setHeure(Heure& heure2){
    heure = Heure(heure2.getHeure(), heure2.getMinute());
}

void RDV::setLieu(std::string& lieu2){
    lieu=lieu2;
}

void RDV::setNbParti(int n){
    nbParti=n;
}

void RDV::setParticipants(std::string* ps){
    listeParti = ps;
}

void RDV::setParticipant(int i, std::string s){
    listeParti[i] = s;
}
