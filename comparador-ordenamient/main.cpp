#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include <iomanip>
#include <cmath>

using namespace std;
using namespace chrono;

// Estructura de resultados
struct Resultado {
    string nombre;
    long long pasos;
    double tiempo_segundos;  // tiempo en segundos
};

// ---------- Algoritmos de ordenamiento ----------

// Bubble Sort
void bubbleSort(vector<int>& arr, long long& pasos) {
    int n = arr.size();
    pasos = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            pasos++;
            if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
}

// Selection Sort
void selectionSort(vector<int>& arr, long long& pasos) {
    int n = arr.size();
    pasos = 0;
    for (int i = 0; i < n-1; i++) {
        int minIdx = i;
        for (int j = i+1; j < n; j++) {
            pasos++;
            if (arr[j] < arr[minIdx]) minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}

// Insertion Sort
void insertionSort(vector<int>& arr, long long& pasos) {
    int n = arr.size();
    pasos = 0;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;
        while (j >= 0) {
            pasos++;
            if (arr[j] > key) {
                arr[j+1] = arr[j];
                j--;
            } else break;
        }
        arr[j+1] = key;
    }
}

// Merge Sort (funciones auxiliares y wrapper)
void merge(vector<int>& arr, int left, int mid, int right, long long& pasos) {
    int n1 = mid-left+1, n2 = right-mid;
    vector<int> L(n1), R(n2);
    for (int i=0; i<n1; i++) L[i]=arr[left+i];
    for (int j=0; j<n2; j++) R[j]=arr[mid+1+j];
    int i=0, j=0, k=left;
    while (i<n1 && j<n2) {
        pasos++;
        if (L[i]<=R[j]) arr[k++]=L[i++];
        else arr[k++]=R[j++];
    }
    while (i<n1) arr[k++]=L[i++];
    while (j<n2) arr[k++]=R[j++];
}

void mergeSort(vector<int>& arr, int left, int right, long long& pasos) {
    if (left<right) {
        int mid = left+(right-left)/2;
        mergeSort(arr, left, mid, pasos);
        mergeSort(arr, mid+1, right, pasos);
        merge(arr, left, mid, right, pasos);
    }
}

void mergeSortWrapper(vector<int>& arr, long long& pasos) {
    pasos=0;
    mergeSort(arr, 0, arr.size()-1, pasos);
}

// Quick Sort
int partition(vector<int>& arr, int low, int high, long long& pasos) {
    int pivot = arr[high];
    int i = low-1;
    for (int j=low; j<high; j++) {
        pasos++;
        if (arr[j]<=pivot) swap(arr[++i], arr[j]);
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(vector<int>& arr, int low, int high, long long& pasos) {
    if (low<high) {
        int pi = partition(arr, low, high, pasos);
        quickSort(arr, low, pi-1, pasos);
        quickSort(arr, pi+1, high, pasos);
    }
}

void quickSortWrapper(vector<int>& arr, long long& pasos) {
    pasos=0;
    quickSort(arr, 0, arr.size()-1, pasos);
}

// Radix Sort
void radixSort(vector<int>& arr, long long& pasos) {
    pasos=0;
    if (arr.empty()) return;
    int minVal = *min_element(arr.begin(), arr.end());
    vector<int> offset(arr.size());
    for (size_t i=0; i<arr.size(); i++) {
        offset[i] = arr[i] - minVal;
        pasos++;
    }
    int maxVal = *max_element(offset.begin(), offset.end());
    int exp=1, base=10;
    vector<int> output(arr.size());
    while (maxVal/exp > 0) {
        vector<int> count(base,0);
        for (size_t i=0; i<offset.size(); i++) {
            int digit = (offset[i]/exp)%base;
            count[digit]++;
            pasos++;
        }
        for (int i=1; i<base; i++) {
            count[i] += count[i-1];
            pasos++;
        }
        for (int i=offset.size()-1; i>=0; i--) {
            int digit = (offset[i]/exp)%base;
            output[count[digit]-1] = offset[i];
            count[digit]--;
            pasos++;
        }
        for (size_t i=0; i<offset.size(); i++) {
            offset[i] = output[i];
            pasos++;
        }
        exp *= 10;
    }
    for (size_t i=0; i<arr.size(); i++) {
        arr[i] = offset[i] + minVal;
        pasos++;
    }
}

// Bucket Sort
void bucketSort(vector<int>& arr, long long& pasos) {
    pasos=0;
    if (arr.empty()) return;
    int n=arr.size();
    int minVal = *min_element(arr.begin(), arr.end());
    int maxVal = *max_element(arr.begin(), arr.end());
    pasos += n;
    if (minVal==maxVal) return;
    int numBuckets = max(2, (int)sqrt(n));
    vector<vector<int>> buckets(numBuckets);
    double range = (maxVal - minVal + 1.0)/numBuckets;
    for (int val : arr) {
        int idx = (int)((val-minVal)/range);
        if (idx>=numBuckets) idx=numBuckets-1;
        buckets[idx].push_back(val);
        pasos++;
    }
    int pos=0;
    for (int i=0; i<numBuckets; i++) {
        vector<int>& bucket = buckets[i];
        for (size_t j=1; j<bucket.size(); j++) {
            int key=bucket[j];
            int k=j-1;
            while (k>=0) {
                pasos++;
                if (bucket[k]>key) {
                    bucket[k+1]=bucket[k];
                    k--;
                } else break;
            }
            bucket[k+1]=key;
            pasos++;
        }
        for (int val : bucket) {
            arr[pos++]=val;
            pasos++;
        }
    }
}

// ---------- Funciones auxiliares ----------
Resultado ejecutarYMedir(const string& nombre,
                         void (*algoritmo)(vector<int>&, long long&),
                         vector<int> datos) {
    long long pasos = 0;
    auto start = high_resolution_clock::now();
    algoritmo(datos, pasos);
    auto end = high_resolution_clock::now();
    double tiempo_segundos = duration_cast<nanoseconds>(end-start).count() / 1e9;
    return {nombre, pasos, tiempo_segundos};
}

void mostrarArray(const vector<int>& arr) {
    for (int val : arr) cout << val << " ";
    cout << endl;
}

// ---------- Main ----------
int main() {
    int N, minVal, maxVal;
    cout << "Ingrese cantidad de numeros a generar: ";
    cin >> N;
    cout << "Ingrese el rango (min max): ";
    cin >> minVal >> maxVal;
    if (minVal > maxVal) swap(minVal, maxVal);

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(minVal, maxVal);
    vector<int> original(N);
    for (int i=0; i<N; i++) original[i] = dist(gen);

    cout << "\nArray generado:\n";
    mostrarArray(original);
    cout << endl;

    vector<pair<string, void(*)(vector<int>&, long long&)>> algoritmos = {
        {"Bubble Sort", bubbleSort},
        {"Selection Sort", selectionSort},
        {"Insertion Sort", insertionSort},
        {"Merge Sort", mergeSortWrapper},
        {"Quick Sort", quickSortWrapper},
        {"Radix Sort", radixSort},
        {"Bucket Sort", bucketSort}
    };

    vector<Resultado> resultados;
    for (auto& alg : algoritmos) {
        vector<int> copia = original;
        resultados.push_back(ejecutarYMedir(alg.first, alg.second, copia));
    }

    // Ordenar por tiempo (menor a mayor)
    sort(resultados.begin(), resultados.end(),
         [](const Resultado& a, const Resultado& b) {
             return a.tiempo_segundos < b.tiempo_segundos;
         });

    // Mostrar tabla con ranking
    cout << "--------------------------------------------------------------------\n";
    cout << setw(10) << "RANKING" << setw(20) << "ALGORITMO"
         << setw(18) << "PASOS" << setw(20) << "TIEMPO (s)" << "\n";
    cout << "--------------------------------------------------------------------\n";
    cout << fixed << setprecision(9);
    for (size_t i = 0; i < resultados.size(); i++) {
        cout << setw(10) << i+1
             << setw(20) << resultados[i].nombre
             << setw(18) << resultados[i].pasos
             << setw(20) << resultados[i].tiempo_segundos << "\n";
    }
    cout << "--------------------------------------------------------------------\n";

    return 0;
}
