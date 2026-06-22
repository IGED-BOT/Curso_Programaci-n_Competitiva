#include <iostream>

#define MAX 9

using namespace std;

//backtraking
bool SolucionarSudoku(int tablero[9][9])
{
    for (int fila = 0; fila < 9; fila++) {
        for (int col = 0; col < 9; col++) {
            if (tablero[fila][col] == 0) {
                for (int valor = 1; valor <= 9; valor++) {
                    bool es_valido = true;
                    for (int i = 0; i < 9; i++) {
                        if (tablero[fila][i] == valor ||
                            tablero[i][col] == valor ||
                            tablero[3 * (fila / 3) + i / 3][3 * (col / 3) + i % 3] == valor) {
                            es_valido = false;
                            break;
                        }
                    }
                    if (es_valido) {
                        tablero[fila][col] = valor;
                        if (SolucionarSudoku(tablero)) {
                            return true;
                        }
                        tablero[fila][col] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void Imprimir(int tablero[9][9]) {
    for (int fila = 0; fila < 9; fila++) {
        if (fila % 3 == 0 && fila != 0) {
            cout << "------+-------+------" << endl;
        }

        for (int col = 0; col < 9; col++) {
            if (col % 3 == 0 && col != 0) {
                cout << "| ";
            }

            cout << tablero[fila][col] << " ";
        }

        cout << endl;
    }
}

int main()
{
    freopen("in.txt","r",stdin);
    //ingresamos los valores de sudoku
    //finaliza cuando termine de leer la entrada
    int tablero[9][9]={};
    int pos_x,pos_y,valor;
    while(cin>>pos_x>>pos_y>>valor)
        tablero[pos_x-1][pos_y-1]=valor;

    Imprimir(tablero);
    cout << "\n=========SOL=========\n\n";

    if (SolucionarSudoku(tablero))
        Imprimir(tablero);
    else
        cout << "No tiene solucion.\n";

    return 0;
}


