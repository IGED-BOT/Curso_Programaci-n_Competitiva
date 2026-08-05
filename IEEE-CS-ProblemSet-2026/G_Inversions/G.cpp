#include <iostream>
using namespace std;

long long merge(int a[], int temp[], int izquierda, int medio, int derecha) {

    int i = izquierda;
    int j = medio + 1;
    int k = izquierda;

    long long inversiones = 0;

    while (i <= medio && j <= derecha) {

        if (a[i] <= a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
            inversiones += (medio - i + 1);
        }
    }

    while (i <= medio)
        temp[k++] = a[i++];

    while (j <= derecha)
        temp[k++] = a[j++];

    for (int x = izquierda; x <= derecha; x++)
        a[x] = temp[x];

    return inversiones;
}

long long mergeSort(int a[], int temp[], int izquierda, int derecha) {

    if (izquierda >= derecha)
        return 0;

    int medio = (izquierda + derecha) / 2;

    long long inversiones = 0;

    inversiones += mergeSort(a, temp, izquierda, medio);
    inversiones += mergeSort(a, temp, medio + 1, derecha);
    inversiones += merge(a, temp, izquierda, medio, derecha);

    return inversiones;
}

int main() {

    int n;
    cin >> n;

    int *a = new int[n];
    int *temp = new int[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << mergeSort(a, temp, 0, n - 1) << endl;

    delete[] a;
    delete[] temp;

    return 0;
}
