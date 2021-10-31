#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


void solve() {

    int k, n, w, cost = 0;

    cin >> k >> n >> w;


    for (int i = 1; i != w + 1; i++) {

        cost += i * k;
    }

    if (cost > n) {
        cost = cost - n;
        cout << cost;
    } else {
        cout << 0;
    }

}

int main() {

    solve();


    return 0;
}
