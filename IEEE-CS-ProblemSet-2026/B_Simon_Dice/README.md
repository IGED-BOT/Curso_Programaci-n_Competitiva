# 🅱️ Problema B - Simon Dice

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-success)
![Algorithm](https://img.shields.io/badge/Algorithm-Strings-blue)

---

# 📖 Descripción

Se reciben varias instrucciones.

Solo deben imprimirse aquellas que comienzan exactamente con

Simon says

---

# 📥 Entrada

Número de instrucciones seguido de las instrucciones.

---

# 📤 Salida

Las órdenes válidas.

---

# 💡 Estrategia de solución

Para cada línea:

- verificar el prefijo
- imprimir el resto de la cadena

---

# 🧠 Algoritmo utilizado

Procesamiento de cadenas.

---

# 🚀 Complejidad

| Tiempo | Memoria |
|---------|---------|
| O(N·L) | O(1) |

---

# 📝 Ejemplo

Entrada

```text
Simon says smile.
```

Salida

```text
smile.
```

---

# 📂 Estructura

- Leer N
- Leer líneas
- Comparar prefijo
- Imprimir

---

# 🛠️ Posibles mejoras

Puede utilizarse `starts_with()` en C++20.

---

# 🎯 Conceptos aprendidos

- Strings
- getline()
- substr()
