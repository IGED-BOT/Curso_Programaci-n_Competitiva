# 🧪 Comparador de Algoritmos de Ordenamiento

[![C++11](https://img.shields.io/badge/C%2B%2B-11-blue.svg)](https://isocpp.org/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

Programa en C++ que genera un arreglo de números enteros aleatorios y compara el rendimiento de **siete algoritmos de ordenamiento** clásicos.  
Para cada algoritmo se mide el **tiempo de ejecución (en segundos)** y la **cantidad de pasos** (comparaciones u operaciones elementales).  
Los resultados se presentan ordenados de **menor a mayor tiempo**, mostrando un ranking claro.

## 📋 Requerimientos del programa

### Entrada
- **Cantidad de números a generar** (`N`)
- **Rango inferior** (`min`)
- **Rango superior** (`max`)

### Salida
1. El arreglo original generado aleatoriamente.
2. Una tabla con los siguientes campos, **ordenada por tiempo ascendente**:
   - `RANKING` : posición según velocidad (1 = más rápido)
   - `ALGORITMO` : nombre del algoritmo
   - `PASOS` : número de operaciones relevantes
   - `TIEMPO (s)` : tiempo de ejecución en segundos (alta resolución)

### Algoritmos incluidos
| Algoritmo       | Tipo         | Complejidad media |
|----------------|--------------|-------------------|
| Bubble Sort     | Comparación  | O(n²)             |
| Selection Sort  | Comparación  | O(n²)             |
| Insertion Sort  | Comparación  | O(n²)             |
| Merge Sort      | Comparación  | O(n log n)        |
| Quick Sort      | Comparación  | O(n log n)        |
| Radix Sort      | No comparación| O(n·d)            |
| Bucket Sort     | No comparación| O(n + k)          |

> **Nota sobre los pasos:**  
> - Para algoritmos basados en comparaciones: se cuentan las **comparaciones** entre elementos.  
> - Para Radix Sort: se cuentan **asignaciones y accesos a los buckets** (distribución y recolección).  
> - Para Bucket Sort: se cuentan **inserciones en cubetas + comparaciones** durante el ordenamiento interno (Insertion Sort).  

## 🔧 Compilación y ejecución

### Requisitos
- Compilador C++11 (g++ 5+, clang 3.4+, MSVC 2015+)
- Terminal / consola

### Pasos

```bash
# 1. Clonar el repositorio (o descargar main.cpp)
git clone https://github.com/tuusuario/comparador-ordenamientos.git
cd comparador-ordenamientos

# 2. Compilar
g++ -std=c++11 -o ordenamientos main.cpp

# 3. Ejecutar
./ordenamientos
