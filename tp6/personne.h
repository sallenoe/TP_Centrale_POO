#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>

class Personne{
    private : 
    std::string nom;
    std::string prenom;
    std::string adresse;
    std::string telephone;

    public : 
    Personne(std::string n, std::string p, std::string a = "", std::string t = "");
    void affiche();
    std::string getNom();
    std::string getPrenom();
    std::string getAdresse();
    std::string getTel();
    void setNom(std::string a);
    void setPrenom(std::string a);
    void setAdresse(std::string a);
    void setTel(std::string a);

};







#endif