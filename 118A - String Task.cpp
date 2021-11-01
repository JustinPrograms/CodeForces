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

    string s;
    string newS;


    cin >> s;
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    s.erase(remove(s.begin(), s.end(),'a'),s.end());
    s.erase(remove(s.begin(), s.end(),'o'),s.end());
    s.erase(remove(s.begin(), s.end(),'y'),s.end());
    s.erase(remove(s.begin(), s.end(),'e'),s.end());
    s.erase(remove(s.begin(), s.end(),'u'),s.end());
    s.erase(remove(s.begin(), s.end(),'i'),s.end());

    for (int i = 0; i < s.length(); i++) {
        cout << "." << s[i];
    }

}
