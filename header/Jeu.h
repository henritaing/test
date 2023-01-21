class Jeu {
    private:
        Player players[4] = {Player("Joueur 1"), Player("Joueur 2"), Player("Joueur 3"), Player("Joueur 4")};
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
