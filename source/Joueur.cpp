#include <string>
#include "../header/Joueur.h"

Joueur::Joueur(string nom) {
    this->nom = nom;
    this->balance = 1500;
    this->position = 0;
}

string Joueur::getNom() {
    return nom;
}

int Joueur::getBalance() {
    return balance;
}

Case* Joueur::getPosition() {
    return position;
}

void Joueur::setNom(string nom) {
    this->nom = nom;
}

void Joueur::setBalance(int balance) {
    this->balance = balance;
}

void Joueur::setPosition(Case* position) {
    this->position = position;
}

void Joueur::bouger(int espace) {
    //Move the player the given number of spaces and perform the action of the new space
    int nouvelle_position = (this->position + espace) % 40;
    setPosition(liste_cases[nouvelle_position]);
    //perform action of new space
}
