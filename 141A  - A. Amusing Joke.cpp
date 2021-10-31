#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define ll long long
#define yes "YES"
#define no "NO"




using namespace std;

void solve();

int main() {
    solve();

    return 0;
}

void solve() {




    string s1, s2, mix, s;
    cin >> s1 >> s2 >> mix;

    s = s1 + s2;

    sort(s.begin(), s.end());
    sort(mix.begin(), mix.end());

    if(s == mix) cout << yes << endl;
    if (s != mix) cout << no << endl;


}

 
