# 🅷 Problema H - Islas en el Mapa

<div align="center">

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)
![Algorithm](https://img.shields.io/badge/Algorithm-Depth%20First%20Search-blue)
![Language](https://img.shields.io/badge/C%2B%2B-17-blue)
![Status](https://img.shields.io/badge/Status-Solved-brightgreen)

</div>

---

# 📖 Descripción

Se recibe un mapa representado mediante una **grilla** de `R × C`, donde cada celda puede contener:

- **1** → Tierra.
- **0** → Agua.

Una **isla** se define como un conjunto de celdas de tierra conectadas horizontal o verticalmente.

Las conexiones diagonales **no** forman parte de la misma isla.

El objetivo consiste en determinar cuántas islas existen en el mapa.

---

# 📥 Entrada

La primera línea contiene dos enteros:

- **R**: cantidad de filas.
- **C**: cantidad de columnas.

Las siguientes **R** líneas contienen exactamente **C** caracteres (`0` o `1`).

### Ejemplo

```text
4 5
11000
11000
00100
00011
```

---

# 📤 Salida

Se debe imprimir un único número entero que represente la cantidad total de islas.

### Ejemplo

```text
3
```

---

# 💡 Estrategia de solución

La solución consiste en recorrer completamente la matriz.

Cada vez que se encuentra una celda con valor **'1'**, significa que se ha encontrado una nueva isla.

En ese momento:

1. Se incrementa el contador de islas.
2. Se ejecuta un recorrido **DFS (Depth First Search)** para visitar todas las celdas pertenecientes a esa isla.
3. Cada celda visitada se marca como agua (`'0'`) para evitar volver a contarla.

Este procedimiento continúa hasta recorrer toda la grilla.

---

# 🧠 Algoritmo utilizado

**Depth First Search (DFS)**

DFS permite explorar completamente una isla antes de continuar buscando otra.

Para cada celda de tierra se visitan sus cuatro vecinos posibles:

- Arriba
- Abajo
- Izquierda
- Derecha

Las conexiones diagonales no son consideradas.

---

# 🚀 Complejidad

| Complejidad | Valor |
|-------------|-------|
| Tiempo | **O(R × C)** |
| Memoria | **O(R × C)** *(peor caso por la recursión)* |

Donde:

- **R** es la cantidad de filas.
- **C** es la cantidad de columnas.

Cada celda del mapa es visitada como máximo una vez.

---

# 📝 Ejemplo de funcionamiento

### Entrada

```text
4 5
11000
11000
00100
00011
```

Representación del mapa:

```text
██···
██···
··█··
···██
```

Se identifican las siguientes islas:

- Isla 1

```text
██
██
```

- Isla 2

```text
█
```

- Isla 3

```text
██
```

Total:

```text
3 islas
```

### Salida

```text
3
```

---

# 📂 Estructura del código

El programa se divide en las siguientes etapas:

1. Leer las dimensiones del mapa.
2. Almacenar la grilla.
3. Recorrer todas las posiciones de la matriz.
4. Cuando se encuentre una celda de tierra (`'1'`), ejecutar DFS.
5. Marcar todas las celdas pertenecientes a esa isla como visitadas.
6. Incrementar el contador de islas.
7. Imprimir la cantidad total encontrada.

---

# 🛠️ Posibles mejoras

Además de **DFS**, este problema también puede resolverse mediante:

- **Breadth First Search (BFS)** utilizando una cola.
- **Union-Find (Disjoint Set Union)** para identificar componentes conexas.

Sin embargo, **DFS** resulta la alternativa más sencilla de implementar y comprender para este tipo de problemas, manteniendo una complejidad óptima.

---

# 🎯 Conceptos aprendidos

- Recorrido de matrices.
- Depth First Search (DFS).
- Componentes conexas.
- Grafos implícitos.
- Recursión.
- Exploración de vecinos.
- Complejidad **O(R × C)**.

---

# 📚 Archivo

```text
H.cpp
```

Contiene una implementación en **C++17** basada en **Depth First Search (DFS)**, la cual recorre el mapa identificando y contabilizando correctamente todas las islas presentes mediante la exploración de sus celdas conectadas horizontal y verticalmente.
