#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main(int argc, char** argv) {
    int num;
    cin >> num;

    int min = 0;
    while (num != 0) {
        if (num - 5 >= 0) {
            num -= 5;
        } else if (num - 4 >= 0) {
            num -= 4;
        } else if (num - 3 >= 0) {
            num -= 3;
        } else if (num - 2 >= 0) {
            num -= 2;
        } else if (num - 1 >= 0) {
            num -= 1;
        }
        min += 1;
    }

    cout << min << endl;
}
