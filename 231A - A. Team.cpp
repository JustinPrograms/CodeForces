#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void solve(){

        int n, Petya, Vasya, Tonya, number(0);
        cin >> n;
        while (n--)
        {
            cin >> Petya >> Vasya >> Tonya;
            if (Petya + Vasya + Tonya >= 2)
            {
                number += 1;
            }
        }
        cout << number << endl;
}

int main() {

    solve();

    return 0;
}
