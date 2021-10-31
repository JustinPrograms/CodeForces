#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define ll long long
#define yes "YES"
#define no "NO"

//    sort(s.begin(), s.end());

using namespace std;

void solve();

int main() {
    solve();

    return 0;
}

void solve() {

    int n, m;

    cin >> n >> m;

    int pos = 1;
    ll time = 0;

    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;

        time += (a - pos + n)%n;
        pos = a;

    }
    cout << time;
}

 
