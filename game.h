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

    private:
    int cellCount;
    char waffle[3][3];
}
