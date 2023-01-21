#include "../header/Case.h"
#include "../header/Joueur.h"

// Constructeur
Case::Case(string nom) {
    this->nom = nom;
}

// Méthode getter pour accéder au nom de la case
string Case::getNom() {
    return this->nom;
}

// Méthode pour effectuer l'action correspondant à la case
void Case::Action(Joueur& joueur) {
    // Code pour effectuer l'action ici
    // Par exemple :
    // player.debiter(this->cout);
}
