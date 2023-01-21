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
    int nouvelle_position = (position + espace) % 40;
    position = nouvelle_position;
    //perform action of new space
}

void Joueur::payer(Joueur& joueur, int montant) {
    if (balance >= montant) {
        balance -= montant;
        joueur.balance += montant;
    }
    else {
        cout << "Pas les fonds pour payer le montant." << endl;
    }
}
