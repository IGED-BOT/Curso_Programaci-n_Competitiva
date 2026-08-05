#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    string s;
    string inicio = "Simon says ";

    for (int i = 0; i < n; i++) {
        getline(cin, s);

        if (s.substr(0, inicio.size()) == inicio) {
            cout << s.substr(inicio.size()) << endl;
        }
    }

    return 0;
}
