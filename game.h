#include "player.h"
#include <iostream>
#include <string>
using namespace std;;

class Board{
    public:
    Board(): cellCount(0) {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
            waffle[i][j] = " ";
            }
        }
    }

    void outputBoard const() {
        cout << "-------------" << endl;
        for (int i = 0; i < 3; ++i){
            cout << "| ";
            for (int j = 0; j < 3; ++j) {
                cout << waffle[i][j] << " | ";
            }
            cout << endl << "-------------" << endl;
        }
    }

    void move(int row, int col, char sym) {
        if (check(row, col) == true) { //find a way to check if empty grid
            waffle[row][col] = sym;
            cellCount++;
        }
        else {
            cout << "Pick an empty grid." << endl;
        }
    }

    bool check(int row, int col){
        if (waffle[row][col] == ' ') {
            return true;
        }
        return false;
    } 
    
    bool wonGame(char sym) const{
        for (int i = 0; i < 3; ++i) {
            if (grid[i][0] == sym && grid[i][1] == sym && grid[i][2] == sym) {return true }
        }
        for (int i = 0; i < 3; ++i) {
            if (grid[0][i] == sym && grid[1][i] == sym && grid[2][i] == sym) {return true }
        }

        if (grid[0][0] == sym && grid[1][1] == sym && grid[2][2] == sym) {return true }
        if (grid[2][0] == sym && grid[1][1] == sym && grid[0][2] == sym) {return true }
        return false;
    }

    private:
    int cellCount;
    char waffle[3][3];
}
