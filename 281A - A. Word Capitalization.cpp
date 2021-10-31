#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


void solve() {

    string str;

    cin >> str;

    str[0] = toupper(str[0]);

    cout << str;
}

int main() {

    solve();

    return 0;
}
