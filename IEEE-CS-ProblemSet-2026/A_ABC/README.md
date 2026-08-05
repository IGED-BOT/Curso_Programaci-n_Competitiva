# 🅰️ Problema A - ABC

<div align="center">

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-success)
![Algorithm](https://img.shields.io/badge/Algorithm-Sorting-blue)
![Language](https://img.shields.io/badge/C%2B%2B-17-blue)

</div>

---

# 📖 Descripción

Se reciben tres números enteros positivos. Después de ordenarlos de menor a mayor, estos representan los valores **A**, **B** y **C**.

Posteriormente se recibe una cadena formada por las letras **A**, **B** y **C**, indicando el orden en que deben imprimirse dichos números.

---

# 📥 Entrada

- Tres números enteros.
- Una cadena de tres caracteres.

Ejemplo

```text
1 5 3
ABC
```

---

# 📤 Salida

```text
1 3 5
```

---

# 💡 Estrategia de solución

La solución consiste en:

1. Leer los tres números.
2. Ordenarlos.
3. Asociar:

- A → menor
- B → medio
- C → mayor

4. Recorrer la cadena e imprimir el número correspondiente.

---

# 🧠 Algoritmo utilizado

- Ordenamiento (`sort()`)

---

# 🚀 Complejidad

| Tiempo | Memoria |
|---------|---------|
| O(1) | O(1) |

---

# 📝 Ejemplo

Entrada

```text
6 4 2
CAB
```

Ordenados

```text
2 4 6
```

Salida

```text
6 2 4
```

---

# 📂 Estructura del código

- Leer datos
- Ordenar
- Leer cadena
- Imprimir resultado

---

# 🛠️ Posibles mejoras

No son necesarias debido al tamaño fijo de la entrada.

---

# 🎯 Conceptos aprendidos

- Ordenamiento
- Arreglos
- Cadenas
