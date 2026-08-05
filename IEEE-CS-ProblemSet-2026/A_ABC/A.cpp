#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int v[3];
    cin >> v[0] >> v[1] >> v[2];

    sort(v, v + 3);

    string s;
    cin >> s;

    for (int i = 0; i < 3; i++) {
        if (s[i] == 'A')
            cout << v[0];
        else if (s[i] == 'B')
            cout << v[1];
        else
            cout << v[2];

        if (i < 2)
            cout << " ";
    }

    return 0;
}
