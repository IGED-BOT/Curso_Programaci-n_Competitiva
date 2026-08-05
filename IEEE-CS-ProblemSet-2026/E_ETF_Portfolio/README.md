# 🅴 Problema E - Portafolio de Inversión en ETFs

<div align="center">

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)
![Algorithm](https://img.shields.io/badge/Algorithm-Backtracking-blue)
![Language](https://img.shields.io/badge/C%2B%2B-17-blue)
![Status](https://img.shields.io/badge/Status-Solved-brightgreen)

</div>

---

# 📖 Descripción

Se dispone de un capital exacto **C** que debe invertirse completamente en una selección de **ETFs** (Exchange Traded Funds).

Cada ETF posee un precio entero y presenta las siguientes características:

- No se pueden comprar fracciones.
- Un mismo ETF solo puede comprarse una vez.
- Todos los precios son diferentes.

El objetivo es determinar cuántas combinaciones distintas de ETFs permiten invertir exactamente el capital disponible.

---

# 📥 Entrada

La primera línea contiene dos enteros:

- **C**: capital disponible.
- **N**: cantidad de ETFs.

La segunda línea contiene **N** enteros que representan el precio de cada ETF.

### Ejemplo

```text
100 5
20 30 40 50 60
```

---

# 📤 Salida

Se debe imprimir un único número entero que represente la cantidad de combinaciones posibles cuya suma sea exactamente igual al capital disponible.

### Ejemplo

```text
2
```

---

# 💡 Estrategia de solución

Como la cantidad máxima de ETFs es **20**, es posible explorar todas las combinaciones utilizando **Backtracking**.

Para cada ETF existen únicamente dos opciones:

- No seleccionarlo.
- Seleccionarlo.

Durante la búsqueda se mantiene la suma acumulada.

- Si la suma supera el capital disponible, esa rama se descarta inmediatamente.
- Si se han evaluado todos los ETFs y la suma coincide exactamente con el capital, se incrementa el contador de soluciones.

De esta manera se exploran únicamente las combinaciones posibles sin repetir elementos.

---

# 🧠 Algoritmo utilizado

**Backtracking (Búsqueda Recursiva)**

La recursión permite generar todas las combinaciones posibles de ETFs tomando una decisión en cada paso.

Cada llamada representa una nueva elección sobre el ETF actual.

---

# 🚀 Complejidad

| Complejidad | Valor |
|-------------|-------|
| Tiempo | **O(2ᴺ)** |
| Memoria | **O(N)** |

Donde:

- **N** corresponde a la cantidad de ETFs.

Aunque la complejidad es exponencial, el límite del problema (**N ≤ 20**) permite resolverlo sin inconvenientes.

---

# 📝 Ejemplo de funcionamiento

### Entrada

```text
100 5
20 30 40 50 60
```

Las combinaciones posibles son:

| Combinación | Suma |
|-------------|------|
| 20 + 30 + 50 | 100 |
| 40 + 60 | 100 |

No existen más combinaciones que sumen exactamente el capital.

### Salida

```text
2
```

---

# 📂 Estructura del código

El programa se divide en las siguientes etapas:

1. Leer el capital y la cantidad de ETFs.
2. Almacenar los precios.
3. Ejecutar la función recursiva de Backtracking.
4. Explorar todas las combinaciones posibles.
5. Contar aquellas cuya suma sea exactamente igual al capital.
6. Imprimir la respuesta.

---

# 🛠️ Posibles mejoras

Para valores mayores de **N**, una solución basada en **Meet in the Middle** permitiría reducir significativamente el tiempo de ejecución.

Sin embargo, para las restricciones de este problema (**N ≤ 20**), el algoritmo de Backtracking resulta suficientemente eficiente y mantiene un código más sencillo y fácil de comprender.

---

# 🎯 Conceptos aprendidos

- Backtracking.
- Recursión.
- Búsqueda exhaustiva.
- Generación de subconjuntos.
- Poda de ramas.
- Conteo de soluciones.

---

# 📚 Archivo

```text
E.cpp
```

Contiene una implementación en **C++17** basada en **Backtracking**, que genera todas las combinaciones posibles de ETFs y cuenta aquellas cuya suma coincide exactamente con el capital disponible.
