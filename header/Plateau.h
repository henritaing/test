class Board {
    private:
        Case* cases[40];
    public:
        Tableau(); //Constructor, creates the Monopoly board
        Case* getCase(int n); //Returns the n-1th case of the board
};
