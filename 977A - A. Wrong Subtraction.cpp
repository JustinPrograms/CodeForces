#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


void solve() {

    int n, k, i = 0;

    cin >> n >> k;

    while (i != k) {

        if (n % 10 == 0) {
            n = n / 10;
        } else {
            n = n - 1;
        }

        i++;

    }

    cout << n;
}


int main() {

    solve();


    return 0;
}
