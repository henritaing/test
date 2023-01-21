#include "Case.h"

class Terrain : public Case {
private:
    int prixAchat;
    int[] loyers;
    int niveau;
    int proprietaire;
public:
    Terrain(string nom, int prixAchat, int[] loyers, int niveau);
    // getters
    int getPrixAchat();
    int getLoyer();
    int getNiveau();
    int getProprietaire();
    // setters
    void setPrixAchat(int prixAchat);
    void setLoyer(int[] loyers);
    void setNiveau(int niveau);
    void setProprietaire(int proprietaire);
    void Action(Joueur& joueur);
};
