
# 🅲 Problema C - Puntuación del Concurso ACM

<div align="center">

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-success)
![Algorithm](https://img.shields.io/badge/Algorithm-Simulation-blue)
![Language](https://img.shields.io/badge/C%2B%2B-17-blue)
![Status](https://img.shields.io/badge/Status-Solved-brightgreen)

</div>

---

# 📖 Descripción

En un concurso de programación tipo **ACM**, cada envío realizado por un equipo queda registrado con:

- El minuto del envío.
- La letra del problema.
- El resultado (`right` o `wrong`).

El objetivo es calcular:

- La cantidad de problemas resueltos.
- El tiempo total acumulado.

Por cada envío incorrecto (`wrong`) realizado **antes** de resolver un problema, se agregan **20 minutos de penalización**. Si un problema nunca es resuelto, sus intentos incorrectos no generan penalización. Además, cualquier envío realizado después de resolver un problema debe ignorarse.

---

# 📥 Entrada

La entrada está formada por varias líneas con el siguiente formato:

```text
minuto problema resultado
```

donde:

- `minuto`: instante en que se realizó el envío.
- `problema`: letra identificadora del problema.
- `resultado`: `right` o `wrong`.

La entrada termina cuando se lee:

```text
-1
```

### Ejemplo

```text
3 E right
10 A wrong
30 C wrong
50 B wrong
100 A wrong
200 A right
250 C wrong
300 D right
-1
```

---

# 📤 Salida

Se deben imprimir dos números separados por un espacio:

1. Cantidad de problemas resueltos.
2. Tiempo total acumulado (incluyendo penalizaciones).

### Ejemplo

```text
3 543
```

---

# 💡 Estrategia de solución

La solución consiste en simular el comportamiento del sistema de evaluación del concurso.

Para cada problema se almacena:

- Si ya fue resuelto.
- Cuántos intentos incorrectos tuvo antes de resolverse.

Al procesar cada envío:

- Si el problema ya fue resuelto, el envío se ignora.
- Si el resultado es `wrong`, se incrementa el contador de errores.
- Si el resultado es `right`:
  - Se marca el problema como resuelto.
  - Se incrementa el número de problemas resueltos.
  - Se suma al tiempo el minuto del envío más **20 minutos por cada intento incorrecto previo**.

Al finalizar la lectura, se imprimen los resultados obtenidos.

---

# 🧠 Algoritmo utilizado

**Simulación**

Se utilizan estructuras asociativas (`map`) para almacenar el estado de cada problema durante el procesamiento de los envíos.

---

# 🚀 Complejidad

| Complejidad | Valor |
|-------------|-------|
| Tiempo | **O(N)** |
| Memoria | **O(P)** |

Donde:

- **N** es la cantidad de envíos realizados.
- **P** es la cantidad de problemas distintos registrados.

---

# 📝 Ejemplo de funcionamiento

### Entrada

```text
7 H right
15 B wrong
30 E wrong
35 E right
80 B wrong
80 B right
100 D wrong
100 C wrong
300 C right
300 D wrong
-1
```

### Procesamiento

| Problema | Resultado |
|----------|-----------|
| H | Resuelto en el minuto 7 |
| E | 1 error + resuelto en 35 |
| B | 2 errores + resuelto en 80 |
| C | 1 error + resuelto en 300 |
| D | Nunca se resuelve |

Tiempo acumulado:

- H → 7
- E → 35 + 20
- B → 80 + 40
- C → 300 + 20

Total:

```text
502
```

Problemas resueltos:

```text
4
```

Salida:

```text
4 502
```

---

# 📂 Estructura del código

El programa se divide en las siguientes etapas:

1. Lectura de cada envío.
2. Verificación de si el problema ya fue resuelto.
3. Registro de intentos incorrectos.
4. Cálculo del tiempo cuando un problema es resuelto.
5. Impresión de la cantidad de problemas resueltos y del tiempo total.

---

# 🛠️ Posibles mejoras

Esta solución ya cumple eficientemente con las restricciones del problema.

Como alternativa, podrían utilizarse arreglos indexados por la letra del problema en lugar de `map`, reduciendo ligeramente el consumo de memoria y mejorando el tiempo constante de acceso.

---

# 🎯 Conceptos aprendidos

- Simulación de eventos.
- Manejo de estados.
- Uso de estructuras asociativas (`map`).
- Acumulación de penalizaciones.
- Procesamiento secuencial de datos.
- Implementación de reglas de puntuación de concursos ACM.

---

# 📚 Archivo

```text
C.cpp
```

Contiene una implementación en **C++17** que procesa los envíos en orden cronológico y calcula correctamente la puntuación final del concurso.
