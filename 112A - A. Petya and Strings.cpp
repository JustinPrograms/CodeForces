#include <iostream>
#include <string>
#include <algorithm>
#include <vector>



using namespace std;

void solve();

int main() {
    solve();

    return 0;
}

void solve() {

    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    string s1New;
    string s2New;


    for (int i = 0; i < s1.length(); i++) {
        if (int(s1[i]) > 90) {
            s1New += int(s1[i]) - 32;
        } else {
            s1New += int(s1[i]);
        }

        if (int(s2[i]) > 90) {
            s2New += int(s2[i]) - 32;
        } else {
            s2New += int(s2[i]);
        }

        if (int(s1New[i]) != int(s2New[i])) {
            if (int(s1New[i]) < int(s2New[i])) {
                cout << -1;
                break;
            } else if (int(s2New[i]) < int(s1New[i])) {
                cout << 1;
                break;
            }
        }
    }

    if (s1New == s2New) {
        cout << 0;
    }




}

 
