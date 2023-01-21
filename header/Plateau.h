#include "Case.h"

class Plateau {
    private:
        Case* cases[40];
    public:
        Plateau(); //Constructor, creates the Monopoly board
        Case* getCase(int n); //Returns the n-1th case of the board
};
