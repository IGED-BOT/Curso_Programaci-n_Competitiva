#include <iostream>
using namespace std;

int main() {

    int N, M;

    while (cin >> N >> M) {

        if (N == 0 && M == 0)
            break;

        int *jack = new int[N];
        int *jill = new int[M];

        for (int i = 0; i < N; i++)
            cin >> jack[i];

        for (int i = 0; i < M; i++)
            cin >> jill[i];

        int i = 0, j = 0;
        int comunes = 0;

        while (i < N && j < M) {

            if (jack[i] == jill[j]) {
                comunes++;
                i++;
                j++;
            }
            else if (jack[i] < jill[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        cout << comunes << endl;

        delete[] jack;
        delete[] jill;
    }

    return 0;
}
