#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


void solve() {

    int n, remove = 0;
    string s;

    cin >> n >> s;


    for (int i = 0; i < n; i++) {
        if (s[i] == 'R' && s[i+1] == 'R') {
            remove++;
        }

        if (s[i] == 'G' && s[i+1] == 'G') {
            remove++;
        }

        if (s[i] == 'B' && s[i+1] == 'B') {
            remove++;
        }
     }

    cout << remove;

}

int main() {

    solve();

    return 0;
}
