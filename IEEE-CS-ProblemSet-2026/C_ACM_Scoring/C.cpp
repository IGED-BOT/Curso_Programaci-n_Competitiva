#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<char, int> wrong;
    map<char, bool> solved;

    int resueltos = 0;
    int tiempo = 0;

    while (true) {
        int minuto;
        cin >> minuto;

        if (minuto == -1)
            break;

        char problema;
        string resultado;

        cin >> problema >> resultado;

        if (solved[problema])
            continue;

        if (resultado == "wrong") {
            wrong[problema]++;
        } else {
            solved[problema] = true;
            resueltos++;
            tiempo += minuto + wrong[problema] * 20;
        }
    }

    cout << resueltos << " " << tiempo << endl;

    return 0;
}
