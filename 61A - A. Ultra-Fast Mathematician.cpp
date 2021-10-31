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


    string num1;
    string num2;
    string newNum;

    cin >> num1 >> num2;

    for (int i = 0; i < num1.length(); i++) {
        if (num1[i] == num2[i]) {
            newNum += '0';
        } else {
            newNum += '1';
        }
    }

    cout << newNum << endl;



}

 
