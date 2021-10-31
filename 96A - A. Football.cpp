#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


void solve() {

    string str;
    int inRow = 0;

    cin >> str;

    if (str.find("1111111") != string::npos || str.find("0000000") != string::npos) {
        cout << "YES";
    } else {
        cout << "NO";
    }


}


int main() {

   solve();


    return 0;
}
