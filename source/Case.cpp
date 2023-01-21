#include "../header/Case.h"
#include "../header/Joueur.h"

// Constructeur
Case::Case(string nom) {
    this->nom = nom;
}

// M�thode getter pour acc�der au nom de la case
string Case::getNom() {
    return this->nom;
}

// M�thode pour effectuer l'action correspondant � la case
void Case::Action(Joueur& joueur) {
    // Code pour effectuer l'action ici
    // Par exemple :
    // player.debiter(this->cout);
}
