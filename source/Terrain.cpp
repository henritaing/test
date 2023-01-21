#include "../header/Terrain.h"
#include "../header/Joueur.h"

Terrain::Terrain(string nom, int prixAchat, int[] loyers, int niveau) : Case(nom) {
    this->prixAchat = prixAchat;
    this->loyers = loyers;
    this->niveau = niveau;
    this->proprietaire = -1;
}

int Terrain::getPrixAchat() {
    return this->prixAchat;
}

int Terrain::getLoyer() {
    return this->loyers[this->niveau];
}

int Terrain::getNiveau() {
    return this->niveau;
}

int Terrain::getProprietaire() {
    return this->proprietaire;
}

void Terrain::setPrixAchat(int prixAchat) {
    this->prixAchat = prixAchat;
}

void Terrain::setLoyer(int[] loyers) {
    this->loyers = loyers;
}

void Terrain::setNiveau(int niveau) {
    this->niveau = niveau;
}

void Terrain::setProprietaire(int proprietaire) {
    this->proprietaire = proprietaire;
}

void Terrain::Action(Joueur& joueur) {
    int loyer = this->getLoyer();
    if (this->proprietaire != -1) {
        joueur.debiter(loyer);
        Joueur proprietaire = jeu.getJoueur(this->proprietaire);
        proprietaire.crediter(loyer);
    }
    else {
        int solde = joueur.getSolde();
        if (solde < this->prixAchat) {
            cout << "Vous n'avez pas assez d'argent pour acheter cette propriété"
        }
    }
}
