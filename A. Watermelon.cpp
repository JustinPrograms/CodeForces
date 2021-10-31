#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
void solve(){
    int w;
 
    cin >> w;
 
    if (w > 2 && w % 2 == 0){
        cout << "YES";
    }else {
        cout << "NO";
    }
}
 
int main() {
 
    solve();
 
    return 0;
}
