# 🅶 Problema G - Inversiones en la Fila

<div align="center">

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)
![Algorithm](https://img.shields.io/badge/Algorithm-Merge%20Sort-blue)
![Language](https://img.shields.io/badge/C%2B%2B-17-blue)
![Status](https://img.shields.io/badge/Status-Solved-brightgreen)

</div>

---

# 📖 Descripción

Un grupo de estudiantes se encuentra formado en una fila para una fotografía.

Cada estudiante posee una estatura determinada y se define una **inversión** como un par de posiciones `(i, j)` tal que:

- `i < j`
- El estudiante ubicado en `i` es más alto que el estudiante ubicado en `j`.

El objetivo es determinar la cantidad total de inversiones presentes en la fila.

---

# 📥 Entrada

La primera línea contiene un entero:

- **n**: cantidad de estudiantes.

La segunda línea contiene **n** enteros que representan las estaturas en el orden en que aparecen en la fila.

### Ejemplo

```text
6
5 2 6 1 3 4
```

---

# 📤 Salida

Se debe imprimir un único número entero que represente la cantidad total de inversiones.

### Ejemplo

```text
8
```

---

# 💡 Estrategia de solución

Debido a que la cantidad de estudiantes puede llegar hasta **200 000**, comparar todos los pares posibles produciría un algoritmo de complejidad **O(n²)**, el cual excede el límite de tiempo.

Para resolver el problema de manera eficiente se utiliza **Merge Sort**, que además de ordenar el arreglo permite contar las inversiones durante la fase de mezcla.

Cuando se combinan dos subarreglos ordenados:

- Si el elemento del lado izquierdo es menor o igual, simplemente se copia.
- Si el elemento del lado derecho es menor, significa que forma una inversión con todos los elementos restantes del subarreglo izquierdo.

En ese momento se incrementa el contador de inversiones sin necesidad de realizar comparaciones adicionales.

---

# 🧠 Algoritmo utilizado

**Merge Sort con conteo de inversiones**

El algoritmo divide el arreglo en dos partes recursivamente.

Durante el proceso de combinación (Merge), se cuentan todas las inversiones existentes entre ambos subarreglos.

Esta técnica pertenece al paradigma **Divide and Conquer (Divide y Vencerás)**.

---

# 🚀 Complejidad

| Complejidad | Valor |
|-------------|-------|
| Tiempo | **O(n log n)** |
| Memoria | **O(n)** |

Donde:

- **n** es la cantidad de estudiantes.

Cada elemento participa únicamente en las divisiones y combinaciones propias del Merge Sort.

---

# 📝 Ejemplo de funcionamiento

### Entrada

```text
6
5 2 6 1 3 4
```

Las inversiones encontradas son:

| Par | Inversión |
|-----|-----------|
| (5,2) | ✔ |
| (5,1) | ✔ |
| (5,3) | ✔ |
| (5,4) | ✔ |
| (2,1) | ✔ |
| (6,1) | ✔ |
| (6,3) | ✔ |
| (6,4) | ✔ |

Total de inversiones:

```text
8
```

### Salida

```text
8
```

---

# 📂 Estructura del código

El programa se organiza en las siguientes etapas:

1. Leer la cantidad de estudiantes.
2. Almacenar las estaturas en un arreglo.
3. Ejecutar Merge Sort de forma recursiva.
4. Contar las inversiones durante la fase de mezcla.
5. Imprimir la cantidad total de inversiones.

---

# 🛠️ Posibles mejoras

Otra solución eficiente consiste en utilizar un **Fenwick Tree (Binary Indexed Tree)** o un **Segment Tree** junto con compresión de coordenadas.

Sin embargo, **Merge Sort** resulta una alternativa más sencilla de implementar y comprender, además de ofrecer la misma complejidad **O(n log n)**.

---

# 🎯 Conceptos aprendidos

- Divide and Conquer.
- Merge Sort.
- Conteo de inversiones.
- Recursión.
- Optimización de algoritmos.
- Complejidad temporal **O(n log n)**.

---

# 📚 Archivo

```text
G.cpp
```

Contiene una implementación en **C++17** basada en **Merge Sort**, la cual ordena el arreglo mientras cuenta eficientemente la cantidad de inversiones presentes en la fila.
