# 🧩 Sudoku Solver con Backtracking (C++)

![C++](https://img.shields.io/badge/C%2B%2B-17-blue)
![Algorithm](https://img.shields.io/badge/Algorithm-Backtracking-green)
![Competitive Programming](https://img.shields.io/badge/Competitive%20Programming-Sudoku-orange)

## 📖 Descripción

Este proyecto implementa un **solucionador de Sudoku 9x9** utilizando la técnica de **Backtracking**, uno de los algoritmos más importantes en Programación Competitiva.

El programa recibe un tablero parcialmente lleno desde un archivo de entrada (`in.txt`) y encuentra una solución válida respetando las reglas clásicas del Sudoku:

* Cada fila debe contener los números del 1 al 9 sin repetirse.
* Cada columna debe contener los números del 1 al 9 sin repetirse.
* Cada subcuadrícula 3x3 debe contener los números del 1 al 9 sin repetirse.

---

# 🚀 Algoritmo Utilizado

## Backtracking

El algoritmo busca una celda vacía (valor 0) y prueba colocar números del 1 al 9.

Para cada número:

1. Verifica si puede colocarse.
2. Si es válido:

   * Lo coloca temporalmente.
   * Continúa resolviendo el resto del tablero.
3. Si posteriormente encuentra un conflicto:

   * Retrocede (Backtrack).
   * Borra el número colocado.
   * Prueba otro valor.

Este proceso continúa hasta:

✅ Encontrar una solución completa.

o

❌ Determinar que el Sudoku no tiene solución.

---

# 📂 Estructura del Proyecto

```text
Sudoku/
│
├── main.cpp       # Código fuente principal
├── in.txt         # Archivo de entrada
├── sudoku.cbp     # Proyecto CodeBlocks
└── README.md      # Documentación
```

---

# ⚙️ Compilación

## CodeBlocks

1. Abrir el archivo:

```text
sudoku.cbp
```

2. Presionar:

```text
Build and Run (F9)
```

---

## G++

```bash
g++ main.cpp -o sudoku
```

Ejecutar:

```bash
./sudoku
```

En Windows:

```bash
sudoku.exe
```

---

# 📥 Formato de Entrada

El programa lee desde:

```cpp
freopen("in.txt","r",stdin);
```

Cada línea representa:

```text
fila columna valor
```

Donde:

* fila = 1..9
* columna = 1..9
* valor = 1..9

Ejemplo:

```text
1 1 5
1 2 3
1 5 7
```

Significa:

```text
5 3 _ _ 7 _ _ _ _
```

---

# 📝 Ejemplo de Entrada

Archivo:

```text
1 1 5
1 2 3
1 5 7
2 1 6
2 4 1
2 5 9
2 6 5
3 2 9
3 3 8
3 8 6
4 1 8
4 5 6
4 9 3
5 1 4
5 4 8
5 6 3
5 9 1
6 1 7
6 5 2
6 9 6
7 2 6
7 7 2
7 8 8
8 4 4
8 5 1
8 6 9
8 9 5
9 5 8
9 8 7
9 9 9
```

---

# 📤 Salida Esperada

```text
5 3 4 | 6 7 8 | 9 1 2
6 7 2 | 1 9 5 | 3 4 8
1 9 8 | 3 4 2 | 5 6 7
------+-------+------
8 5 9 | 7 6 1 | 4 2 3
4 2 6 | 8 5 3 | 7 9 1
7 1 3 | 9 2 4 | 8 5 6
------+-------+------
9 6 1 | 5 3 7 | 2 8 4
2 8 7 | 4 1 9 | 6 3 5
3 4 5 | 2 8 6 | 1 7 9
```

---

# 🔄 ¿Cómo probar otros Sudokus?

Simplemente reemplaza el contenido de:

```text
in.txt
```

por otro conjunto de posiciones.

Ejemplo:

```text
1 1 8
1 5 1
2 3 4
2 8 6
3 2 7
3 7 5
```

Luego vuelve a ejecutar el programa.

---

# ❌ Ejemplo de Sudoku sin Solución

Si colocamos valores que se contradicen:

```text
1 1 5
1 2 5
```

La primera fila tendría dos números iguales.

El programa mostrará:

```text
No tiene solucion.
```

---

# 🧠 Complejidad

En el peor caso:

```text
O(9^(n))
```

donde:

```text
n = cantidad de casillas vacías
```

El Backtracking explora diferentes configuraciones hasta encontrar una solución válida.

Aunque el peor caso es costoso, para Sudokus clásicos funciona muy eficientemente.

---

# 📚 Conceptos de Programación Competitiva Aplicados

* Recursión
* Backtracking
* Poda de estados inválidos
* Búsqueda exhaustiva
* Manipulación de matrices
* Validación de restricciones

---

# 🔍 Funcionamiento General

```text
Inicio
   │
   ▼
Leer in.txt
   │
   ▼
Construir tablero
   │
   ▼
Buscar celda vacía
   │
   ▼
Probar valores 1..9
   │
   ├── Válido → continuar
   │
   └── Inválido → probar otro
   │
   ▼
¿Sudoku completo?
   │
   ├── Sí → imprimir solución
   │
   └── No → Backtrack
```

---

# 🎯 Objetivo Académico

Este proyecto fue desarrollado como práctica del curso de **Programación Competitiva**, con el propósito de comprender y aplicar:

* Recursión.
* Backtracking.
* Búsqueda en espacios de estados.
* Resolución de problemas clásicos de concursos de programación.

---

# 👨‍💻 Autor

Proyecto desarrollado con fines educativos para el curso de Programación Competitiva.

Universidad — Ingeniería de Sistemas.

