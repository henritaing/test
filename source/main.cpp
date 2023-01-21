#include <iostream>
#include "../header/Jeu.h"

int main() {
    std::cout << "Bienvenue.\n";
    // Initialisation du jeu
    Jeu jeu;
    jeu.setup();

    // Boucle principale de jeu
    while (!jeu.estFini()) {
        jeu.jouerTour();
    }

    // Affiche l'état final du jeu
    jeu.afficherResultats();

    return 0;
}
