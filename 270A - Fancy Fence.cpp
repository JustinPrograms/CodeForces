#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define ll long long
#define pi 3.14159265359;
#define yes std::cout << "YES" << endl;
#define no  std::cout << "NO" << endl;
 
 
using namespace std;
 
void solve();
 
int main() {
 
    solve();
 
    return 0;
}
 
void solve() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    for (int i = 0; i < t; i++) {
        ll a;
        cin >> a;
 
        if (360 % (180 - a) == 0) {
            yes;
        } else {
            no;
        }
    }
}
 
