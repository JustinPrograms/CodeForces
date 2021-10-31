#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void solve(){

    int n, k, l[100], count = 0;


    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> l[i];
    }

    for (int j = 1; j <= n; j++) {

        if (l[j] > 0 && l[j] >= l[k]) {
            count++;
        }
    }

    cout << count;

}


int main() {

    solve();

    return 0;
}
