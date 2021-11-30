#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <climits>
#define ll long long
#define pi 3.14159265359
#define yes std::cout << "YES\n"
#define no  std::cout << "NO\n"


using namespace std;

void solve();




int main() {
    solve();

    return 0;
}

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int shops;
    cin >> shops;
    int n[shops];

    for (int i = 0; i < shops; i++) {
        cin >> n[i];
    }

    int days;
    cin >> days;
    int q[days];

    for (int i = 0; i < days; i++) {
        cin >> q[i];
    }



    for (int i = 0; i < days; i++) {
        int amt = 0;
        for (int j = 0; j < shops; j++) {

            if (q[i] >= n[j]) {
                amt++;
            }
        }
        cout << amt << endl;

    }




}




/*
 sort(s.begin(), s.end()); // To sort alphabet order a string
 abs() // To make a negative number positive
 65 - 90 Upper ASCII Values | 97 - 122 Lower ASCII Values | -+ 32 | Use int() | Ex.   if (int(s[0]) >= 65 && int(s[0]) <= 90) {**run code**}
 input.erase(remove(input.begin(), input.end(),'A'),input.end());
 transform(input.begin(), input.end(), input.begin(), ::tolower);


 MAKING INT ARRAY HIGHEST TO LOWEST
sort(nums, nums+n, compare);

 bool compare(int a, int b) {
    if (a > b) return true;
    return false;
}


*/
