# Clase 1
---
## Temario

* Historia de C
* Características generales
* Compilación de un programa
* Tipos de datos
* Operadores
* Estructura de un programa

---
## Historia de C 

* Desarrollador entre 1969/1973 por Dennis Ritchie 
* A fines de 1974 fue utilizado para reimplementar el sistema operativo Unix 
* En 1980 ANSI comenzó la estandarización del lenguaje
* A partir de 1990, ISO adopta ANSI C en el estandar conocido como C89/C90
* A fines de los '90s, se revisa el estándar y surge C99 que incorpora nuevas
  características que fueron revolucionarias

---
## Quiénes lo utilizan

* Nuevos lenguajes mantienen expresiones similares en su sintaxis, como
por ejemplo: C++, PERL, Javascript, Java, PHP, entre otros.
* En el desarrollo de sistemas operativos, bases de datos, juegos,
compiladores, nuevos lenguajes, etc.

<p class="fragment">
<em>Además, programar en C, motiva la adopción de buenas prácticas de programación</em>
</p>
---
## Características

* Combina elementos de alto nivel con características de bajo nivel
* Es un lenguaje pequeño, con una sintaxis simple
* Es orientado a expresiones
* Es base de lenguajes modernos
* Código *"portable"*
* Extensible mediante el uso de librerías
* Contempla sólo tipos de datos básicos

---
## Características

* No es orientado a objetos
* No es un lenguaje de bajo nivel
* No provee primitivas de entrada salida
* No realiza comprobación de errores en tiempo de ejecución
---
## Hola mundo

Asumiendo el archivo se llama `hola_mundo.c`

```c
#include <stdio.h>

int main() 
{
    printf("Hola Mundo\n");
    return (0);
}
```

```bash
$ gcc hola_mundo.c -o hola_mundo -Wall
```
---
## Fases en la creación de un programa

![Fases de compilación](images/01 - Fases de compilacion.svg)

---
##  Tipos de datos

* Definen la representación interna de una variable y un conjunto de valores
posibles.
* La definición original de C era sumamente permisiva respecto de las
conversiones de tipos
  * Actualmente se requiere una adecuada declaración y conversión explícita
* Tipos de datos en C:
  * **Básicos:** caracteres, enteros y números de punto flotante, punteros. 
  * **Derivados:** arreglos, estructuras y uniones. 

---
##  Tipos de datos básicos
| Tipo      | Descripción             | 32bits| 64bits|
| --------  |:-----------------       | -----:| ----: |
| `char`    | caracter                | 8     |8      |
| `short`   | entero corto con signo  | 16    | 16    |
| `int`     | entero con signo        | 32    | 32    |
| `long`    | entero largo con signo  | 32    | 64    |

---
##  Tipos de datos básicos
| Tipo      | Descripción             | 32bits| 64bits|
| --------  |:-----------------       | -----:| ----: |
| `float`   | flotante simple         | 32| 32|
| `double`  | flotante doble          | 64| 64|
| `pointer` | puntero a una posición de memoria | 32| 64|
| `void`    | idem `char`. Empleado para tipos genéricos |-|-|

---
## Constantes literales: Punto Flotante

La expresión:

```c
3.45 – 1.2e+34
```

Significa **3.45 - (1.2*10<sup>34</sup>)**


---
## Constantes literales: Enteros

| Base | Representación|
|:---         |---: |
| Decimal     |  14 |
| Hexadecimal | 0xE |
| Octal       | 016 |

---
## Constantes literales: Enteros

### Calificadores o modificadores

Se aplican para determinar si el entero es con signo, corto o largo:

| Literal | Representación  | Significado             |
| ---     | :---:           |:---:                    |
|`23L`    | decimal         |`23 long int`           |
|`23LU`   | decimal         |`23 unsigned long int`  |
|`023LU`  | octal           |`19 unsigned long int`  |
|`0XFUL`  | hexadecimal     |`15 unsigned long int`  |
---
## Constantes literales: Char
