#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


void solve() {

    string str;
    int one = 0, two = 0, three = 0;

    cin >> str;


    for(int i = 0; i < str.size(); i++) {

        if (str[i] == '1') {
            one++;
        }

        if (str[i] == '2') {
            two++;
        }

        if (str[i] == '3') {
            three++;
        }
    }


    string answer;

    for (int j = 0; j < one; j++) {
        answer += "1+";
    }

    for (int j = 0; j < two; j++) {
        answer += "2+";
    }

    for (int j = 0; j < three; j++) {
        answer += "3+";
    }

    cout << answer.erase(answer.length() - 1);



}

int main() {

    solve();




    return 0;
}
