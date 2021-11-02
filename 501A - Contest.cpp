#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
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

    int a;
    int b;
    int c;
    int d;

    cin >> a >> b >> c >> d;

    ll mishaSum = max((3 * a) / 10, a - (a / 250) * c);
    ll vasyaSum = max((3 * b) / 10, b - (b / 250) * d);





    if (mishaSum > vasyaSum) {
        cout << "Misha";
    } else if (vasyaSum > mishaSum) {
        cout << "Vasya";
    } else {
        cout << "Tie";
    }

}
