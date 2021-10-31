#include <iostream>

using namespace std;

int main()
{
    
    double n, x, y, z, xSum(0), ySum(0), zSum(0);

    cin >> n;
    
    while (n--) {
        cin >> x >> y >> z;
        xSum += x;
        ySum += y;
        zSum += z;
    }
    
    
    if (xSum == 0 && ySum == 0 && zSum == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}
