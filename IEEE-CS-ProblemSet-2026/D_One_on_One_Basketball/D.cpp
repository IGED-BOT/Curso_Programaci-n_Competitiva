#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int A = 0, B = 0;

    for (int i = 0; i < s.size(); i += 2) {

        if (s[i] == 'A')
            A += s[i + 1] - '0';
        else
            B += s[i + 1] - '0';

        if (A >= 10 && B >= 10) {
            if (A - B >= 2) {
                cout << "A";
                return 0;
            }
            if (B - A >= 2) {
                cout << "B";
                return 0;
            }
        } else {
            if (A >= 11) {
                cout << "A";
                return 0;
            }
            if (B >= 11) {
                cout << "B";
                return 0;
            }
        }
    }

    return 0;
}
