#include <iostream>
#include <string>
#include <algorithm>
#include <vector>



using namespace std;

void solve();

int main() {
    solve();

    return 0;
}

void solve() {

    int n;

    cin >> n;

    int exit[n];
    int enter[n];

    int people = 0;
    int cap = 0;

    for (int i = 0; i < n; i++) {
        cin >> exit[i] >> enter[i];
    }

    for (int i = 0; i < n; i++) {
        people -= exit[i];
        people += enter[i];
        if (people > cap) cap = people;

    }

    cout << cap;


}

 
