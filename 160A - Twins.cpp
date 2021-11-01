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

bool compare(int a, int b) {
    if (a > b) return true;
    return false;
}

int main() {
    solve();

    return 0;
}

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    int nums[n];

    int mySum = 0;
    int twinSum = 0;
    int counter = 0;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        twinSum += nums[i];
    }

    sort(nums, nums+n, compare);

    for (int i = 0; i < n; i++) {
        mySum += nums[i];
        twinSum -= nums[i];
        counter++;
        if (mySum > twinSum) {
            cout << counter;
            break;
        }
    }
}
