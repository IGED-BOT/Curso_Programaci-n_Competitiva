#include <iostream>
using namespace std;

int C, N;
int precio[25];
int respuesta = 0;

void backtracking(int pos, int suma) {

    if (suma > C)
        return;

    if (pos == N) {
        if (suma == C)
            respuesta++;
        return;
    }

    // No comprar este ETF
    backtracking(pos + 1, suma);

    // Comprar este ETF
    backtracking(pos + 1, suma + precio[pos]);
}

int main() {

    cin >> C >> N;

    for (int i = 0; i < N; i++)
        cin >> precio[i];

    backtracking(0, 0);

    cout << respuesta << endl;

    return 0;
}
