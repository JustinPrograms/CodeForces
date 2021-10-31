#include <iostream>

using namespace std;

int main()
{
    
    int x[5][5];
    int locI, locJ;
    int moves = 0;


    for (int i = 0; i != 5; i++) {
        for (int j = 0; j != 5; j++ ) {
            cin >> x[i][j];
            if (x[i][j] == 1) {
                locI = i;
                locJ = j;
                
            }
        }
    }


    if (locI > 2) {
        moves += locI - 2;
        locI = 2;
    } else if (locI < 2) {
        moves += 2 - locI;
        locI = 2;
    }

    if (locJ > 2) {
        moves += locJ - 2;
        locJ = 2;
    } else if (locJ < 2) {
        moves += 2 - locJ;
        locJ = 2;
    }


    cout << moves;



    return 0;
}
