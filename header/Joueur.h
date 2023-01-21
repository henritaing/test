#include "Case.h"
#include <string>

class Joueur {
private:
    string nom;
    int balance;
    Case* position;
public:
    Joueur(string nom);
    string getNom();
    int getBalance();
    Case* getPosition();
    void setNom(string nom);
    void setBalance(int balance);
    void setPosition(Case* position);
    void bouger(int espace);
    void crediter(int montant) {
        if (montant > 0)
            this->balance += montant;
    }
    void debiter(int montant) {
        if (this->balance >= montant)
            this->balance -= montant;
        else
            cout << "Insufficient balance" << endl;
    }
};