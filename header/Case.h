#include "Joueur.h"

class Case {
private:
    string name;
public:
    Case(string nom);
    string getNom();
    void Action(Joueur& joueur);
};