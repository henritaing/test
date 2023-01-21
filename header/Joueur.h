#include "Case.h"s

class Joueur {
private:
    string nom;
    int balance;
    Case* position;
public:
    Joueur(string name);
    string getNom();
    int getBalance();
    Case* getPosition();
    void setNom(string nom);
    void setBalance(int balance);
    void setPosition(Case* position);
    void bouger(int espace);
    void payer(Joueur& joueur, int montant);
    void crediter(int montant) {
        if (montant > 0)
            this->solde += montant;
    }
    void debiter(int montant) {
        if (this->solde >= montant)
            this->solde -= montant;
        else
            cout << "Solde insuffisant" << endl;
    }
};
