#include iostream
#include string

class Player {

    public:
    Player(char s = 'x', string n = "Player") : (symbol(s)), (name(n)) {} //player constructor

    private:
    char symbol;
    string name;
}
