#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


void solve() {

    int a, b, i = 0;

    cin >> a >> b;

    while (b + 1 > a) {

        a = a * 3;
        b = b * 2;
        i++;

    }

    cout << i;

}

int main() {

    solve();


    return 0;
}
