#include "../header/Jeu.h"
#include "../header/Plateau.h"

Jeu::Jeu(){
    tourActuel = 0;
    gameOver = false;
    joueurActuel = 0;
    setup();
}

Jeu::~Jeu(){}

void Jeu::setup(){
    plateau = Plateau();
}

void Jeu::jouerTour(){
    tourActuel++;
    //Get player's action
    //Move the token
    //Check if the game is over
    if(estFini()){
        gameOver = true;
        afficherResultats();
        return;
    }
    joueurActuel = (joueurActuel + 1) % 4;
}

bool Jeu::estFini(){
    //Check if a player has run out of properties
    //Check if a player has reached a certain amount of money
    return false;
}

void Jeu::afficherResultats(){
    //Print winner
    //Print final state of the game
}
