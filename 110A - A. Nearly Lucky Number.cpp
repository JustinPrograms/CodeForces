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

    string s;

    cin >> s;

    int four = 0;
    int seven = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '4') {
            four++;
        } else if (s[i] == '7') {
            seven++;
        }
    }

    if (four + seven == 4 || four + seven == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }


}
// 4744000695826 = NO;
// Expected is YES

 
