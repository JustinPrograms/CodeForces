#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdlib>
#define ll long long
#define pi 3.14159265359
#define yes std::cout << "YES" << endl
#define no  std::cout << "NO" << endl


using namespace std;

void solve();




int main() {
    solve();

    return 0;
}

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int lower = 0;
    int upper = 0;

    for (int i = 0; i < s.length(); i++) {
        if (int(s[i]) >= 97) {
            lower++;
        } else {
            upper++;
        }
    }

    if (upper > lower) {
        for (int i = 0; i < s.length(); i++) {
            if (int(s[i]) < 97) {

            } else {
                s[i] = s[i] - 32;
            }
        }
        cout << s;

    } else {


        for (int i = 0; i < s.length(); i++) {
            if (int(s[i]) > 96) {
            } else {
                s[i] = s[i] + 32;
            }
        }
        cout << s;
    }

}
