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
    
    bool wonGame()[return true] //finish later

    private:
    int cellCount;
    char waffle[3][3];
}
