#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#define ll long long
#define pi 3.14159265359
#define yes std::cout << "YES" << endl
#define no  std::cout << "NO" << endl


using namespace std;

void solve();


int factsM(int n) {
    int facts = 1;
    for (int i = 2; i <= n; i++) {
        facts = facts * i;
    }
    return facts;
}

int main() {
    solve();

    return 0;
}

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;

    cin >> a >> b;

    if (a > b) {
        cout << factsM(b);
    } else {
        cout << factsM(a);
    }

}
