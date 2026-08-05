# 🅳 Problema D - Baloncesto Uno contra Uno

<div align="center">

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-success)
![Algorithm](https://img.shields.io/badge/Algorithm-Simulation-blue)
![Language](https://img.shields.io/badge/C%2B%2B-17-blue)
![Status](https://img.shields.io/badge/Status-Solved-brightgreen)

</div>

---

# 📖 Descripción

En un partido de baloncesto **uno contra uno**, participan dos jugadoras:

- **A** → Alicia
- **B** → Bárbara

Cada anotación registrada puede valer **1** o **2** puntos.

Las reglas para determinar al ganador son:

- Gana la primera jugadora que alcance **11 puntos**.
- Si ambas llegan a **10–10**, el partido continúa hasta que una consiga **2 puntos de ventaja**.

Se recibe el registro completo del partido y se debe determinar quién fue la ganadora.

---

# 📥 Entrada

La entrada consiste en una única cadena formada por pares de caracteres.

Cada par representa:

- Una letra (`A` o `B`) indicando quién anotó.
- Un número (`1` o `2`) indicando los puntos obtenidos.

### Ejemplo

```text
A2B1A2B2A1A2A2A2
```

---

# 📤 Salida

Se debe imprimir únicamente un carácter:

- `A` si ganó Alicia.
- `B` si ganó Bárbara.

### Ejemplo

```text
A
```

---

# 💡 Estrategia de solución

La solución consiste en simular el desarrollo del partido.

Se mantienen dos variables:

- Puntaje de Alicia.
- Puntaje de Bárbara.

Se recorre la cadena de dos en dos caracteres:

1. Se identifica qué jugadora anotó.
2. Se suman los puntos correspondientes.
3. Después de cada anotación se verifica si existe una ganadora.

Existen dos casos:

### Caso 1

Si alguna jugadora aún no llegó a 10 puntos.

La primera que alcance **11 puntos** gana inmediatamente.

### Caso 2

Si ambas tienen al menos 10 puntos.

El partido continúa hasta que alguna obtenga una diferencia mínima de **2 puntos**.

Como el enunciado garantiza que la entrada corresponde a un partido válido y finalizado, el programa termina apenas encuentra una ganadora.

---

# 🧠 Algoritmo utilizado

**Simulación**

El problema se resuelve recorriendo cronológicamente todas las anotaciones y actualizando el marcador después de cada una.

---

# 🚀 Complejidad

| Complejidad | Valor |
|-------------|-------|
| Tiempo | **O(N)** |
| Memoria | **O(1)** |

Donde:

- **N** es la longitud de la cadena de entrada.

Cada anotación se procesa exactamente una vez.

---

# 📝 Ejemplo de funcionamiento

### Entrada

```text
A2B1A2B2A1A2A2A2
```

### Desarrollo del partido

| Jugada | Alicia | Bárbara |
|--------|--------:|---------:|
| A2 | 2 | 0 |
| B1 | 2 | 1 |
| A2 | 4 | 1 |
| B2 | 4 | 3 |
| A1 | 5 | 3 |
| A2 | 7 | 3 |
| A2 | 9 | 3 |
| A2 | 11 | 3 |

Alicia alcanza primero los **11 puntos**, por lo tanto gana el partido.

### Salida

```text
A
```

---

# 📂 Estructura del código

El programa está organizado en las siguientes etapas:

1. Leer la cadena con el registro del partido.
2. Inicializar los puntajes de ambas jugadoras.
3. Recorrer la cadena procesando cada anotación.
4. Actualizar el marcador.
5. Verificar la condición de victoria después de cada jugada.
6. Imprimir la ganadora.

---

# 🛠️ Posibles mejoras

La solución ya es óptima para las restricciones del problema.

Como alternativa, podría implementarse una función independiente para verificar las condiciones de victoria, mejorando la modularidad del código sin modificar su complejidad.

---

# 🎯 Conceptos aprendidos

- Simulación de procesos.
- Manejo de cadenas.
- Actualización de estados.
- Uso de estructuras condicionales.
- Implementación de reglas de juego.
- Recorrido secuencial de datos.

---

# 📚 Archivo

```text
D.cpp
```

Contiene una implementación en **C++17** que simula el desarrollo del partido y determina correctamente la jugadora ganadora siguiendo las reglas establecidas en el enunciado.
