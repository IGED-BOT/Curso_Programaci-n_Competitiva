# Comparador de Algoritmos de Ordenamiento

Programa en C++ que genera un arreglo aleatorio de números enteros y compara el rendimiento de 7 algoritmos de ordenamiento:  
**Bubble Sort**, **Selection Sort**, **Insertion Sort**, **Merge Sort**, **Quick Sort**, **Radix Sort** y **Bucket Sort**.

Para cada algoritmo se mide:
- Tiempo de ejecución (en segundos, alta resolución)
- Cantidad de pasos (comparaciones o asignaciones elementales)

Los resultados se muestran ordenados de menor a mayor tiempo (ranking).

## Compilación

Requiere un compilador con soporte C++11 (g++ 5+, clang, MinGW, etc.).

```bash
g++ -std=c++11 -o ordenamientos main.cpp
