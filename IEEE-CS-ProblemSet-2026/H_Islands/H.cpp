#include <iostream>
using namespace std;

const int MAX = 1005;

char mapa[MAX][MAX];
int R, C;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y) {

    mapa[x][y] = '0';

    for (int k = 0; k < 4; k++) {

        int nx = x + dx[k];
        int ny = y + dy[k];

        if (nx >= 0 && nx < R &&
            ny >= 0 && ny < C &&
            mapa[nx][ny] == '1') {

            dfs(nx, ny);
        }
    }
}

int main() {

    cin >> R >> C;

    for (int i = 0; i < R; i++)
        cin >> mapa[i];

    int islas = 0;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {

            if (mapa[i][j] == '1') {
                islas++;
                dfs(i, j);
            }

        }
    }

    cout << islas << endl;

    return 0;
}
