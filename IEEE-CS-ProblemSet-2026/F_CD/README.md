# 🅵 Problema F - CD

<div align="center">

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)
![Algorithm](https://img.shields.io/badge/Algorithm-Two%20Pointers-blue)
![Language](https://img.shields.io/badge/C%2B%2B-17-blue)
![Status](https://img.shields.io/badge/Status-Solved-brightgreen)

</div>

---

# 📖 Descripción

Jack y Jill poseen una colección de CDs, donde cada uno tiene una única copia de cada disco.

Las listas de números de catálogo presentan las siguientes características:

- No contienen elementos repetidos dentro de una misma colección.
- Se encuentran ordenadas de forma creciente.

El objetivo es determinar cuántos CDs aparecen en ambas colecciones.

---

# 📥 Entrada

La entrada contiene varios casos de prueba.

Cada caso inicia con dos enteros:

- **N**: cantidad de CDs de Jack.
- **M**: cantidad de CDs de Jill.

Luego se leen:

- **N** líneas con los números de catálogo de Jack.
- **M** líneas con los números de catálogo de Jill.

La entrada finaliza cuando se encuentra:

```text
0 0
```

### Ejemplo

```text
3 3
1
2
3
1
2
4
```

---

# 📤 Salida

Para cada caso de prueba se debe imprimir un único número entero que indique la cantidad de CDs presentes en ambas colecciones.

### Ejemplo

```text
2
```

---

# 💡 Estrategia de solución

Como ambas colecciones ya se encuentran ordenadas, no es necesario comparar todos los elementos entre sí.

Se utilizan **dos punteros**:

- Uno recorre la colección de Jack.
- Otro recorre la colección de Jill.

Durante el recorrido:

- Si ambos números son iguales, se encontró un CD en común.
- Si el número de Jack es menor, se avanza únicamente el puntero de Jack.
- Si el número de Jill es menor, se avanza únicamente el puntero de Jill.

Este procedimiento continúa hasta llegar al final de alguna de las dos listas.

---

# 🧠 Algoritmo utilizado

**Two Pointers (Dos Punteros)**

El algoritmo aprovecha que ambas colecciones están ordenadas para recorrerlas simultáneamente y encontrar las coincidencias sin realizar comparaciones innecesarias.

---

# 🚀 Complejidad

| Complejidad | Valor |
|-------------|-------|
| Tiempo | **O(N + M)** |
| Memoria | **O(N + M)** |

Donde:

- **N** es la cantidad de CDs de Jack.
- **M** es la cantidad de CDs de Jill.

Cada elemento de ambas listas se procesa una única vez.

---

# 📝 Ejemplo de funcionamiento

### Entrada

```text
3 3
1
2
3
1
2
4
```

Colección de Jack

```text
1 2 3
```

Colección de Jill

```text
1 2 4
```

Comparaciones realizadas:

| Jack | Jill | Acción |
|------|------|--------|
| 1 | 1 | Coinciden → contador = 1 |
| 2 | 2 | Coinciden → contador = 2 |
| 3 | 4 | Avanza Jack |

Jack llega al final de su colección, por lo que el proceso termina.

### Salida

```text
2
```

---

# 📂 Estructura del código

El programa se organiza en las siguientes etapas:

1. Leer la cantidad de CDs de ambos participantes.
2. Leer ambas colecciones.
3. Inicializar dos punteros.
4. Recorrer simultáneamente ambas listas.
5. Contar los elementos en común.
6. Imprimir el resultado para cada caso de prueba.

---

# 🛠️ Posibles mejoras

Otra alternativa consiste en almacenar una colección en una estructura como `set` o `unordered_set` y buscar cada elemento de la otra colección.

Sin embargo, dado que el problema garantiza que ambas listas están ordenadas, la técnica de **Dos Punteros** resulta más eficiente y sencilla, evitando búsquedas adicionales y aprovechando el orden natural de los datos.

---

# 🎯 Conceptos aprendidos

- Técnica de Dos Punteros (Two Pointers).
- Recorrido simultáneo de arreglos ordenados.
- Comparación eficiente de secuencias.
- Procesamiento de múltiples casos de prueba.
- Optimización de algoritmos lineales.

---

# 📚 Archivo

```text
F.cpp
```

Contiene una implementación en **C++17** que utiliza la técnica de **Dos Punteros** para recorrer simultáneamente ambas colecciones y contar eficientemente la cantidad de CDs que Jack y Jill tienen en común.
