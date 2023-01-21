#include "Plateau.h"

class Jeu {
    private:
        Joueur joueurs[4] = {Joueur("Joueur 1"), Joueur("Joueur 2"), Joueur("Joueur 3"), Joueur("Joueur 4")};
        Plateau plateau; 
        int joueurActuel; 
        int tourActuel; 
        bool gameOver; //Indicate if the game is over or not
    public:
        Jeu(); //constructor
        ~Jeu(); //destructor
        void setup(); //Initialize the game
        void jouerTour(); //Play one turn of the game
        bool estFini(); //Check if the game is over
        void afficherResultats(); //Print final state of the game
};
