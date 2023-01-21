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
};
